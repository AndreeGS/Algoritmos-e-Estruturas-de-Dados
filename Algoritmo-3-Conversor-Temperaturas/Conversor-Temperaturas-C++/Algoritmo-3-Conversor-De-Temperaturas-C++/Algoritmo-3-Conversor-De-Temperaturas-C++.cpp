#include <iostream>

using namespace std;

double conversionToFahrenheit(float tempInitial) {
    return (9.0 / 5.0) * tempInitial + 32;
}

double conversionToCelsius(float tempInitial) {
    return (tempInitial - 32) / 1.8;
}

int main() {
    float temperature;
    int choice;

    cout << "Welcome to the Temperature Converter" << endl;

    do {
        cout << "\nPlease choose the conversion you want to perform: \n1 - Celsius to Fahrenheit \n2 - Fahrenheit to Celsius \n3 - Exit" << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nEnter the temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Fahrenheit: " << conversionToFahrenheit(temperature) << endl;
            break;
        case 2:
            cout << "\nEnter the temperature in Fahrenheit: ";
            cin >> temperature;
            cout << "Temperature in Celsius: " << conversionToCelsius(temperature) << endl;
            break;
        case 3:
            cout << "\nExiting... Thank you!" << endl;
            break;
        default:
            cout << "Invalid option!" << endl;
        }
    } while (choice != 3);

    return 0;
}
