#include <stdio.h>
#include "passgen.h"

int main()
{
	printf("Enter a password length: ");
	int password_length;
	scanf("%d", &password_length);
	if (password_length >= 6)
		passgen(password_length);
	else
		printf("Your password is too small. Make him longer!");
	return 0;
}
