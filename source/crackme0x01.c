#include <stdio.h>

int main(void)
{
	int i;

	printf("IOLI Crackme Level 0x01\n");
	printf("Password: ");
	scanf("%d", &i);

	if (i == 0x149a) {
		printf("Password OK :)\n");
	}
	else {
		printf("Invalid Password!\n");
	}

	return 0;
}
