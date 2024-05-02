#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

# define RED "\033[1;31m"
# define RESET "\033[0m"
# define PURP "\033[1;95m"
# define PURP2 "\033[1;35m"
# define ORANGE "\033[1;91m"
# define LIGHTB "\033[1;36m"
# define BLUE "\033[1;94m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"

void increment(int& num)
{
    num++;
}

void doubleNumber(double& num)
{
    num *= 2;
}

void square(float& num)
{
    num *= num;
}

void addExclamation(std::string& str)
{
    str += "!";
}

void capitalize(std::string& str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        *it = std::toupper(*it);
    }
}

template <typename T>
void iter(T *array, int length, void f(T&))
{
    for(int it = 0; it < length; it++)
    {
        f(array[it]);
    }
}

#endif