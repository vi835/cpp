# include <iostream>
using namespace std;

int main4() {
	// 1 单精度 float
	// 2 双精度 double
	// 默认情况下 编译器会将小数当成双精度 需要使用单精度的情况下
	// 需要在后面加上 f
	float f1 = 3.14f;
	cout << "f1 = " << f1 << endl;

	// 默认情况下 输出一个小数 会显示出6位有效数字
	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	cout << "double占用内存空间为:" << sizeof(double) << endl;
	cout << "float占用内存空间为:" << sizeof(float) << endl;

	// 科学计数法
	float f2 = 3e2; // <=> 3 *10^2
	float f3 = 3e-2; // <=> 3 *10^-2
	cout << "f2 = " << f2 << endl;
	cout << "f3 = " << f3 << endl;
	return 0;
}
