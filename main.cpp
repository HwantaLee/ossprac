#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, major;
	int student_num;

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "�й��� �Է��ϼ��� : ";
	cin >> student_num;
	cout << "�а��� �Է��ϼ��� : ";
	cin >> major;

	cout << "�� �̸��� " << name << " �̰� ������ " << major << "�Դϴ�." << endl;
	cout << "�� �й��� " << student_num << "�Դϴ�." << endl; 
	return 0;
}