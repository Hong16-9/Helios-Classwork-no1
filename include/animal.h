#ifndef _ANIMAL_H//防止重复调用
#define _ANIMAL_H
#include <iostream>
using namespace std;

class Animal//定义基类
{   
    private:
    string sound;//定义声音类型与象征
    string Type;
    char symbol;
    public:
    void setsound(string a);//声明函数
    void setType(string b);
    void setsymbol(char c);
    void makesound();
    void getType();
    void getSymbol();
};
class Lion :public Animal//定义派生类Lion
{
    private://定义私有值
    string a = "long";
    string b = "Lion";
    char c = 'L';
    public://通过接口改变基类的私有值
    Lion()
    {
        Animal::setsound(a);
        Animal::setType(b);
        Animal::setsymbol(c);
    }
};
class Elephant :public Animal//定义派生类Elephant
{
    private://定义私有值
    string a = "CCB";
    string b = "Elephant";
    char c = 'E';    
    public://通过接口改变基类的私有值
    Elephant()
    {
        Animal::setsound(a);
        Animal::setType(b);
        Animal::setsymbol(c);
    }
};
class Penguin :public Animal//定义派生类Penguin
{
    private://定义私有值
    string a = " ";
    string b = "Penguin";
    char c = 'P';
    public://通过接口改变基类的私有值
    Penguin()
    {
        Animal::setsound(a);
        Animal::setType(b);
        Animal::setsymbol(c);
    }
};
class Zoo :public Lion,public Elephant,public Penguin//向Zoo中加入动物
{
    private:
    
    public:
    void show();
    void choose();
};
#endif