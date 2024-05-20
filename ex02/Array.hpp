#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

# define RED "\033[1;31m"
# define RESET "\033[0m"
# define PURP "\033[1;95m"
# define PURP2 "\033[1;35m"
# define ORANGE "\033[1;91m"
# define LIGHTB "\033[1;36m"
# define BLUE "\033[1;94m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"

template <typename T>
class Array
{
    private:
        T* _array;
        int _size_array;

    public:
        Array();
        Array(int size);
        Array(const Array &copy);
        Array& operator=(const Array &copy);
        T& operator[](int index);
        const T& operator[](int index) const;
        ~Array();

        int size();
};

template <typename T>
Array<T>::Array()
{
    this->_array = new T[0]();
    _size_array = 0;
}

template <typename T>
Array<T>::Array(int size)
{
    this->_array = new T[size]();
    _size_array = size;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    this->_array = new T[copy._size_array];
    this->operator=(copy);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &copy)
{
    if(this != &copy)
    {
        delete [] this->_array;
        this->_array = new T[copy._size_array];
        this->_size_array = copy._size_array;
        for(int it = 0; it < copy._size_array; it++)
        {
            this->_array[it] = copy._array[it];
        }
    }
    return(*this);
}

template <typename T>
T& Array<T>::operator[](int index)
{
    if(index >= this->_size_array || index < 0)
        throw std::out_of_range("The index is out of range");
    return(this->_array[index]);
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
    if(index >= this->_size_array || index < 0)
        throw std::out_of_range("The index is out of range");
    return(this->_array[index]);
}

template <typename T>
int Array<T>::size()
{
    return(this->_size_array);
}

template <typename T>
Array<T>::~Array()
{
    delete [] this->_array;
}

#endif