//参数的默认值
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<ctime>
using namespace std;

/*C++引用
* 用法 
int a=10;
int &ref =a;  ref就是ref的别名区分a的指针，a是对象，
引用的对象必须是个变量，而指针必须是个地址
*/
void TeztQuoted()
{
	int i;
	double d;
	//声明引用变量
	int& r = i; 
	double& s = d;
	i = 5;
	cout << "值是：" << i << endl;
	cout << "引用是：" << r << endl;

	d = 11.7;
	cout << "值是：" << d << endl;
	cout << "引用是：" << s << endl;

}
/*C++日期和时间
有三个关于时间的函数分别是：
clock_t,time_t,size_t,tm
*/
void TestTime()
{	//要引用库  ctime  在引用库的时候注意要添加这个#define _CRT_SECURE_NO_WARNINGS
	//基于当前系统的当前日期/时间
	time_t now = time(0);//time_t在这可以理解为一个装时间的容器类似long long;time才是函数。
	//把now转换为字符串类型的
	char* dt = ctime(&now);
	cout << "本地时间是：" << dt << endl;//这是c语言的对char类型的特殊用法不需要解引用
	//把now转换为tm结构
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "UTC日期和时间" << dt << endl;
}
/*C++如何打印日志
标准错误日志，标准日志流程
*/
void TestLog()
{
	//标准错误日志
	char str1[] = "Unable to read...";
	cerr << "Error message:" << str1 << endl;
	//标准日志
	char str2[] = "Unable to read...";
	cerr << "Error message:" << str2 << endl;

}
/*指向结构的指针
struct Book *struct_pointer;
struct_pointer = &Book1;
struct_pointer->title;
*/
//声明一个结构体类型为Books
struct Books
{
	string title;
	string anthor;
	string subject;
	int bool_id;
	//构造函数   一种简便的写法
	Books(string t, string a, string s, int id)
		:title(t), anthor(a), subject(s), bool_id(id) {
	}

};
//打印书籍信息的函数，接收一个指向Books结构体的指针
void printBookInfo(const Books* book)
{
	cout << "书籍标题" << book->title << endl;
	cout << "书籍作者" << book->anthor << endl;
	cout << "书籍类目" << book->subject << endl;
	cout << "书籍ID" << book->bool_id << endl;
}

void TestStructPointer()
{
	//创建两本书
	Books Book1("C++教程","Runoob","编程语言",12345);
	Books Book2("Css教程", "Runoob", "前端语言", 12346);
	//使用指针指向这两本书的对象
	Books* ptrBook1 = &Book1;
	Books* ptrBook2 = &Book2;
	//输入书籍信息，传递指针
	printBookInfo(ptrBook1);
	printBookInfo(ptrBook2);

}

int main()
{
	//TeztQuoted();//引用函数
	//TestTime();//时间函数
	//TestLog();//标准错误日志，标准日志流程函数
	//TestStructPointer();//指向结构的指针
}


	

