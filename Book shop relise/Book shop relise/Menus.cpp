#include "Header.h"

//���� � ����
void MainChoice() {
	ShowMainMenu();

	int choice;
	cout << "Enter your choice ";
	cin >> choice;

	switch(choice) {
	case 1:
		system("cls");// ������� ������ 
		BookChoice();
		system("pause");
		system("cls");
		break;
	case 2:
		system("cls");// ������� ������ 
		SupplierChoice();
		system("pause");
		system("cls");
		break;
	case 3:
		system("cls");// ������� ������ 
		CustomerChoice();
		system("pause");
		system("cls");
		break;
	case 4:
		system("cls");// ������� ������ 
		ShowAllInfoFromDatabase();
		system("pause");
		system("cls");
		break;
	case 5:
		system("cls");// ������� ������ 
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
		system("cls");// ������� ������ 
		ShowFromBook();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 2:
		system("cls");// ������� ������ 
		SearchBookMenu();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 3:
		system("cls");// ������� ������
		cout << "Enter date of book: " << endl;
		EnterDateInBook();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 4:
		system("cls");// ������� ������ 
		EditBook();

		system("pause");
		system("cls");
		BookChoice();
		break;
	case 5:
		system("cls");// ������� ������ 
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
		system("cls");// ������� ������ 
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
		system("cls");// ������� ������ 
		ShowFromSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 2:
		system("cls");// ������� ������ 
		SearchSupplierMenu();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 3:
		system("cls");// ������� ������ 
		cout << "Enter date of supplier: " << endl;
		EnterDateInSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 4:
		system("cls");// ������� ������ 
		EditSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 5:
		system("cls");// ������� ������ 
		DeleteSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 6:
		system("cls");// ������� ������ 
		ClearAllFromSupplier();

		/*system("pause");
		system("cls");*/
		ClearAndPause();
		SupplierChoice();
		break;
	case 7:
		system("cls");// ������� ������ 
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
		system("cls");// ������� ������ 
		ShowFromCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 2:
		system("cls");// ������� ������ 
		SearchCustomerMenu();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 3:
		system("cls");// ������� ������ 
		EnterDateInCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 4:
		system("cls");// ������� ������ 
		EditCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 5:
		system("cls");// ������� ������ 
		DeleteCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 6:
		system("cls");// ������� ������ 
		ClearAllFromCustomer();

		system("pause");
		system("cls");
		CustomerChoice();
		break;
	case 7:
		system("cls");// ������� ������ 
		MainChoice();
		break;
	}
}

//���� ���� ���� ��� ������ �����|������������� �� �������
void SearchBookMenu() {
	ShowBookSearchMenu();
	int choice = 0;
	cout << "Enter choice ";
	cin >> choice;

	switch(choice) {
	case 1:
		system("cls");// ������� ������ 
		SearchBookById();
		break;
	case 2:
		system("cls");// ������� ������ 
		SearchBookByName();
		break;
	case 3:
		system("cls");// ������� ������ 
		SearchBookByAuthor();
		break;
	case 4:
		system("cls");// ������� ������ 
		SearchBookByGenre();
		break;
	case 5:
		system("cls");// ������� ������ 
		SearchBookByPublisher();
		break;
	case 6:
		system("cls");// ������� ������ 
		SearchBookByBindingMaterial();
		break;
	case 7:
		system("cls");// ������� ������ 
		SearchBookByPrice();
		break;
	case 8:
		system("cls");// ������� ������ 
		SearchBookByNumberOfPage();
		break;
	case 9:
		system("cls");// ������� ������ 
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

//�������� ������� ����
void ShowMainMenu() {
	cout << "Main menu\n" <<
		+"1. Work with file Book\n" << //���� � ����������� ��� �����
		+"2. Work with file Supplier\n" << //���� � ����������� ��� ����������
		+"3. Work with file Customer\n" << //���� � ����������� ��� ��������
		+"4. Show all info from database\n" <<
		+"5. Clear all\n" << //�������� �� ��� � ����
		+"6. Exit" << endl;
}

//�������� ������
void ShowBookMenu() {
	cout << "Book menu:\n" <<
		+"1. Show all info about books\n" << //��������� ��� ���������� � ������� book.txt
		+"2. Show info about book\n" <<
		+"3. Add info\n" <<
		+"4. Edit info about book\n" <<
		+"5. Delete book\n" <<
		+"6. Clear file\n" <<
		+"7. Return old menu" << endl;
}
void ShowSupplierMenu() {
	cout << "Supplier menu:\n" <<
		+"1. Show all info about supplier\n" << //��������� ��� ���������� � ������� supplier.txt
		+"2. Show info about supplier\n" <<
		+"3. Add info\n" <<
		+"4. Edit info about supplier\n" <<
		+"5. Delete supplier\n" <<
		+"6. Clear file\n" <<
		+"7. Return old menu" << endl;
}
void ShowCustomerMenu() {
	cout << "Customer menu:\n" <<
		+"1. Show all info about customer\n" << //��������� ��� ���������� � ������� supplier.txt
		+"2. Show info about customer\n" <<
		+"3. Add info\n" <<
		+"4. Edit info about customer\n" <<
		+"5. Delete customer\n" <<
		+"6. Clear file\n" <<
		+"7. Return old menu" << endl;
}

//�������� ���� ���� ��� ������ ����
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