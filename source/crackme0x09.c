#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int LOL = 0;


int dummy(int input, char **envp)
{
	while (*envp) {
		if (strncmp(*envp, "LOLO", 3) == 0) {
			LOL = 1;
			return 1;
		}
		*envp++;
	}
	exit(-1);
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
				if (LOL == 1) {
					printf("Password OK!\n");
				}
				exit(0);
			}
		}
	}

	return;
}


void che(void)
{
	printf("Password Incorrect!\n");
	exit(0);
}


void check(char *input, char **envp)
{
	int input_len;
	int char_as_int;
	int dummy_retval;
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

	che();

        dummy_retval = dummy(char_as_int, envp);
        if (dummy_retval) {
                for (i = 0; i < 10; i++) {
                        if ((char_as_int & 1) == 0) {
                               	printf("wtf!\n");
                                exit(0);
			}
                }
        }

	return;
}


int main(int argc, char *argv[], char *envp[])
{
	char input_buf[120];

	printf("IOLI Crackme Level 0x09\n");
	printf("Password: ");
	scanf("%s", input_buf);
	
	check(input_buf, envp);

	return 0;
}
