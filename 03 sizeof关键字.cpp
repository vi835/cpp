# include <iostream>
using namespace std;

int main3() {
	// short(2) int(4) long(4) long long(4)
	// ��������sizeof�ؼ��������������ռ���ڴ��С
	// �﷨ sizeof(��������/����)
	short num1 = 10;
	cout << "num1ռ�õ��ڴ�ռ�Ϊ:" << sizeof(num1) << endl;
	cout << "shortռ�õ��ڴ�ռ�Ϊ:" << sizeof(short) << endl;
	cout << "long longռ�õ��ڴ�ռ�Ϊ:" << sizeof(long long) << endl;
	return 0;
}