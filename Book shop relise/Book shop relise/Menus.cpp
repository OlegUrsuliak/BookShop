#include "Header.h"

//Вибір у меню
void MainChoice() {
	ShowMainMenu();

	int choice;
	cout << "Enter your choice ";
	cin >> choice;

	switch(choice) {
	case 1:
		system("cls");// очистка консолі 
		BookChoice();
		system("pause");
		system("cls");
		break;
	case 2:
		system("cls");// очистка консолі 
		SupplierChoice();
		system("pause");
		system("cls");
		break;
	case 3:
		system("cls");// очистка консолі 
		CustomerChoice();
		system("pause");
		system("cls");
		break;
	case 4:
		system("cls");// очистка консолі 
		ShowAllInfoFromDatabase();
		system("pause");
		system("cls");
		break;
	case 5:
		system("cls");// очистка консолі 
		ClearAllFromDatabace();
		system("pause");
		system("cls");
		break;
	case 6:

		break;
	}
}
void BookChoice() {
	ShowBookMenu();

	int c = 0;
	cout << "Enter your choice ";
	cin >> c;

	switch(c) {
	case 1:
		system("cls");// очистка консолі 
		ShowFromBook();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 2:
		system("cls");// очистка консолі 
		SearchBookMenu();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 3:
		system("cls");// очистка консолі
		cout << "Enter date of book: " << endl;
		EnterDateInBook();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 4:
		system("cls");// очистка консолі 
		EditBook();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 5:
		system("cls");// очистка консолі 
		DeleteBook();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 6:
		system("cls");
		ClearAllFromBook();
		cout << "File is clear " << endl;

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 7:
		system("cls");// очистка консолі 
		MainChoice();
		break;
	}
}
void SupplierChoice() {
	ShowSupplierMenu();

	int a = 0;
	cout << "Enter your choice ";
	cin >> a;

	switch(a) {
	case 1:
		system("cls");// очистка консолі 
		ShowFromSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 2:
		system("cls");// очистка консолі 
		SearchSupplierMenu();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 3:
		system("cls");// очистка консолі 
		cout << "Enter date of supplier: " << endl;
		EnterDateInSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 4:
		system("cls");// очистка консолі 
		EditSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 5:
		system("cls");// очистка консолі 
		DeleteSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 6:
		system("cls");// очистка консолі 
		ClearAllFromSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 7:
		system("cls");// очистка консолі 
		MainChoice();
		break;
	}
}
void CustomerChoice() {
	ShowCustomerMenu();

	int c = 0;
	cout << "Enter your choice: ";
	cin >> c;

	switch(c) {
	case 1:
		system("cls");// очистка консолі 
		ShowFromCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 2:
		system("cls");// очистка консолі 
		SearchCustomerMenu();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 3:
		system("cls");// очистка консолі 
		EnterDateInCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 4:
		system("cls");// очистка консолі 
		EditCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 5:
		system("cls");// очистка консолі 
		DeleteCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 6:
		system("cls");// очистка консолі 
		ClearAllFromCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 7:
		system("cls");// очистка консолі 
		MainChoice();
		break;
	}
}

