#include "Header.h"

//Очищення кожного файлу
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

//Очищення всіх файлів
void ClearAllFromDatabace() {
	ClearAllFromBook();
	ClearAllFromSupplier();
	ClearAllFromCustomer();
}