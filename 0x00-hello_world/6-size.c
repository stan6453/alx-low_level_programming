#include<stdio.h>

int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of a double: %zu byte(s)\n", sizeof(doubleType));
	printf("Size a of char: %zu byte(s)\n", sizeof(charType));

	return (0);
}
