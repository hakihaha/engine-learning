//参数的默认值
#include <iostream>
using namespace std;
int sum(int a, int b = 20)
{
	int result;
	result = a + b;
	return result;
}
int main()
{
	int a = 100;
	int b = 200;
	int result;
	result = sum(a, b);
	cout << "sum value is:" << result << endl;
	result = sum(a);
	cout << "sum value is:" << result << endl;
	return 0;
}
//当参数参数有默认数值时候,有指定的值的时候用的是指定的值，没有指定的值的时候用的默认值

	

