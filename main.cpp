#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, major;
	int student_num;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "학번을 입력하세요 : ";
	cin >> student_num;
	cout << "학과도 입력하세요 : ";
	cin >> major;

	cout << "제 이름은 " << name << " 이고 전공은 " << major << "입니다." << endl;
	cout << "제 학번은 " << student_num << "입니다." << endl; 
	return 0;
}