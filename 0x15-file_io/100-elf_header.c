#include "main.h"
#include <stdio.h>
#include <elf.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * isELF - Checks whether or not the file associated with fd is an ELF file
 *
 * @fd: File descriptor associated used to access the input file
 *
 * Return: true if fd is a descriptor for an ELF file, false Otherwise
 */
bool isELF(int fd)
{
	char *buf;

	buf = malloc(sizeof(*buf) * 4);
	if (buf == (void *) 0)
		return (false);
	read(fd, buf, 4);
	if (buf[0] == 0x7f && buf[1] == 'E' && buf[2] == 'L' && buf[3] == 'F')
		return (true);
	return (false);
}

/**
 * printMagic - Prints the magic for the ELF file
 *
 * @e_ident: The e_ident array from the ElfN_Ehdr struct
 *
 * Return: Nothing
 */
void printMagic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		if (i)
			printf(" ");
		printf("%02x", e_ident[i]);
	}
	printf("\n");
}

/**
 * printClass - Prints the architecture for the binary
 *
 * @ei_class: Value indicating the type of the architecture 32, 64, or None
 *
 * Return: Nothing
 */
void printClass(unsigned char ei_class)
{
	printf("  Class:                             ");
	switch (ei_class)
	{
		case ELFCLASSNONE:
			printf("Invalid Class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			break;
	}
}

/**
 * printDataEncoding - Prints the data encoding of the processor-specific data
 *
 * @ei_data: Value indicating the type of data encoding
 *
 * Return: Nothing
 */
void printDataEncoding(unsigned char ei_data)
{
	printf("  Data:                              ");
	switch (ei_data)
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
		default:
			break;
	}
}

/**
 * printVersion - Prints the version number of the ELF specification
 *
 * @ei_version: Value indicating the version number
 *
 * Return: Nothing
 */
void printVersion(unsigned char ei_version)
{
	printf("  Version:                           ");
	switch (ei_version)
	{
		case EV_NONE:
			printf("%x (invalid)\n", EV_NONE);
			break;
		case EV_CURRENT:
			printf("%x (current)\n", EV_CURRENT);
			break;
		default:
			break;
	}
}

/**
 * printOSABI - Prints the OS and ABI to which the object is targeted
 *
 * @ei_osabi: Value indicating the OS and ABI
 *
 * Return: Nothing
 */
void printOSABI(unsigned char ei_osabi)
{
	printf("  OS/ABI:                            ");
	switch (ei_osabi)
	{
		case ELFOSABI_NONE | ELFOSABI_SYSV:
			printf("UNIX System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded)\n");
			break;
		default:
			break;
	}
}

/**
 * printABIVersion - Prints the verison of the ABI of the targeted object
 *
 * @ei_abiversion: Value indication the version of ABI
 *
 * Return: Nothing
 */
void printABIVersion(unsigned char ei_abiversion)
{
	printf("  ABI Version:                       %x\n", ei_abiversion);
}

/**
 * printType - Prints the object file type
 *
 * @e_type: Value indicating the object's file type
 *
 * Return: Nothing
 */
void printType(unsigned short e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("None (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			break;
	}
}

/**
 * printEntry - Prints the entry point address
 *
 * @e_entry: Address to print
 *
 * Return: Nothing
 */
void printEntry(Elf64_Addr e_entry)
{
	printf("  Entry point address:               0x%lx\n", e_entry);
}

/**
 * main - A program to display the information
 *
 * @argc: Argument count
 * @argv: String list of the arguments passed to the program
 *
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		printf("Usage: %s elf_filename\n", argv[0]);
		exit(96);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Error: Can't read from %s\n", argv[1]);
		exit(97);
	}
	if (isELF(fd))
	{
		header = malloc(sizeof(*header));
		lseek(fd, 0, SEEK_SET);
		read(fd, header, sizeof(*header));
		printf("ELF Header:\n");
		printMagic(header->e_ident);
		printClass(header->e_ident[EI_CLASS]);
		printDataEncoding(header->e_ident[EI_DATA]);
		printVersion(header->e_ident[EI_VERSION]);
		printOSABI(header->e_ident[EI_OSABI]);
		printABIVersion(header->e_ident[EI_ABIVERSION]);
		printType(header->e_type);
		printEntry(header->e_entry);
	} else
	{
		dprintf(STDERR_FILENO,
				"Error: Not an ELF file. it has the wrong magic bytes at the start\n");
		close(fd);
		exit(98);
	}
	return (0);
}
