#include <iostream>
#include <string>

//! 📏 Metric Conversion Tool
// This program will convert a given length using the metric system.
// Trying to keep it simple in terms of choosing the conversions through the numbers. Then changing the conversion type to strings.
// Giant if statements as still learning c++ and trying to keep it simple.

int main() {

    int conversionType;
    int conversionType2;

    std::string conversionTypeString;
    std::string conversionType2String;

    std::cout << "Welcome to the Metric Conversion Tool.\n";
    std::cout << "Here is the current list of conversions:\n";
    std::cout << "1. centimeters.\n";
    std::cout << "2. inches.\n";
    std::cout << "3. millimeters.\n";
    std::cout << "4. meters.\n";
    std::cout << "5. kilometers.\n";

    std::cout << "What is your first conversion type?\n";
    std::cin >> conversionType;

    std::cout << "What is your second conversion type?\n";
    std::cin >> conversionType2;

    //? Convert the conversion type to a string
    if(conversionType == 1) {
        conversionTypeString = "centimeters";
    } else if(conversionType == 2) {
        conversionTypeString = "inches";
    } else if(conversionType == 3) {
        conversionTypeString = "millimeters";
    } else if(conversionType == 4) {
        conversionTypeString = "meters";
    } else if(conversionType == 5) {
        conversionTypeString = "kilometers";
    }

    if(conversionType2 == 1) {
        conversionType2String = "centimeters";
    } else if(conversionType2 == 2) {
        conversionType2String = "inches";
    } else if(conversionType2 == 3) {
        conversionType2String = "millimeters";
    } else if(conversionType2 == 4) {
        conversionType2String = "meters";
    } else if(conversionType2 == 5) {
        conversionType2String = "kilometers";
    }

    //? Print the conversion type
    std::cout << "You have selected to convert from " << conversionTypeString << " to " << conversionType2String << ".\n";
    std::cout << "===================================================\n";

    //? Conversion Logic
    if(conversionType == 1 && conversionType2 == 2) {
        double centimeters;

        std::cout << "Enter the length in centimeters: ";
        std::cin >> centimeters;

        double inches = centimeters / 2.54;
        std::cout << centimeters << "cm is equal to " << inches << "in.\n";
    } else if(conversionType == 2 && conversionType2 == 1) {
        double inches;

        std::cout << "Enter the length in inches: ";
        std::cin >> inches;

        double centimeters = inches * 2.54;

        std::cout << inches << "in is equal to " << centimeters << "cm.\n";
    } else if(conversionType == 1 && conversionType2 == 3) {
        double centimeters;

        std::cout << "Enter the length in centimeters: ";
        std::cin >> centimeters;

        double millimeters = centimeters * 10;

        std::cout << centimeters << "cm is equal to " << millimeters << "mm.\n";
    } else if(conversionType == 3 && conversionType2 == 1) {
        double millimeters;

        std::cout << "Enter the length in millimeters: ";
        std::cin >> millimeters;

        double centimeters = millimeters / 10;

        std::cout << millimeters << "mm is equal to " << centimeters << "cm.\n";
    } else if(conversionType == 2 && conversionType2 == 3) {
        double inches;

        std::cout << "Enter the length in inches: ";
        std::cin >> inches;

        double millimeters = inches * 25.4; //1 inch = 2.54cm. 1 cm = 10mm

        std::cout << inches << "in is equal to " << millimeters << "mm.\n";
    } else if(conversionType == 3 && conversionType2 == 2) {
        double millimeters;

        std::cout << "Enter the length in millimeters: ";
        std::cin >> millimeters;

        double inches = millimeters / 25.4; //1in = 2.54cm. 1cm = 10mm

        std::cout << millimeters << "mm is equal to " << inches << "in.\n";
    } else if(conversionType == 4 && conversionType2 == 1) {
        double meters;

        std::cout << "Enter the length in meters: ";
        std::cin >> meters;

        double centimeters = meters * 100;

        std::cout << meters << "m is equal to " << centimeters << "cm.\n";
    } else if(conversionType == 4 && conversionType2 == 2) {
        double meters;

        std::cout << "Enter the length in meters: ";
        std::cin >> meters;

        double inches = meters * 39.3701; //1m = 100cm. 1cm = 2.54in. 
        
        std::cout << meters << "m is equal to " << inches << "in.\n";
    } else if(conversionType == 4 && conversionType2 == 3) {
        double meters;

        std::cout << "Enter the length in meters: ";
        std::cin >> meters;

        double millimeters = meters * 1000; //1m = 100cm. 1cm = 10mm

        std::cout << meters << "m is equal to " << millimeters << "mm.\n";
    } else if(conversionType == 4 && conversionType2 == 5) {
        double meters;

        std::cout << "Enter the length in meters: ";
        std::cin >> meters;

        double kilometers = meters / 1000; //1km = 1000m

        std::cout << meters << "m is equal to " << kilometers << "km.\n";
    } else if(conversionType == 5 && conversionType2 == 1) {
        double kilometers;

        std::cout << "Enter the length in kilometers: ";
        std::cin >> kilometers;

        double centimeters = kilometers * 100000; //1km = 1000m. 1m = 100cm

        std::cout << kilometers << "km is equal to " << centimeters << "cm.\n";
    } else if(conversionType == 5 && conversionType2 == 2) {
        double kilometers;

        std::cout << "Enter the length in kilometers: ";
        std::cin >> kilometers;

        double inches = kilometers * 39370.1; //1km = 1000m. 1m = 39.3701in

        std::cout << kilometers << "km is equal to " << inches << "in.\n";
    } else if(conversionType == 5 && conversionType2 == 3) {
        double kilometers;

        std::cout << "Enter the length in kilometers: ";
        std::cin >> kilometers;

        double millimeters = kilometers * 1000000; //1km = 1000m. 1m = 1000mm

        std::cout << kilometers << "km is equal to " << millimeters << "mm.\n";
    } else if(conversionType == 5 && conversionType2 == 4) {
        double kilometers;

        std::cout << "Enter the length in kilometers: ";
        std::cin >> kilometers;

        double meters = kilometers * 1000; //1km = 1000m

        std::cout << kilometers << "km is equal to " << meters << "m.\n";
    } else {
        std::cout << "Invalid conversion type.\n";
    }

    return 0;
}