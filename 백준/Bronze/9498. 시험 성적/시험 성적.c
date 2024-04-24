#include <stdio.h>

int main() 
{
	int a = 0;
	scanf("%d", &a);

	if (a >= 90 && a <= 100)
	{
		printf("A");
	}
	else if (a >= 80 && a <=89)
	{
		printf("B");
	}
	else if (a >= 70 && a <=79)
	{
		printf("C");
	}
	if (a >= 60 && a <= 69)
	{
		printf("D");
	}
	if(a < 60)
	{
		printf("F");
	}
	return 0;
}