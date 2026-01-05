//参数的默认值
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<ctime>
#include<vector>
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
//在函数内部，我们使用->操作符去访问结构指针所指向的成员变量
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
//C++vector容器
// 动态大小
// 连续储存
// 可迭代
// 元素类型
//myVector.push_back()//添加元素
// std::vector<int>myVector(5)//创建一个包含五个整数的vector，每个默认值为0
// std::vector<int>myVector(5，10)//创建一个包含五个整数的vector，每个默认值为10
// for(auto it = myVector.begin();it != myVector.end();++i){std::out<<*it<<"":}//遍历访问
//示例
int TestVector()
{
	//需要提前#include<vector>
	//创建一个空整数向量
	std::vector<int>myVector;
	//添加元素到向量中
	myVector.push_back(3);
	myVector.push_back(7);
	myVector.push_back(11);
	myVector.push_back(5);
	//访问向量中的元素并输出
	std::cout << "Elements in the vector";
	for (int element : myVector)  //使用迭代器访问
	{
		std::cout << element << " ";
	}
	std::cout << std::endl;
	//访问向量种的第一个元素并输出
	std::cout << "First element:" << myVector[0] << std::endl;
	//访问向量种的第二个元素并输出
	std::cout << "Scond element:" << myVector[1] << std::endl;
	//获取向量大小并输出
	std::cout << "size of the vector" << myVector.size() << std::endl;
	//删除向量中的第三个元素
	myVector.erase(myVector.begin() + 2);
	//输出删除元素后的向量
	std::cout << "删除后的向量内容：";
	for (int element : myVector)  //使用迭代器访问
	{
		std::cout << element << " ";
	}
	std::cout << std::endl;
	//清除向量并输出
	myVector.clear();
	std::cout << "size of the vector after clearing:" << myVector.size() << std::endl;
	return 0;
	
}
/*数据结构暂时还不懂*/
/*C++类于对象
* 需要理解的是
* 类访问修饰符
* 构造函数
* 析构函数
* 拷贝构造函数
* 友元函数
* 内联函数
* this指针
* 指向类的指针
* 静态成员
示例*/
//示例
class Box
{
	public:
		double length;
		double breadth;
		double heigth;
		//成员函数声明
		double get(void);
		void set(double len, double bre, double hei);
};
//成员函数定义
double Box::get(void)
{
	return length * breadth * heigth;
}
void Box::set(double len, double bre, double hei)
{
	length = len;
	breadth = bre;
	heigth = hei;
}
void TestClass()
{
	Box Box1;  //声明Box1,类型为Box
	Box Box2;
	Box Box3;
	double volume = 0.0;
	//box 1详述
	Box1.heigth = 5.0;
	Box1.breadth = 6.0;
	Box1.length = 7.0;

	Box2.heigth = 10.0;
	Box2.breadth = 11.0;
	Box2.length = 12.0;

	volume = Box1.heigth * Box1.breadth * Box1.length;
	cout << "Box1的体积是：" << volume << endl;

	volume = Box2.heigth * Box2.breadth * Box2.length;
	cout << "Box2的体积是：" << volume << endl;

	Box3.set(16.0, 8.0, 12.0);
	volume = Box3.get();
	cout << "Box3的体积是：" << volume << endl;


}



int main()
{
	//TeztQuoted();//引用函数
	//TestTime();//时间函数
	//TestLog();//标准错误日志，标准日志流程函数
	//TestStructPointer();//指向结构的指针
	//TestVector();//vector的用法
	TestClass();
}


	

