#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check(char *input)
{
	int input_len;
	int char_as_int;
	char input_char;

	int sum_is_15 = 0;
	int i = 0;

	while(1) {
		input_len = strlen(input);

		if (input_len <= i) {
			printf("Password Incorrect!\n");
			return;  //no value needed since return type is void
		}

		input_char = input[i];
		sscanf(&input_char, "%d", &char_as_int);
		sum_is_15 += char_as_int;

		if (sum_is_15 == 15) {
			break;
		}

		i++;
	}

	printf("Password OK!\n");

	exit(0);
}


int main(void)
{
	char input_buf[120];

	printf("IOLI Crackme Level 0x04\n");
	printf("Password: ");
	scanf("%s", input_buf);
	
	check(input_buf);

	return 0;
}
