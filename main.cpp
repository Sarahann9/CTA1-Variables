#include <iostream>

int main() {
    std::string firstName = "First name: John";
    std::string lastName = "Last Name: Smith";
    std::string address = "Address: 123 Maple Lane";
    std::string city = "City: New York,";
    int zipCode = 98364;
    std::cout << firstName << '\n' << lastName  << '\n' <<address << '\n' << city << " " << zipCode << std::endl;
    return 0;
}
