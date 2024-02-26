#include <stdio.h>

int main() {

	int Distance, Time;
	double Result;

	printf("Welcome to the Algorithm two! \n This algorithm will calculate the average speed! \n");
	printf("Please insert the value of distance in meters: ");

	scanf_s("%d", &Distance);

	printf("Please insert the value of the time in seconds: ");
	scanf_s("%d", &Time);

	Result = (double)Distance / Time;

	printf("The average speed is: %.2f m/s \n", Result);

	return 0;
}