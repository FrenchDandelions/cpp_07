#include "Templates.hpp"
#include <iostream>

int main()
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST INT:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE SWAP:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    int i = 2;
    int j = 3;
    std::cout << "Value int i: " << i << std::endl;
    std::cout << "Value int j: " << j << std::endl;
    std::cout << "Max: " << max(i, j) << std::endl;
    std::cout << "Min: " << min(i, j) << std::endl;
    swap(i, j);
    std::cout << std::endl << GREEN "AFTER SWAP:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << "Value int i: " << i << std::endl;
    std::cout << "Value int j: " << j << std::endl;
    std::cout << "Max: " << max(i, j) << std::endl;
    std::cout << "Min: " << min(i, j) << std::endl;

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST CHAR:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE SWAP:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    char a = 'a';
    char b = 'b';
    std::cout << "Value char a: " << a << std::endl;
    std::cout << "Value char b: " << b << std::endl;
    std::cout << "Max: " << max(a, b) << std::endl;
    std::cout << "Min: " << min(a, b) << std::endl;
    swap(a, b);
    std::cout << std::endl << GREEN "AFTER SWAP:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << "Value char a: " << a << std::endl;
    std::cout << "Value char b: " << b << std::endl;
    std::cout << "Max: " << max(a, b) << std::endl;
    std::cout << "Min: " << min(a, b) << std::endl;

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TEST STRING:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "BEFORE SWAP:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::string str1 = "str1";
    std::string str2 = "str2";
    std::cout << "Value string str1: " << str1 << std::endl;
    std::cout << "Value string str2: " << str2 << std::endl;
    std::cout << "Max: " << max(str1, str2) << std::endl;
    std::cout << "Min: " << min(str1, str2) << std::endl;
    swap(str1, str2);
    std::cout << std::endl << GREEN "AFTER SWAP:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << "Value string str1: " << str1 << std::endl;
    std::cout << "Value string str2: " << str2 << std::endl;
    std::cout << "Max: " << max(str1, str2) << std::endl;
    std::cout << "Min: " << min(str1, str2) << std::endl;

    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	    std::cout <<"TEST GIVEN MAIN:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
        return 0;
    }
}
