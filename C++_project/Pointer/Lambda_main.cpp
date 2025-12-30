#include<iostream>
//lambda表达式
//一个临时函数主要用于调用外部的标量
//ex
//auto add = [](int a, int b) {
//	return a + b;
//	};
//add(1, 2);
//用法：[]的变化
//[] ：不用外面的变量
//[=]  ：用外面的值（拷贝）
//[&]  ：用外面的变量（真身）
//test
int x = 5;
auto f1 = [=]() {
	std::cout << x << std::endl;
	};
auto f2 = [&]() {
	x += 1;
	};
int main()
{
	f1();
	f2();
	std::cout << x;

}