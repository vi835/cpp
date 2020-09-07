# include <iostream>
using namespace std;

int main3() {
	// short(2) int(4) long(4) long long(4)
	// 可以利用sizeof关键字求出数据类型占用内存大小
	// 语法 sizeof(数据类型/变量)
	short num1 = 10;
	cout << "num1占用的内存空间为:" << sizeof(num1) << endl;
	cout << "short占用的内存空间为:" << sizeof(short) << endl;
	cout << "long long占用的内存空间为:" << sizeof(long long) << endl;
	return 0;
}