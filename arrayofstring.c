// C Program to print Array
// of strings
#include <stdio.h>

// Driver code
int main()
{
	int i;
char arr[3][10] = {"Geek",
					"Geeks", "Geekfor"};
printf("String array Elements are:\n");

for (i = 0; i < 3; i++)
{
	printf("%s\n", arr[i]);
}
return 0;
}

