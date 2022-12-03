#include "Header.h"

void SearchSupplierById() {
	string file_name = "supplier.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("supplier.txt");
		ifstream fileread1("supplier.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string idForSearch;
		cout << "Enter id for search ";
		cin >> idForSearch;
		string idForSearchFull = "Id: " + idForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == idForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this id!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchSupplierByNameSurFather() {
	string file_name = "supplier.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("supplier.txt");
		ifstream fileread1("supplier.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string nsfForSearch;
		cout << "Enter name surname fathername for search ";
		cin >> nsfForSearch;
		string nsfForSearchFull = "Name Surname Fathername: " + nsfForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == nsfForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;
			while(getline(fileread1, from_file1)) {
				if(save - 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this id!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchSupplierByAge() {
	string file_name = "supplier.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("supplier.txt");
		ifstream fileread1("supplier.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string ageForSearch;
		cout << "Enter age for search ";
		cin >> ageForSearch;
		string ageForSearchFull = "Age: " + ageForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == ageForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this id!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchSupplierByPhoneNumber() {
	string file_name = "supplier.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("supplier.txt");
		ifstream fileread1("supplier.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string phoneNumberForSearch;
		cout << "Enter phone for search ";
		cin >> phoneNumberForSearch;
		string phoneNumberForSearchFull = "Phone number: " + phoneNumberForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == phoneNumberForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this id!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchSupplierByPlaceOfBace() {
	string file_name = "supplier.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("supplier.txt");
		ifstream fileread1("supplier.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string placeBaceForSearch;
		cout << "Enter place for search ";
		cin >> placeBaceForSearch;
		string placeBaceForSearchFull = "Place of bace: " + placeBaceForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == placeBaceForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this id!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}