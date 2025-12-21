#include<iostream>
#include<bitset>
#include<windows.h>
using namespace std;
int main(int agc,char *argv[])
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
    /*enum 枚举类型名
    {
        枚举值1,
        枚举值2,
        枚举值3,
        枚举值4,
        枚举值5,

    };
    枚举类型名 evl{ 枚举值1 };
    cout << "ev1" << evl << endl;
    //现代枚举
    enum class Log
    {
        DEBUG,
        INFO,
        FATAL
    
    };
    Log level{ Log::DEBUG };
    cout << "level =" << (int)level << endl;
    */
    //main函数的测试
    cout << "argc = " << agc << endl;
    //访问argv字符串数组中的内容
    //从0开始是第一个字符串
    cout << argv[0] << endl;
    //第二个参数是用户传递
    if (agc >1)
    {
        cout << argv[1] << endl;
    }
    if (agc >2)
    {
        cout << argv[2] << endl;
    }
}
