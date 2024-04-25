#include <stdio.h>

int main() 
{
	int num1 = 0, num2 = 0;

	scanf("%d%d", &num1, &num2);

	if (num1 > 0 && num2 > 0)
	{
		printf("%d", 1);
	}
	else if (num1 < 0 && num2 > 0)
	{
		printf("%d", 2);
	}
	else if (num1 < 0 && num2 < 0)
	{
		printf("%d", 3);
	}
	else
	{
		printf("%d", 4);
	}

}