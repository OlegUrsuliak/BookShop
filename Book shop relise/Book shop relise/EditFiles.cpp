#include "Header.h"


//Функції редагування
void EditBook() {
	Book book;
	string id_for_change, name_for_change, author_for_change, genre_for_change,
		publishing_house_for_change, binding_material_for_change, price_for_change, number_of_art_for_change,
		brief_description_of_the_book_for_change, clline;

	ifstream fileread("book.txt");
	ifstream fileread1("book.txt");

	string from_file, from_file1;

	int i_number_line_delete = -100, i_number_line_now_find = 0;

	string findId;
	cout << "Enter id for search: ";
	cin >> findId;

	string findIdFull = "Id: " + findId;

	//Знайти у якому рядку потрібне id
	while(getline(fileread1, from_file1)) {
		if(from_file1 == findIdFull) {
			i_number_line_delete = i_number_line_now_find;
		}
		i_number_line_now_find++;
	}

	if(i_number_line_delete == -100) {
		cout << "Error 404 " << endl;

		system("pause");
		system("cls");
		MainChoice();
	}
	else {
		int i_number_line_now = 0; //счётчик строк
		string line; //для хранения строки
		string line_file_text; //для хранения текста файла

		system("cls");
		cout << "You want edit this date: " << endl;

		//Присвоєння змінній рядка з файлу та виведення на екран

		//Виведення на екран даних з файлу
		while(getline(fileread, line)) {
			if(i_number_line_delete - 1 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 1 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 2 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 3 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 4 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 5 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 6 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 7 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 8 == i_number_line_now) {
				cout << line << endl;
			}
			else if(!(i_number_line_now == i_number_line_delete)) {
				line_file_text.insert(line_file_text.size(), line);
				line_file_text.insert(line_file_text.size(), "\r\n");
			}
			i_number_line_now++;
		}
		//--> I dont know
		fileread.close();


		std::ofstream file;
		//file.open("book.txt", std::ios::trunc | std::ios::binary); //открыть и обрезать

		/*file.write(line_file_text.c_str(), line_file_text.size());*/
		file.clear();
		file.close();

		//Видалення даних по id
		DeleteItBook(findIdFull);

		ofstream file_1("book.txt", ios::app);
		//<-- I dont know

		while(getline(fileread1, line)) {
			if(i_number_line_delete - 1 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 1 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 2 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 3 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 4 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 5 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 6 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 7 == i_number_line_now) {
				cout << line << endl;
			}
			if(i_number_line_delete + 8 == i_number_line_now) {
				cout << line << endl;
			}
			else if(!(i_number_line_now == i_number_line_delete)) {
				line_file_text.insert(line_file_text.size(), line);
				line_file_text.insert(line_file_text.size(), "\r\n");
			}
			i_number_line_now++;
		}

		//file_1 << endl;
		cout << endl;
		EnterDateInBook();
		/*cout << "\nEnter new id: ";
		cin >> book.id;
		file_1 << "Id: " << book.id << endl;

		cout << "Enter new title: ";
		cin >> book.name;
		file_1 << "Title: " << book.name << endl;

		cout << "Enter new author: ";
		cin >> book.author;
		file_1 << "Author: " << book.author << endl;

		cout << "Enter new genre: ";
		cin >> book.genre;
		file_1 << "Genre: " << book.genre << endl;

		cout << "Enter new publisher: ";
		cin >> book.publishing_house;
		file_1 << "Publisher: " << book.publishing_house << endl;

		cout << "Enter new binding material: ";
		cin >> book.binding_material;
		file_1 << "Binding material: " << book.binding_material << endl;

		cout << "Enter new price: ";
		cin >> book.price;
		file_1 << "Price: " << book.price << endl;

		cout << "Enter new number of pages: ";
		cin >> book.number_of_art;
		file_1 << "Number of pages: " << book.number_of_art << endl;

		cout << "Enter new description: ";
		cin >> book.brief_description_of_the_book;
		file_1 << "Description: " << book.brief_description_of_the_book << endl;*/
	}
}
void EditSupplier() {
	Supplier supplier;
	string id_for_change, name_for_change, author_for_change, genre_for_change,
		publishing_house_for_change, binding_material_for_change, price_for_change, number_of_art_for_change,
		brief_description_of_the_book_for_change, clline;

	ifstream fileread("supplier.txt");
	ifstream fileread1("supplier.txt");

	string from_file, from_file1;

	int i_number_line_delete = 0, i_number_line_now_find = 0;

	string findId;
	cout << "Enter id for search: ";
	cin >> findId;

	string findIdFull = "Id: " + findId;

	//Знайти у якому рядку потрібне id
	while(getline(fileread1, from_file1)) {
		if(from_file1 == findIdFull) {
			i_number_line_delete = i_number_line_now_find;
		}
		i_number_line_now_find++;
	}

	int i_number_line_now = 0; //счётчик строк
	string line; //для хранения строки
	string line_file_text; //для хранения текста файла

	system("cls");
	cout << "You want edit this date: " << endl;

	//Присвоєння змінній рядка з файлу та виведення на екран

	//Виведення на екран даних з файлу
	while(getline(fileread, line)) {
		if(i_number_line_delete - 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 2 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 3 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 4 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 5 == i_number_line_now) {
			cout << line << endl;
		}
		else if(!(i_number_line_now == i_number_line_delete)) {
			line_file_text.insert(line_file_text.size(), line);
			line_file_text.insert(line_file_text.size(), "\r\n");
		}
		i_number_line_now++;
	}
	//--> I dont know
	fileread.close();


	std::ofstream file;
	//file.open("book.txt", std::ios::trunc | std::ios::binary); //открыть и обрезать

	/*file.write(line_file_text.c_str(), line_file_text.size());*/
	file.clear();
	file.close();

	//Видалення даних по id
	DeleteItSupplier(findIdFull);

	ofstream file_1("supplier.txt", ios::app);
	//<-- I dont know

	while(getline(fileread1, line)) {
		if(i_number_line_delete - 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 2 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 3 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 4 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 5 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 6 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 7 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 8 == i_number_line_now) {
			cout << line << endl;
		}
		else if(!(i_number_line_now == i_number_line_delete)) {
			line_file_text.insert(line_file_text.size(), line);
			line_file_text.insert(line_file_text.size(), "\r\n");
		}
		i_number_line_now++;
	}

	EnterDateInSupplier();

	/*cout << "\nEnter new id: ";
	cin >> supplier.id;
	file_1 << endl << "Id: " << supplier.id << endl;

	cout << "Enter new Name, Surname, Fathername: ";
	cin.ignore();
	cin.getline(supplier.nameSurFathrname, 50);
	file_1 << "Name Surname Fathername: " << supplier.nameSurFathrname << endl;

	cout << "Enter new age: ";
	cin >> supplier.age;
	file_1 << "Age: " << supplier.age << endl;

	cout << "Enter new phone number: ";
	cin >> supplier.phoneNumber;
	file_1 << "Phone number: " << supplier.phoneNumber << endl;

	cout << "Enter new place of base: ";
	cin.ignore();
	cin.getline(supplier.placeOfBase, 70);
	file_1 << "Place of bace: " << supplier.placeOfBase << endl << endl;*/
}
void EditCustomer() {
	Customer customer;
	string idForChange, ageForChange, amountOfMoneyUsedForChange, favoriteGenreForChange, mailForChange,
		nameSurFathrnameForChange, phoneNumberForChange;

	ifstream fileread("customer.txt");
	ifstream fileread1("customer.txt");

	string from_file, from_file1;

	int i_number_line_delete = 0, i_number_line_now_find = 0;

	string findId;
	cout << "Enter id for search: ";
	cin >> findId;

	string findIdFull = "Id: " + findId;

	//Знайти у якому рядку потрібне id
	while(getline(fileread1, from_file1)) {
		if(from_file1 == findIdFull) {
			i_number_line_delete = i_number_line_now_find;
		}
		i_number_line_now_find++;
	}

	int i_number_line_now = 0; //счётчик строк
	string line; //для хранения строки
	string line_file_text; //для хранения текста файла

	cout << "You want edit this date: " << endl;

	//Присвоєння змінній рядка з файлу та виведення на екран

	//Виведення на екран даних з файлу
	while(getline(fileread, line)) {
		if(i_number_line_delete - 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 2 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 3 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 4 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 5 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 6 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 7 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 8 == i_number_line_now) {
			cout << line << endl;
		}
		else if(!(i_number_line_now == i_number_line_delete)) {
			line_file_text.insert(line_file_text.size(), line);
			line_file_text.insert(line_file_text.size(), "\r\n");
		}
		i_number_line_now++;
	}
	//--> I dont know
	fileread.close();


	std::ofstream file;
	file.clear();
	file.close();

	//Видалення даних по id
	DeleteItCustomer(findIdFull);

	ofstream file_1("customer.txt", ios::app);
	//<-- I dont know

	while(getline(fileread1, line)) {
		if(i_number_line_delete - 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 1 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 2 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 3 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 4 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 5 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 6 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 7 == i_number_line_now) {
			cout << line << endl;
		}
		if(i_number_line_delete + 8 == i_number_line_now) {
			cout << line << endl;
		}
		else if(!(i_number_line_now == i_number_line_delete)) {
			line_file_text.insert(line_file_text.size(), line);
			line_file_text.insert(line_file_text.size(), "\r\n");
		}
		i_number_line_now++;
	}

	cout << "Enter date of customer " << endl;

	cout << "Enter id: ";
	cin >> customer.id;
	file_1 << "Id: " << customer.id << endl;

	cout << "Enter Name, Surname, Fathername ";
	cin.ignore();
	cin.getline(customer.nameSurFathrname, 50);
	file_1 << "Name Surname Fathername: " << customer.nameSurFathrname << endl;

	cout << "Enter age: ";
	cin >> customer.age;
	file_1 << "Age: " << customer.age << endl;

	cout << "Enter favorite genre: ";
	cin.ignore();
	cin.getline(customer.favoriteGenre, 40);
	file_1 << "Favorite genre: " << customer.favoriteGenre << endl;

	cout << "Enter phone number: ";
	cin >> customer.phoneNumber;
	file_1 << "Phone number: " << customer.phoneNumber << endl;

	cout << "Enter mail: ";
	cin >> customer.mail;
	file_1 << "Mail: " << customer.mail << endl;

	cout << "Enter amount of money used: ";
	cin >> customer.amountOfMoneyUsed;
	file_1 << "Money: " << customer.amountOfMoneyUsed << endl << endl;
}


