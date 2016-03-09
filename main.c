#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name[255];

	printf("Enter your name: ");
	fgets(name, 255,stdin);
	name[strlen(name)-1] = '\0'; /* rimove the newline at the end */

	printf("Hello %s!\n",name);
	reurn 0;
}