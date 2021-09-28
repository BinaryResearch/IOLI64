#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char password[24] = { 0 };

	printf("IOLI Crackme Level 0x00\n");
	printf("Password: ");
	scanf("%s", password);

	i = strcmp(password, "250382");
	if (i == 0) {
		printf("Password OK :)\n");
	}
	else {
		printf("Invalid password!\n");
	}

	return 0;
}
