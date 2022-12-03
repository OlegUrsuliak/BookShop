#include "Header.h"

//Пошук книг по характеристиках
void SearchBookById() {
	string file_name = "book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("book.txt");
		ifstream fileread1("book.txt");

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
				if(save + 6 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 7 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 8 == i_number_of_line_now_check_0) {
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
void SearchBookByName() {
	string file_name = "Book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("Book.txt");
		ifstream fileread1("Book.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string nameForSearch;
		cout << "Enter title for search ";
		cin >> nameForSearch;
		system("cls");// очистка консолі 
		string nameForSearchFull = "Title: " + nameForSearch;

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == nameForSearchFull) {
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
				if(save + 6 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 7 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this name!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchBookByAuthor() {
	string file_name = "Book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("Book.txt");
		ifstream fileread1("Book.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string authorForSearch;
		cout << "Enter author for search ";
		cin >> authorForSearch;
		system("cls");// очистка консолі 
		string nameForSearchFull = "Author: " + authorForSearch;

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == nameForSearchFull) {
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
				if(save - 2 == i_number_of_line_now_check_0) {
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
				if(save + 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 5 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save + 6 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this author!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchBookByGenre() {
	string file_name = "Book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("Book.txt");
		ifstream fileread1("Book.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string genreForSearch;
		cout << "Enter genre for search ";
		cin >> genreForSearch;
		system("cls");// очистка консолі 
		string genreForSearchFull = "Genre: " + genreForSearch;

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == genreForSearchFull) {
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
				if(save - 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 2 == i_number_of_line_now_check_0) {
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
			cout << "I can't search this genre!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchBookByPublisher() {
	string file_name = "Book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("Book.txt");
		ifstream fileread1("Book.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string publisherForSearch;
		cout << "Enter publisher for search ";
		cin >> publisherForSearch;
		system("cls");// очистка консолі 
		string publisherForSearchFull = "Publisher: " + publisherForSearch;

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == publisherForSearchFull) {
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
				if(save - 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 2 == i_number_of_line_now_check_0) {
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
				if(save + 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this publisher!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchBookByBindingMaterial() {
	string file_name = "Book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("Book.txt");
		ifstream fileread1("Book.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string bindingMaterialForSearch;
		cout << "Enter binding material for search ";
		cin >> bindingMaterialForSearch;
		system("cls");// очистка консолі 
		string bindingMaterialForSearchFull = "Binding material: " + bindingMaterialForSearch;

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == bindingMaterialForSearchFull) {
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
				if(save - 5 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 2 == i_number_of_line_now_check_0) {
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
			cout << "I can't search this binding material!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchBookByPrice() {
	string file_name = "Book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("Book.txt");
		ifstream fileread1("Book.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string bindingMaterialForSearch;
		cout << "Enter price for search: ";
		cin >> bindingMaterialForSearch;
		system("cls");// очистка консолі 
		string bindingMaterialForSearchFull = "Price: " + bindingMaterialForSearch;

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == bindingMaterialForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 7 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 6 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 5 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 2 == i_number_of_line_now_check_0) {
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
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this price!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}
void SearchBookByNumberOfPage() {
	string file_name = "Book.txt"; //Або замість string|ifstream

	if(Check_if_empty(file_name) != true) {
		ifstream fileread("Book.txt");
		ifstream fileread1("Book.txt");

		string from_file;
		string from_file1;

		int save = -1;

		string bindingMaterialForSearch;
		cout << "Enter number of pages for search: ";
		cin >> bindingMaterialForSearch;
		system("cls");// очистка консолі 
		string bindingMaterialForSearchFull = "Number of pages: " + bindingMaterialForSearch;

		int i_number_of_line_now_check = 1;
		while(getline(fileread, from_file)) {
			if(from_file == bindingMaterialForSearchFull) {
				save = i_number_of_line_now_check;
			}
			i_number_of_line_now_check++;
		}
		if(save > -1) {
			int i_number_of_line_now_check_0 = 0;

			while(getline(fileread1, from_file1)) {
				if(save - 8 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 7 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 6 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 5 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 4 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 3 == i_number_of_line_now_check_0) {
					cout << from_file1 << endl;
				}
				if(save - 2 == i_number_of_line_now_check_0) {
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
				i_number_of_line_now_check_0++;
			}
		}
		else
			cout << "I can't search this number of pages!!! " << endl;
	}
	else
		cout << "File is empty!" << endl;
}