// firstcpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*#include <iostream>
double R{ 0. }, G{ 0. }, B{ 0. };
double x, y, z;
const double a = 1.13983, b = 0.39465, c = 0.58060, d = 2.03211;



int main()
{
    std::cout << "输入你的颜色通道值";
    std::cin >> x >> y >> z;
    R = x + a * (z - 128);
    if (R <= 0)
    {
        R = 0;
    }
    else if (R >= 255)
    {
        R = 255;
    }
    G = x - b * (y - 128) - c * (z - 128);
    if (G <= 0)
    {
        G = 0;
    }
    else if (R >= 255)
    {
        G = 255;
    }
    B = x + d * (y - 128);
    if (B <= 0)
    {
        B = 0;
    }
    else if (R >= 255)
    {
        B = 255;
    }
    std::cout << "R的值为:" << R << "G的值为:" << G << "B的值为:" << B;
}*/

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
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
    string strl1 = { "你是谁啊" };
    cout << strl1.size() <<endl;
    if (strl1.empty())
    {
        
    }
    if (strl1.size() == 0)
    {
    } 
}
