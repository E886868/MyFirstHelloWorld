#include <stdio.h>
#include <string.h>

void red()
{
	printf("\033[1;31m");
}

void mag()
{
	printf("\033[1;35m");
}

void cyon()
{
	printf("\033[1;36m");
}

int main()
{
	cyon();
	printf("Hello");
	mag();
	printf(" World\n");
}

/*{
	char str1[1];

	strcpy(str1, red());

	strcat(str1, "Hello World\n");

	printf(str1);

   	return 0;
}*/
