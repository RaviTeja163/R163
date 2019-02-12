#include <stdio.h>
#include <string.h>
int replace(char *cat)
{
	int n = 0;
	for (int i = 0; cat[i] != 0; i++)
	{
		if (cat[i] == ' ')
		{
			n++;
			cat[i] = '-';
		}
	}
	printf("Modified data is : %s\n", cat);
	return n;
}
int main()
{
	char *cat = "The cat sat";
	printf("Original data is :\n%s\n", cat);

	int n = replace(cat);

	printf("No of spaces = %d\n", n);

	getchar();
	return 0;
}

