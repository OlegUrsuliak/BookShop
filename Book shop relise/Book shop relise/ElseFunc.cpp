#include "Header.h"

//Перевірити чи файлик пустий для читання
bool Check_if_empty(string file_name) {
	bool d = false;
	ifstream fileread_check(file_name);
	fileread_check.seekg(0, ios::end);
	size_t size = fileread_check.tellg();
	
	if(size == 0) {
		d = true;
	}
	file_name = "";
	
	return d;
}

//Отримання feedback від користувача
void EnterYourFeedback() {

	cout << "Enter your feed back: ";

}

void ClearAndPause() {
	system("pause");
	system("cls");
}