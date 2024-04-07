// передать массив в функцию - только по указателям!
#include <iostream>


void plus_ten(int *start, int *end)
{
    for (int *cur{start}; cur<end;cur++)
    {
        *cur +=10;
    }
}


int main(int argc, char *argv[]) 
{
    int narr[] {1,2,3};
    plus_ten(std::begin(narr), std::end(narr));
    
    for(int n : narr)
    {
        std::cout << n << std::endl;
    }

    return 0;
}

