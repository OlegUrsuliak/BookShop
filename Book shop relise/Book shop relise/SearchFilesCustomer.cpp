#include "Header.h"

//Параметри для пошуку
void SearchCustomerById() {
	string file_name = "customer.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		ifstream fileread1("customer.txt");

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
				if(save + 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 5 == i_number_of_line_now_check_0) {
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
void SearchCustomerByByNameSurFather() {
	string file_name = "customer.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		ifstream fileread1("customer.txt");

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
				if(save - 2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -1 == i_number_of_line_now_check_0) {
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
				if(save + 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this name surname and fathername!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchCustomerByAge() {
	string file_name = "customer.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		ifstream fileread1("customer.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string ageForSearch;
		cout << "Enter age: ";
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
				if(save - 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
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
			cout << "I can't search this age!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchCustomerByFavoriteGenre() {
	string file_name = "customer.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		ifstream fileread1("customer.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string favoriteGenreForSearch;
		cout << "Enter favorite genre: ";
		cin >> favoriteGenreForSearch;
		string favoriteGenreForSearchFull = "Favorite genre: " + favoriteGenreForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == favoriteGenreForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -1 == i_number_of_line_now_check_0) {
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
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this favorite genre!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchCustomerByPhoneNumber() {
	string file_name = "customer.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		ifstream fileread1("customer.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string phoneNumberForSearch;
		cout << "Enter phone number: ";
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
				if(save - 5 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this phone number!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchCustomerByMail() {
	string file_name = "customer.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		ifstream fileread1("customer.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string mailForSearch;
		cout << "Enter mail: ";
		cin >> mailForSearch;
		string mailForSearchFull = "Mail: " + mailForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == mailForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 6 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -5 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this mail!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchCustomerByMoney() {
	string file_name = "customer.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("customer.txt");
		ifstream fileread1("customer.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string moneyForSearch;
		cout << "Enter amount of money used: ";
		cin >> moneyForSearch;
		string moneyForSearchFull = "Money: " + moneyForSearch;

		system("cls");// очистка консолі 

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == moneyForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save -7 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -6 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -5 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -2 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save -1 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this money!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}