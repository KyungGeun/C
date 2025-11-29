#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char string[101] = {'A'};
	
	while (scanf("%[^\n]", string) != EOF)
	{
		printf("%s\n", string);
		getchar();
	}
	
	return 0;
}
