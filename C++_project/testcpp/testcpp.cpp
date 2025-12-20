#include<iostream>
#include<bitset>
#include<windows.h>
using namespace std;
int main()
{
    /*char a = 0b10000001;
    char b = 0b00000001;
    while (true)
    {
        ++a;
        Sleep(500);
        std::cout << "a:\t" << std::bitset<8>(a) << std::endl;
    }*/
    /*std::cout << "a:\t" << std::bitset<8>(a) << std::endl;
    std::cout <<"b:\t"<< std::bitset<8>(b) << std::endl;
    std::cout << "~a:\t" << std::bitset<8>(~a) << std::endl;
    std::cout << "a&b:\t" << std::bitset<8>(a&b) << std::endl;
    std::cout << "a|b:\t" << std::bitset<8>(a|b) << std::endl;*/
    /*string strl1 = {"你是谁啊"};
    cout << strl1.size() <<endl;
    if (strl1.empty())
    {

    }
    if (strl1.size() == 0)
    {
    }*/
    //测试枚举类型
    //传统枚举类型
    enum 枚举类型名
    {
        枚举值1,
        枚举值2,
        枚举值3,
        枚举值4,
        枚举值5,

    };
    枚举类型名 evl{ 枚举值1 };
    cout << "ev1" << evl << endl;

}
