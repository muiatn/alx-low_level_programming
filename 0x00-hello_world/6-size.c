#include <stdio.n>
int main(void)
{
	char x;
	int y;
	float z;
	long int a;
	long long int b;
	printf("Size of a char: %zu byte(s) \n", sizeof(x));
	printf("Size of an int: %zu byte(s) \n", sizeof(y));
	printf("Size of a long int: %zu byte(s) \n", sizeof(a));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(b));
	printf("Size of a float: %zu byte(s) \n", sizeof(z));
	return (0);
}
