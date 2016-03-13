#include <stdio.h>
#include "askname.h"

int main(int argc, char **argv)
{
	char first[255] , last[255];


	askname(first,last);



	printf("HellPTE---222 %s%s!\n",first,last);

	reurn 0; /* 12*/
}