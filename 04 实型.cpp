# include <iostream>
using namespace std;

int main4() {
	// 1 ������ float
	// 2 ˫���� double
	// Ĭ������� �������ὫС������˫���� ��Ҫʹ�õ����ȵ������
	// ��Ҫ�ں������ f
	float f1 = 3.14f;
	cout << "f1 = " << f1 << endl;

	// Ĭ������� ���һ��С�� ����ʾ��6λ��Ч����
	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	cout << "doubleռ���ڴ�ռ�Ϊ:" << sizeof(double) << endl;
	cout << "floatռ���ڴ�ռ�Ϊ:" << sizeof(float) << endl;

	// ��ѧ������
	float f2 = 3e2; // <=> 3 *10^2
	float f3 = 3e-2; // <=> 3 *10^-2
	cout << "f2 = " << f2 << endl;
	cout << "f3 = " << f3 << endl;
	return 0;
}
