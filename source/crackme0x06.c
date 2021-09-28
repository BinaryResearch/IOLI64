#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int dummy(int input, char **envp)
{
	while (*envp) {
		if (strncmp(*envp, "LOLO", 3) == 0) {
			return 1;
		}
		*envp++;
	}
	return 0;
}


void parell(char *input, char **envp)
{
	int char_as_int;
	int dummy_retval;
	int i;

	sscanf(input, "%d", &char_as_int);

	dummy_retval = dummy(char_as_int, envp);
	if (dummy_retval) {
		for (i = 0; i < 10; i++) {
			if ((char_as_int & 1) == 0) {
				printf("Password OK!\n");
				exit(0);
			}
		}
	}

	return;
}


void check(char *input, char **envp)
{
	int input_len;
	int char_as_int;
	char input_char;

	int sum_is_16 = 0;
	int i = 0;

	while(1) {
		input_len = strlen(input);

		if (input_len <= i) {
			printf("Password Incorrect!\n");
			return;
		}

		input_char = input[i];
		sscanf(&input_char, "%d", &char_as_int);
		sum_is_16 += char_as_int;

		if (sum_is_16 == 16) {
			parell(input, envp);
		}

		i++;
	}

	printf("Password Incorrect!\n");

	return;
}


int main(int argc, char *argv[], char *envp[])
{
	char input_buf[120];

	printf("IOLI Crackme Level 0x06\n");
	printf("Password: ");
	scanf("%s", input_buf);
	
	check(input_buf, envp);

	return 0;
}
