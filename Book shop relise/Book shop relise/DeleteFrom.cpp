#include "Header.h"

//Видалення 1 об'єкту з файлу
void DeleteBook() {
	ifstream fileread("book.txt");
	ifstream fileread1("book.txt");
	string file_name = "book.txt";

	if(Check_if_empty(file_name) != true) {
		int i_number_line_delete = 0, i_number_line_now_find = 0;
		string findId, from_file, from_file1;

		cout << "Enter id for find ";
		cin >> findId;
		string findIdFull = "Id: " + findId;

		while(getline(fileread1, from_file1)) {
			if(from_file1 == findIdFull) {
				i_number_line_delete = i_number_line_now_find;
			}
			i_number_line_now_find++;
		}

		int i_number_line_now = 0; //счётчик строк
		string line; //для хранения строки
		string line_file_text; //для хранения текста файла


		while(getline(fileread, line)) {
			if(i_number_line_delete - 1 == i_number_line_now) {

			}
			else if(i_number_line_delete == i_number_line_now) {

			}
			else if(i_number_line_delete + 1 == i_number_line_now) {

			}
			else if(i_number_line_delete + 2 == i_number_line_now) {

			}
			else if(i_number_line_delete + 3 == i_number_line_now) {

			}
			else if(i_number_line_delete + 4 == i_number_line_now) {

			}
			else if(i_number_line_delete + 5 == i_number_line_now) {

			}
			else if(i_number_line_delete + 6 == i_number_line_now) {

			}
			else if(i_number_line_delete + 7 == i_number_line_now) {

			}
			else if(i_number_line_delete + 8 == i_number_line_now) {

			}
			else if(!(i_number_line_now == i_number_line_delete)) {
				line_file_text.insert(line_file_text.size(), line);
				line_file_text.insert(line_file_text.size(), "\r\n");
			}
			i_number_line_now++;
		}
		fileread.close();

		std::ofstream file;
		file.open("book.txt", std::ios::trunc | std::ios::binary); //открыть и обрезать

																   //записать
		file.write(line_file_text.c_str(), line_file_text.size());
		file.clear();

		cout << "Record deleted " << endl;
	}
	else
		cout << "File is empty " << endl;

}
void DeleteSupplier() {
	ifstream fileread("supplier.txt");
	ifstream fileread1("supplier.txt");
	string file_name = "supplier.txt";

	if(Check_if_empty(file_name) != true) {
		int i_number_line_delete = 0, i_number_line_now_find = 0;
		string findId, from_file, from_file1;

		cout << "Enter id for find ";
		cin >> findId;
		string findIdFull = "Id: " + findId;

		while(getline(fileread1, from_file1)) {
			if(from_file1 == findIdFull) {
				i_number_line_delete = i_number_line_now_find;
			}
			i_number_line_now_find++;
		}

		int i_number_line_now = 0; //счётчик строк
		string line; //для хранения строки
		string line_file_text; //для хранения текста файла


		while(getline(fileread, line)) {
			if(i_number_line_delete - 1 == i_number_line_now) {
				cout << i_number_line_now << endl;
			}
			else if(i_number_line_delete == i_number_line_now) {
				cout << i_number_line_now << endl;
			}
			else if(i_number_line_delete + 1 == i_number_line_now) {
				cout << i_number_line_now << endl;
			}
			else if(i_number_line_delete + 2 == i_number_line_now) {
				cout << i_number_line_now << endl;
			}
			else if(i_number_line_delete + 3 == i_number_line_now) {
				cout << i_number_line_now << endl;
			}
			else if(i_number_line_delete + 4 == i_number_line_now) {
				cout << i_number_line_now << endl;
			}
			else if(!(i_number_line_now == i_number_line_delete)) {
				line_file_text.insert(line_file_text.size(), line);
				line_file_text.insert(line_file_text.size(), "\r\n");
			}
			i_number_line_now++;
		}
		fileread.close();

		std::ofstream file;
		file.open("supplier.txt", std::ios::trunc | std::ios::binary); //открыть и обрезать

																   //записать
		file.write(line_file_text.c_str(), line_file_text.size());
		file.clear();

		cout << "Record deleted " << endl;
	}
	else
		cout << "File is empty " << endl;
}
void DeleteCustomer() {
	ifstream fileread("customer.txt");
	ifstream fileread1("customer.txt");
	string file_name = "customer.txt";

	if(Check_if_empty(file_name) != true) {
		int i_number_line_delete = 0, i_number_line_now_find = 0;
		string findId, from_file, from_file1;

		cout << "Enter id for find ";
		cin >> findId;
		string findIdFull = "Id: " + findId;

		while(getline(fileread1, from_file1)) {
			if(from_file1 == findIdFull) {
				i_number_line_delete = i_number_line_now_find;
			}
			i_number_line_now_find++;
		}

		int i_number_line_now = 0; //счётчик строк
		string line; //для хранения строки
		string line_file_text; //для хранения текста файла


		while(getline(fileread, line)) {
			if(i_number_line_delete - 1 == i_number_line_now) {
			}
			else if(i_number_line_delete == i_number_line_now) {
			}
			else if(i_number_line_delete + 1 == i_number_line_now) {
			}
			else if(i_number_line_delete + 2 == i_number_line_now) {
			}
			else if(i_number_line_delete + 3 == i_number_line_now) {
			}
			else if(i_number_line_delete + 4 == i_number_line_now) {
			}
			else if(i_number_line_delete + 5 == i_number_line_now) {
			}
			else if(i_number_line_delete + 6 == i_number_line_now) {
			}
			else if(!(i_number_line_now == i_number_line_delete)) {
				line_file_text.insert(line_file_text.size(), line);
				line_file_text.insert(line_file_text.size(), "\r\n");
			}
			i_number_line_now++;
		}
		fileread.close();

		std::ofstream file;
		file.open("customer.txt", std::ios::trunc | std::ios::binary); //открыть и обрезать

																   //записать
		file.write(line_file_text.c_str(), line_file_text.size());
		file.clear();

		cout << "Record deleted " << endl;
	}
	else
		cout << "File is empty " << endl;
}