#include <stdio.h>

int main() {

	int A, B, Result;

	printf("Algorithm the sum of value \n");
	printf("Pleasse insert the first number: ");

	scanf_s("%d", &A);

	printf("Pleasse insert the second number: ");
	scanf_s("%d", &B);

	Result = A + B;

	printf("The sum of number %d and %d is: %d \n", A, B, Result);

	return 0;
}