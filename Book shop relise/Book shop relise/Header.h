#pragma once
//Підлючення бібліотек
#include <iostream>
#include <fstream>
#include <sstream> //Для роботи функції getline() у ShowDateFromFile

using namespace std;

//Книги
class Book {
public:
	int id;
	char name[30];
	char author[30];
	char genre[30];
	char publishing_house[50];
	char binding_material[30];
	float price;
	int number_of_art;
	char brief_description_of_the_book[500];
};
//Постачальник
class Supplier {
public:
	int id;
	char nameSurFathrname[50];
	int age;
	char phoneNumber[10];
	char placeOfBase[70];
};
//Покупець
class Customer {
public:
	int id;
	char nameSurFathrname[50];
	int age;
	char phoneNumber[10];
	char mail[30];
	char favoriteGenre[40];//Улюблений жанр книг
	int amountOfMoneyUsed;//Скільки грошей витрачено на покупки у нашому магазині
};

void ShowMainMenu();
void ShowBookMenu();
void ShowSupplierMenu();
void ShowCustomerMenu();
void ShowBookSearchMenu();

void EnterDateInBook();
void EnterDateInSupplier();
void EnterDateInCustomer();

void ShowFromBook();
void ShowFromSupplier();
void ShowFromCustomer();
void ShowAllInfoFromDatabase();

void ClearAllFromBook();
void ClearAllFromSupplier();
void ClearAllFromCustomer();
void ClearAllFromDatabace();

void MainChoice();
void BookChoice();
void SupplierChoice();
void CustomerChoice();

void SearchBookMenu();
void SearchSupplierMenu();
void SearchCustomerMenu();

void DeleteBook();
void DeleteSupplier();
void DeleteCustomer();

//Пошук та виведення по id
void SearchBookById();
void SearchBookByName();
void SearchBookByAuthor();
void SearchBookByGenre();
void SearchBookByPublisher();
void SearchBookByBindingMaterial();
void SearchBookByPrice();
void SearchBookByNumberOfPage();


void SearchSupplierById();
void SearchSupplierByNameSurFather();
void SearchSupplierByAge();
void SearchSupplierByPhoneNumber();
void SearchSupplierByPlaceOfBace();

void SearchCustomerById();
void SearchCustomerByByNameSurFather();
void SearchCustomerByAge();
void SearchCustomerByFavoriteGenre();
void SearchCustomerByPhoneNumber();
void SearchCustomerByMail();
void SearchCustomerByMoney();


void EditBook();
void EditSupplier();
void EditCustomer();

void MenuLogic();
void Start();
bool Check_if_empty(string file_name);
void Cap();

void ShowCustomerSearchMenu();
void ShowSupplierSearchMenu();


void MySupplierChoice();


void DeleteItBook(string findIdFull);
void DeleteItSupplier(string findIdFull);
void DeleteItCustomer(string findIdFull);

void ClearAndPause();