void DeleteItBook(string findIdFull) {
	ifstream fileread("book.txt");
	ifstream fileread1("book.txt");
	string file_name = "book.txt";

	if(Check_if_empty(file_name) != true) {
		int i_number_line_delete = -100, i_number_line_now_find = 0;
		string from_file, from_file1;


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
			//Видалити чистий рядок
			else if(i_number_line_delete + 9 == i_number_line_now) {

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

		//cout << "Record deleted " << endl;
	}
	else
		cout << "File is empty " << endl;

}
void DeleteItSupplier(string findIdFull) {
	ifstream fileread("supplier.txt");
	ifstream fileread1("supplier.txt");
	string file_name = "supplier.txt";

	if(Check_if_empty(file_name) != true) {
		int i_number_line_delete = 0, i_number_line_now_find = 0;
		string from_file, from_file1;

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

		//cout << "Record deleted " << endl;
	}
	else
		cout << "File is empty " << endl;
}
void DeleteItCustomer(string findIdFull) {
	ifstream fileread("customer.txt");
	ifstream fileread1("customer.txt");
	string file_name = "customer.txt";

	if(Check_if_empty(file_name) != true) {
		int i_number_line_delete = 0, i_number_line_now_find = 0;
		string from_file, from_file1;

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
		file.open("customer.txt", std::ios::trunc | std::ios::binary); //открыть и обрезать
													  
		file.write(line_file_text.c_str(), line_file_text.size());
		file.clear();

		//cout << "Record deleted " << endl;
	}
	else
		cout << "File is empty " << endl;

}