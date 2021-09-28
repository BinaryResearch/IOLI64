#include <stdio.h>

int main(void)
{
	int input;

	printf("IOLI Crackme Level 0x02\n");
  	printf("Password: ");
  	scanf("%d", &input);

	int a = 0x5a;
	int b = 0x1ec;
	int c = a + b;

        if (input == c * c) {
        	printf("Password OK :)\n");
  	}
  	else {
    		printf("Invalid Password!\n");
  	}

	return 0;
}
