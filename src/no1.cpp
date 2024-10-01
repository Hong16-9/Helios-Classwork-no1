#include "../include/animal.h"//包括头文件

void Animal::setsound(string a)//定义函数
{
    sound = a;
}
void Animal::setType(string b)
{
    Type = b;
}
void Animal::setsymbol(char c)
{
    symbol = c;
}
void Animal::makesound()
{
    cout << sound <<endl;
}
void Animal::getType()
{
    cout << Type <<endl;
}
void Animal::getSymbol()
{
    cout << symbol <<endl;
}
void Zoo::show()
{
    cout <<"Animals in the zoo:"<<endl<<" ";
    Lion::getType();
    cout <<" ";
    Elephant::getType();
    cout <<" ";
    Penguin::getType();
    cout <<endl;
}
void Zoo::choose()
{
    cout <<"Enter the animal symbol to make it sound \n(L for Lion, E for Elephant, P for Penguin):";
    char z;
    cin >>z;
    switch (z) 
    {
    case 'L':
    Lion::makesound();
    break;
    case 'E':
    Elephant::makesound();
    break;
    case 'P':
    Penguin::makesound();
    break;
    default:
    cout <<"MAN!";
    break;
    }
    
}
int main ()
{
    Zoo no1;
    no1.show();
    no1.choose();
    return 0;
}