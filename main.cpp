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
		cout << "Выберите операцию:" << endl;
		cout << "1 - Регистрация пользователя" << endl;
		cout << "2 - Вход в чат" << endl;
		//cout << "3 - сменить пользовательское имя " << endl;
		cout << "4 - удаление пользователя" << endl;
		cout << "0 - Выход" << endl;
		cin >> operation;
		switch (operation)
		{
		case 1:
		{
			cout << "Выбор 1" << endl;
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
		{ cout << "Выход" << endl;
		break; }
		default:
		{
			break;
		}
		} // switch
	} //while
	return 0;
}
