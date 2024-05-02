#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

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
void swap(T &first, T &second)
{
    T sw = first;
    first = second;
    second = sw;
}

template <typename T>
T min(T &first, T &second)
{
    if(first == second)
        return(second);
    return(first > second ? second : first);
}

template <typename T>
T max(T &first, T &second)
{
    if(first == second)
        return(second);
    return(first < second ? second : first);
}

#endif