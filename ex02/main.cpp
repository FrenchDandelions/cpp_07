#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"ALL TEST FOR INT ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "SHOW SIZES NEW ARRAYS AND CONSTRUCTORS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.size() << std::endl;

    Array<int> arr2(5);
    std::cout << "arr2 size: " << arr2.size() << std::endl;

    std::cout << std::endl << GREEN "TEST [] OPERATOR:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    std::cout << "arr2[0]: " << arr2[0] << std::endl;
    std::cout << "arr2[1]: " << arr2[1] << std::endl;
    std::cout << "arr2[2]: " << arr2[2] << std::endl;

    std::cout << std::endl << GREEN "TEST COPY ASSIGNMENT OPERATOR:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Array<int> arr3(arr2);
    std::cout << "arr3 size: " << arr3.size() << std::endl;
    std::cout << "arr3[0]: " << arr3[0] << std::endl;

    Array<int> arr4;
    arr4 = arr2;
    std::cout << "arr4 size: " << arr4.size() << std::endl;
    std::cout << "arr4[1]: " << arr4[1] << std::endl;

    std::cout << std::endl << GREEN "TEST OUT OF RANGE:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        std::cout << "arr2[10]: " << arr2[10] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST DIFFERENT KINDS OF ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "INT ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Array<int> intArray(5);
    for (int i = 0; i < 5; ++i) {
        intArray[i] = i * 10;
    }
    std::cout << "Int array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << intArray[i] << std::endl;
    }

    std::cout << std::endl << GREEN "CHAR ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Array<char> charArray(5);
    for (int i = 0; i < 5; ++i) {
        charArray[i] = 'A' + i;
    }
    std::cout << "Char array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << charArray[i] << std::endl;
    }

    std::cout << std::endl << GREEN "STRING ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Array<std::string> stringArray(3);
    stringArray[0] = "hello";
    stringArray[1] = "world";
    stringArray[2] = "!";
    std::cout << "String array:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << stringArray[i] << std::endl;
    }

    return (0);
}
