# include <iostream>
using namespace std;

int main5() {
	// 1 �ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	// 2 �ַ��ͱ�����ռ�ڴ��С
	cout << "char������ռ�ڴ��С" << sizeof(char) << endl;

	// 3 �ַ��ͱ�����������
	// char ch2 =  "b"; // �����ַ��ͱ���ʱ�� Ҫ�õ�����
	// char ch2 = 'fdfds'; // �����ַ��ͱ�����ʱ�� ��������ֻ����һ���ַ�

	// 4 �ַ��ͱ�����ӦASCII����
	// ���� a - 97 A - 65
	cout << ch << endl;
	cout << (int)ch << endl;
	system("pause");
	return 0;
}