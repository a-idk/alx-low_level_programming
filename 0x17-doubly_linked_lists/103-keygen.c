/* Title: 103-keygen.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that generates and prints passwords
 * for the crackme5 executable.
 * @argc: argument count
 * @argv: argument vector
 * @a_idk coding
 *
 * Return: Always 0 on Success!
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/* initializing variables */
	int idx;
	char password[7];
	char *code;
	int len = strlen(argv[1]);
	int temp;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	temp = (len ^ 59) & 63, password[0] = code[temp];
	temp = 0; /* for temp = 0 */
	for (idx = 0; idx < len; idx += 1)
		temp = temp + argv[1][idx];
	password[1] = code[(temp ^ 79) & 63];
	temp = 1; /* for temp = 1 */
	for (idx = 0; idx < len; idx += 1)
		temp = temp * argv[1][idx];
	password[2] = code[(temp ^ 85) & 63];
	temp = 0; /* setting tempt to 0 */
	for (idx = 0; idx < len; idx += 1)
	{
		if (argv[1][idx] > temp)
			temp = argv[1][idx];
	}
	srand(temp ^ 14), password[3] = code[rand() & 63];
	temp = 0; /* setting temp to 0 */
	for (idx = 0; idx < len; idx += 1)
		temp = temp + (argv[1][idx] * argv[1][idx]);
	password[4] = code[(temp ^ 239) & 63];
	for (idx = 0; idx < argv[1][0]; idx += 1)
		temp = rand();
	password[5] = code[(temp ^ 229) & 63], password[6] = '\0';
	printf("%s", password);
	return (0);
}
