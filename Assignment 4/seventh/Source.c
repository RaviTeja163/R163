#include<stdio.h>
#include<string.h>

int main()
{
	char s[3][3], temp[100];
	int l, n, i, j;
	printf("Enter number of strings\n");
	scanf_s("%d", &n);
	printf("Enter the strings\n");

	for (i = 0; i<n; i++)
		gets(s[i][i]);

	printf("\n s[1][1]=%s", s[1][1]);
	/*for (l = 0; l<(n - 1); l++)
	{
		for (j = l + 1; j<n; j++)
		{
			if (strcmp(s[i], s[j])>0)
			{
				strcpy(temp, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], temp);
			}
		}
	}

	for (i = 0; i<n; i++)
	{
		printf("\n sorted strings are %s", s[i]);
	}*/
	getchar();
	return 0;
}