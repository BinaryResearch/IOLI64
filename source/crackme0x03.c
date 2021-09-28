#include <stdio.h>
#include <string.h>


void shift(char *hardcoded_string)
{
	int len;
	int i;
	char message[120];

	i = 0;
	while (1) {
		len = strlen(hardcoded_string);
		if (len <= i) {
			break;
		}
		else {
			message[i] = hardcoded_string[i] - 3;
			i++;
		}
	}

	message[i] = '\0';
	printf("%s\n", message);
	return;
}


void test(int user_input, int password)
{
	if (user_input == password) {
		shift("Sdvvzrug#RN$$$#=,");
	}
	else {
		shift("Lqydolg#Sdvvzrug$");
	}
}


int main(void)
{
	int input;

	printf("IOLI Crackme Level 0x03\n");
  	printf("Password: ");
  	scanf("%d", &input);

	int a = 0x5a;
	int b = 0x1ec;
	int c = a + b;

        test(input, c * c);

	return 0;
}
