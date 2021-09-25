#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

char input[100];

int main()
{
	printf("Input: ");
	gets_s(input);

	FILE* f = fopen("karaca.txt", "w");
	int i = strlen(input) - 4;
	for (input[i];i >= 0;i--)
	{
		if (input[i] == '0')
		{
			fprintf(f,"a");
		}
		else if (input[i] == '1')
		{
			fprintf(f,"e");
		}
		else if (input[i] == '2')
		{
			fprintf(f,"i");
		}
		else if (input[i] == '3')
		{
			fprintf(f,"o");
		}
		else if (input[i] == '4')
		{
			fprintf(f,"u");
		}
		else
		{
			fprintf(f,"%c", input[i]);
		}

	}
	fclose(f);

	return 0;
}