#include "iter.hpp"

int main()
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST INT ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    int array[4] = {1, 2, 3, 4};
    for(int i = 0; i < 4; i++)
    {
        std::cout << "Here: " << array[i] << std::endl;
    }
    iter(array, 4, increment);
    std::cout << std::endl << GREEN "AFTER ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for(int i = 0; i < 4; i++)
    {
        std::cout << "Here: " << array[i] << std::endl;
    }

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST DOUBLE ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    double doubleArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    for (int i = 0; i < 5; ++i)
    {
        std::cout << doubleArray[i] << std::endl;
    }
    iter(doubleArray, 5, doubleNumber);
    std::cout << std::endl << GREEN "AFTER ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << doubleArray[i] << std::endl;
    }

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST FLOAT ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    for (int i = 0; i < 5; ++i)
    {
        std::cout << floatArray[i] << std::endl;
    }
    iter(floatArray, 5, square);
    std::cout << std::endl << GREEN "AFTER ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << floatArray[i] << std::endl;
    }

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST STRING ARRAY 1:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::string stringArray[] = {"hello", "world", "how", "are", "you"};
    for (int i = 0; i < 5; ++i)
    {
        std::cout << stringArray[i] << std::endl;
    }
    iter(stringArray, 5, addExclamation);
    std::cout << std::endl << GREEN "AFTER ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << stringArray[i] << std::endl;
    }

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST STRING ARRAY 2:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << stringArray[i] << std::endl;
    }
    iter(stringArray, 5, capitalize);
    std::cout << std::endl << GREEN "AFTER ITER:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << stringArray[i] << std::endl;
    }
}
