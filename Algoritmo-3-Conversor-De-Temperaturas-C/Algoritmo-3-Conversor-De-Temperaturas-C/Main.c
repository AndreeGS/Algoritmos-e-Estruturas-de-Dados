#include <stdio.h>

double conversionToFahrenheit(float tempInitial) {
	return (9.0 / 5.0) * tempInitial + 32;
}

double conversionToCelsius(float tempInitial) {
	return (tempInitial - 32) / 1.8;
}

int main() {

	float temperature;
	int choice;

	printf("Welcome to the Temperature Converter");

	do {
		printf("\nPlease choose the conversion you want to perform: \n1 - Celsius to Fahrenheit \n2 - Fahrenheit to Celsius \n3 - Exit \n");

		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\nEnter the temperature in Celsius : ");
			scanf_s("%f", &temperature);

			printf("Temperature in Fahrenheit: %.2f F°", conversionToFahrenheit(temperature));
			break;
		case 2:
			printf("\nEnter the temperature in Fahrenheit : ");
			scanf_s("%f", &temperature);

			printf("Temperature in Celsius: %.2f C°", conversionToCelsius(temperature));
			break;

		case 3:
			printf("Exiting...Thank you!");
			break;
		default:
			break;
		}
	} while (choice != 3);

	return 0;
}