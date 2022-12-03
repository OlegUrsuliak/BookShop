#include "Header.h"

//Виведення всіх даних з файликів
void ShowFromBook() {
	string file_name = "book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("book.txt");
		string from_file;
		int i_number_of_line_now_check = 0;

		while(getline(fileread, from_file)) {
			cout << from_file << endl;
			i_number_of_line_now_check++;
		}
	}
	else
		cout << "File is empty!" << endl;
}
void ShowFromSupplier() {
	string file_name = "supplier.txt";
	if(Check_if_empty(file_name) != true) {
		ifstream fileread("supplier.txt");
		string from_file;
		int i_number_of_line_now_check = 0;


		while(getline(fileread, from_file)) {
			cout << from_file << endl;
			i_number_of_line_now_check++;
		}
	}
	else
		cout << "File is empty!" << endl;
}
void ShowFromCustomer() {
	string file_name = "customer.txt";
	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		string from_file;
		int i_number_of_line_now_check = 0;


		while(getline(fileread, from_file)) {
			cout << from_file << endl;
			i_number_of_line_now_check++;
		}
	}
	else
		cout << "File is empty!" << endl;
}

void ShowAllInfoFromDatabase() {
	ShowFromBook();
	ShowFromSupplier();
	ShowFromCustomer();
}