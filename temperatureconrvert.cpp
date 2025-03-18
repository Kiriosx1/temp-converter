#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "***** Temperature Converter *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temperature in Fahrenheit: " << temp << " F\n";
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature in Celsius: " << temp << " C\n";
    }
    else {
        std::cout << "Please enter a valid unit (C or F).\n";
    }

    std::cout << "*********************************\n";

    // This keeps the program open after running
    std::cout << "\nPress Enter to exit...";
    std::cin.ignore(); // Ignore leftover newline
    std::cin.get();    // Wait for user to press Enter

    return 0;
}