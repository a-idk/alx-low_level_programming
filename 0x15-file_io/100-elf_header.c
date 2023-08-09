/* Title: 100-elf_header.c */

/* include header files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

/**
 * is_elf - function that confirms the file is an ELF file
 * @e_ident: A pointer to ELF magic numbers
 * @a_idk
 *
 * Return: Nada!
 */

void is_elf(unsigned char *e_ident)
{
	/* declaring variables */
	int indx;

	for (indx = 0; indx < 4; indx++)
	{
		if ((e_ident[indx] != 'E') && (e_ident[indx] != 'L') &&
		    (e_ident[indx] != 'F') && (e_ident[indx] != 127))
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);
	}
}

/**
 * magic_num - function that prints the magic numbers of an ELF header
 * @e_ident: A pointer to ELF magic numbers
 * @a_idk
 *
 * Return: Nada!
 */

void magic_num(unsigned char *e_ident)
{
	/* declaring variables */
	int indx;

	/* Print the leading word "Magic: " */
	printf(" Magic: ");

	for (indx = 0; indx < EI_NIDENT; indx++)
	{
		printf("%02x", e_ident[indx]);
		if (indx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_print - function that prints the class of an ELF header
 * @e_ident: A pointer to array of ELF class
 * @a_idk
 *
 * Return: Nada!
 */

void class_print(unsigned char *e_ident)
{
	/* Print the leading word "Class: " */
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32: /* class 32 */
		printf("ELF32\n");
		break;
	case ELFCLASS64: /* class 64 */
		printf("ELF64\n");
		break;
	case ELFCLASSNONE: /* No class */
		printf("none\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data_printer - function that prints the data of an ELF header
 * @e_ident: A pointer to array of ELF class
 * @a_idk
 *
 * Return: Nada!
 */

void data_printer(unsigned char *e_ident)
{
	/* Print the leading word "Data: " */
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATA2LSB: /* LSB Data */
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB: /* MSB Data */
		printf("2's complement, big endian\n");
		break;
	case ELFDATANONE: /* No Data */
		printf("none\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * version_printer - function that prints the version of ELF header
 * @e_ident: pointer to array of ELF version
 * @a_idk
 *
 * Return: Nada!
 */

void version_printer(unsigned char *e_ident)
{
	/* Print the leading word "Version: " */
	 printf(" Version: %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}


/**
 * os_abi_printer - function that prints the OS/ABI of ELF header.
 * @e_ident: pointer to array of ELF version.
 * @a_idk
 *
 * Return: Nada!
 */

void os_abi_printer(unsigned char *e_ident)
{
	/* Print the leading word "OS/ABI: " */
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi_printer - function that prints the ABI version of ELF header.
 * @e_ident: pointer to array of ELF ABI version.
 * @a_idk
 *
 * Return: Nada!
 */

void abi_printer(unsigned char *e_ident)
{
	/* Print the leading word "ABI Version: " */
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * type_printer - function that prints the type of ELF header
 * @e_type: ELF type
 * @e_ident: pointer to array of ELF class.
 * @a_idk
 *
 * Return: Nada!
 */

void type_printer(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}

	/* Print the leading word "Type: " */
	printf(" Type: ");

	switch (e_type)
	{
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry_pt - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: pointer to array of ELF class.
 * @a_idk
 *
 * Return: Nada!
 */

void entry_pt(unsigned long int e_entry, unsigned char *e_ident)
{
	/* Print the leading word "Entry point address: " */
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - function that closes ELF file
 * @elf: The file descriptor of an ELF file
 * @a_idk
 *
 * Return: Nada!
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - main program that displays the information
 * contained in the ELF header at the start of the ELF file
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: int 0 on success.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/* declaring variable */
	int fd, rd;
	Elf64_Ehdr *head_file;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	/* Assigning dynamic memory */
	head_file = malloc(sizeof(Elf64_Ehdr));

	if (head_file == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	/* read operation */
	rd = read(fd, head_file, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(head_file), close_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	is_elf(head_file->e_ident);
	printf("ELF Header:\n");
	magic_num(head_file->e_ident);
	class_print(head_file->e_ident);
	data_printer(head_file->e_ident);
	version_printer(head_file->e_ident);
	os_abi_printer(head_file->e_ident);
	abi_printer(head_file->e_ident);
	type_printer(head_file->e_type, head_file->e_ident);
	entry_pt(head_file->e_entry, head_file->e_ident);
	free(head_file), close_elf(fd);
	return (0);
}