//Вибір меню умов для пошуку книги|постачальника та покупця
void SearchBookMenu() {
	ShowBookSearchMenu();
	int choice = 0;
	cout << "Enter choice ";
	cin >> choice;

	switch(choice) {
	case 1:
		system("cls");// очистка консолі 
		SearchBookById();
		break;
	case 2:
		system("cls");// очистка консолі 
		SearchBookByName();
		break;
	case 3:
		system("cls");// очистка консолі 
		SearchBookByAuthor();
		break;
	case 4:
		system("cls");// очистка консолі 
		SearchBookByGenre();
		break;
	case 5:
		system("cls");// очистка консолі 
		SearchBookByPublisher();
		break;
	case 6:
		system("cls");// очистка консолі 
		SearchBookByBindingMaterial();
		break;
	case 7:
		system("cls");// очистка консолі 
		SearchBookByPrice();
		break;
	case 8:
		system("cls");// очистка консолі 
		SearchBookByNumberOfPage();
		break;
	case 9:
		system("cls");// очистка консолі 
		BookChoice();
		break;
	}
}
void SearchSupplierMenu() {
	ShowSupplierSearchMenu();

	int choice = 0;
	cout << "Enter your choice ";
	cin >> choice;

	switch(choice) {
	case 1:
		system("cls");
		SearchSupplierById();
		break;
	case 2:
		system("cls");
		SearchSupplierByNameSurFather();
		break;
	case 3:
		system("cls");
		SearchSupplierByAge();
		break;
	case 4:
		system("cls");
		SearchSupplierByPhoneNumber();
		break;
	case 5:
		system("cls");
		SearchSupplierByPlaceOfBace();
		break;
	case 6:
		system("cls");
		SupplierChoice();
		break;
	}
}
void SearchCustomerMenu() {
	ShowCustomerSearchMenu();

	int choice = 0;
	cout << "Enter your choice ";
	cin >> choice;

	switch(choice) {
	case 1:
		system("cls");
		SearchCustomerById();
		break;
	case 2:
		system("cls");
		SearchCustomerByByNameSurFather();
		break;
	case 3:
		system("cls");
		SearchCustomerByAge();
		break;
	case 4:
		system("cls");
		SearchCustomerByFavoriteGenre();
		break;
	case 5:
		system("cls");
		SearchCustomerByPhoneNumber();
		break;
	case 6:
		system("cls");
		SearchCustomerByMail();
		break;
	case 7:
		system("cls");
		SearchCustomerByMoney();
		break;
	case 8:
		system("cls");
		CustomerChoice();
		break;
	}
}

//Показати головне меню
void ShowMainMenu() {
	cout << "Main menu\n" <<
		+"1. Work with file Book\n" << //Файл з інформацією про книги
		+"2. Work with file Supplier\n" << //Файл з інформацією про поставщиків
		+"3. Work with file Customer\n" << //Файл з інформацією про покупців
		+"4. Show all info from database\n" <<
		+"5. Clear all\n" << //Видалити всі дані з бази
		+"6. Exit" << endl;
}

//Показати підменю
void ShowBookMenu() {
	cout << "Book menu:\n" <<
		+"1. Show all info about books\n" << //Зчитується вся інформація з файлика book.txt
		+"2. Show info about book\n" <<
		+"3. Add info\n" <<
		+"4. Edit info about book\n" <<
		+"5. Delete book\n" <<
		+"6. Clear file\n" <<
		+"7. Return old menu" << endl;
}
void ShowSupplierMenu() {
	cout << "Supplier menu:\n" <<
		+"1. Show all info about supplier\n" << //Зчитується вся інформація з файлика supplier.txt
		+"2. Show info about supplier\n" <<
		+"3. Add info\n" <<
		+"4. Edit info about supplier\n" <<
		+"5. Delete supplier\n" <<
		+"6. Clear file\n" <<
		+"7. Return old menu" << endl;
}
void ShowCustomerMenu() {
	cout << "Customer menu:\n" <<
		+"1. Show all info about customer\n" << //Зчитується вся інформація з файлика supplier.txt
		+"2. Show info about customer\n" <<
		+"3. Add info\n" <<
		+"4. Edit info about customer\n" <<
		+"5. Delete customer\n" <<
		+"6. Clear file\n" <<
		+"7. Return old menu" << endl;
}

//Показати меню умов для пошуку книг
void ShowBookSearchMenu() {
	cout << "Menu\n" <<
		+"1. Search by id\n" <<
		+"2. Search by title\n" <<
		+"3. Search by author\n" <<
		+"4. Search by genre\n" <<
		+"5. Search by publisher\n" <<
		+"6. Search by binding material\n" <<
		+"7. Search by price\n" <<
		+"8. Search by Number of pages\n" <<
		+"9. Return old menu" << endl;
}
void ShowSupplierSearchMenu() {
	cout << "Menu\n" <<
		+"1. Search by id\n" <<
		+"2. Search by name surname fathername\n" <<
		+"3. Search by age\n" <<
		+"4. Search by phone number\n" <<
		+"5. Search by place of base\n" <<
		+"6. Return old menu" << endl;
}
void ShowCustomerSearchMenu() {
	cout << "Menu\n" <<
		+"1. Search by id\n" <<
		+"2. Search by name surname fathername\n" <<
		+"3. Search by age\n" <<
		+"4. Search by favorite genre\n" <<
		+"5. Search by phone number\n" <<
		+"6. Search by mail\n" <<
		+"7. Search by money\n" <<
		+"8. Return old menu" << endl;
}