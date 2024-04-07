// функция как агрумент

#include <iostream>

void goodmorning();
void goodevening();
void(*message(unsigned))();


int 
main(int argc, char *argv[]) 
{
    void(*action)(){message(10)};    // указатель на выбранную функцию
    // выполняем полученную функцию
    action();                       // Good Morning!
    action = message(16);           // получаем новую функцию
    action();                       // Good Evening!

    return 0;
}


void(*message(unsigned hour))()
{
    if (hour > 15)
        return goodevening;
    else
        return goodmorning;
}


void goodmorning()
{
    std::cout << "Good Morning!" << std::endl;
}


void goodevening()
{
    std::cout << "Good Evening!" << std::endl;
}