#include <iostream>
#include <string>
//#include "messages.h"
//#include "chat.h"
//#include "chat.cpp"
using namespace std;


int main()
{
	int operation = 10;
	setlocale(LC_ALL, "");
	while (operation != 0) {
		cout << "�������� ��������:" << endl;
		cout << "1 - ����������� ������������" << endl;
		cout << "2 - ���� � ���" << endl;
		//cout << "3 - ������� ���������������� ��� " << endl;
		cout << "4 - �������� ������������" << endl;
		cout << "0 - �����" << endl;
		cin >> operation;
		switch (operation)
		{
		case 1:
		{
			cout << "����� 1" << endl;
			//Persona::setnewuser();
			break; }
		case 2:
		{
			// Chat chat 
			break; }
		case 3:
		{
			// chane name or login
			break; }
		case 0:
		{ cout << "�����" << endl;
		break; }
		default:
		{
			break;
		}
		} // switch
	} //while
	return 0;
}
