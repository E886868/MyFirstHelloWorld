#include <stdio.h>
#include <string.h>

/*enum colour
{
	red = "\033[1;31m",
	green = "\033[0;32m",
	yellow = "\033[0;33m",
	blue = "\033[0;34m",
	megenta = "\033[0;35m",
	cyan = "\033[0;36m",
	reset = "\033[0m"
} colour;



/*void red()
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
}*/


int main()
{
	char  blue[50];

	char str1[1];

	strcpy(str1,"\033[0;33m");

	strcat(str1, "Hello World\n");

	printf(str1);

   	return 0;
}
# HelloWorld
