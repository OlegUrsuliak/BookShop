#include "Header.h"
//¬веденн€ даних у файлову базу даних
void EnterDateInBook() {
	//—к≥льки книг ви хочете внести? 
	ofstream file1("book.txt", ios::app);
	Book bookArr;

	//cout << "Enter date of book: " << endl;

	cout << "The id of the book: ";
	cin >> bookArr.id;
	file1 << "Id: " << bookArr.id << endl;

	cout << "The title of the book: ";
	cin.ignore();
	cin.getline(bookArr.name, 30);
	file1 << "Title: " << bookArr.name << endl;

	cout << "The author of the book: ";
	cin.ignore();
	cin.getline(bookArr.author, 30);
	file1 << "Author: " << bookArr.author << endl;

	cout << "The book genre: ";
	cin.ignore();
	cin.getline(bookArr.genre, 30);
	file1 << "Genre: " << bookArr.genre << endl;

	cout << "Publisher of the book: ";
	cin.ignore();
	cin.getline(bookArr.publishing_house, 50);
	file1 << "Publisher: " << bookArr.publishing_house << endl;

	cout << "Binding material: ";
	cin.ignore();
	cin.getline(bookArr.binding_material, 30);
	file1 << "Binding material: " << bookArr.binding_material << endl;

	cout << "Price of the book: ";
	cin >> bookArr.price;
	file1 << "Price: " << bookArr.price << endl;

	cout << "Number of pages: ";
	cin >> bookArr.number_of_art;
	file1 << "Number of pages: " << bookArr.number_of_art << endl;

	cout << "Briefly describe the book: ";
	cin.ignore();
	cin.getline(bookArr.brief_description_of_the_book, 500);
	file1 << "Description: " << bookArr.brief_description_of_the_book << endl << endl;

}
void EnterDateInSupplier() {
	ofstream file("supplier.txt", ios::app);
	Supplier supplieArr;

	
	cout << "Enter id: ";
	cin >> supplieArr.id;
	file << "Id: " << supplieArr.id << endl;

	cout << "Enter Name, Surname, Fathername: ";
	cin.ignore();
	cin.getline(supplieArr.nameSurFathrname, 50);
	file << "Name Surname Fathername: " << supplieArr.nameSurFathrname << endl;

	cout << "Enter age: ";
	cin >> supplieArr.age;
	file << "Age: " << supplieArr.age << endl;

	cout << "Enter phone number: ";
	cin >> supplieArr.phoneNumber;
	file << "Phone number: " << supplieArr.phoneNumber << endl;

	cout << "Enter place of base: ";
	cin.ignore();
	cin.getline(supplieArr.placeOfBase, 70);
	file << "Place of bace: " << supplieArr.placeOfBase << endl << endl;
}
void EnterDateInCustomer() {
	ofstream file("customer.txt", ios::app);
	Customer customerArr;

	cout << "Enter date of customer " << endl;
	cout << "Enter id: ";
	cin >> customerArr.id;
	file << "Id: " << customerArr.id << endl;

	cout << "Enter Name, Surname, Fathername ";
	cin.ignore();
	cin.getline(customerArr.nameSurFathrname, 50);
	file << "Name Surname Fathername: " << customerArr.nameSurFathrname << endl;

	cout << "Enter age: ";
	cin >> customerArr.age;
	file << "Age: " << customerArr.age << endl;

	cout << "Enter favorite genre: ";
	cin.ignore();
	cin.getline(customerArr.favoriteGenre, 40);
	file << "Favorite genre: " << customerArr.favoriteGenre << endl;

	cout << "Enter phone number: ";
	cin >> customerArr.phoneNumber;
	file << "Phone number: " << customerArr.phoneNumber << endl;

	cout << "Enter mail: ";
	cin >> customerArr.mail;
	file << "Mail: " << customerArr.mail << endl;

	cout << "Enter amount of money used: ";
	cin >> customerArr.amountOfMoneyUsed;
	file << "Money: " << customerArr.amountOfMoneyUsed << endl << endl;
}