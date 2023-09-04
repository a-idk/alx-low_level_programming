#ifndef MAIN_H
#define MAIN_H

/* Header files */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void is_elf(unsigned char *e_ident);
void magic_num(unsigned char *e_ident);
void class_print(unsigned char *e_ident);
void data_printer(unsigned char *e_ident);
void version_printer(unsigned char *e_ident);
void os_abi_printer(unsigned char *e_ident);
void abi_printer(unsigned char *e_ident);
void type_printer(unsigned int e_type, unsigned char *e_ident);
void entry_pt(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void error_100(int fd);
char *bytes_to_buff(char *f);

#endif /* main.h */
