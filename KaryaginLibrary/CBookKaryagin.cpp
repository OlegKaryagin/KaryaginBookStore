#include "CBookKaryagin.h"
#include <iostream>
#include <fstream>
#include "CBookFiction.h"

using namespace std;





void CBookKaryagin::newBook()
{
	cout << "Enter the book title:" << endl;
	cin.ignore(10000, '\n');
	getline(cin, bookTitle);
	cout << "Enter the author of book" << endl;
	getline(cin, author);
	cout << "Enter the amount of books in stock:" << endl;
	cin >> amount;
	cout << "Enter price of book:" << endl;
	cin >> price;
}

void CBookKaryagin::addFromFile(fstream& fin)
{
	fin >> bookTitle >> author >> amount >> price;
}



void CBookKaryagin::outputOnDisplay()
{
	cout << "Title:  " + bookTitle << endl
		<< "Author:  " + author << endl
		<< "Amount of stock:  " << amount << endl
		<< "Book price  " << price << endl;
}

void CBookKaryagin::outputInFile(fstream& fout)
{
	fout << this->bookTitle << endl
		<< this->author << endl
		<< this->amount << endl
		<< this->price << endl;
}



