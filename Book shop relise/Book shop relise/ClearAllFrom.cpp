#include "Header.h"

//�������� ������� �����
void ClearAllFromBook() {
	fstream file("book.txt", ios::out);
	file.close();
}
void ClearAllFromSupplier() {
	fstream file("supplier.txt", ios::out);
	file.close();
}
void ClearAllFromCustomer() {
	fstream file("customer.txt", ios::out);
	file.close();
}

//�������� ��� �����
void ClearAllFromDatabace() {
	ClearAllFromBook();
	ClearAllFromSupplier();
	ClearAllFromCustomer();
}