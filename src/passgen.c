#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "passgen.h"

typedef enum {
	false = 0,
	true = 1,
}bool;

void passgen(int length)
{
	srand((unsigned int)time(NULL));
	
	char upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower_letters[] = "abcdefghijklmnopqrstuvwxyz";
	char symbols[]       = "!@#$%^&*()_+<>?";
	char digits[]        = "0123456789";

	int random = 0;
	random = rand() % 4; //Count of all symbols
	
	char password[length];

	for (int i = 0; i < length; i++) {
		if (random == 1) {
			password[i] = upper_letters[rand() % strlen(upper_letters)];
			random = rand() % 4;
		} else if (random == 2) {
			password[i] = lower_letters[rand() % strlen(lower_letters)];
			random = rand() % 4;
		} else if (random == 3) {
			password[i] = digits[rand() % strlen(digits)];
			random = rand() % 4;
		} else {
			password[i] = symbols[rand() % strlen(symbols)];
			random = rand() % 4;
		}
		  
	}
	printf("%s\n", password); 
}
