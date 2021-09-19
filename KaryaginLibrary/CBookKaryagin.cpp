#include "CBookKaryagin.h"
#include <iostream>
#include <fstream>
#include "CBookKaryagin.h"

using namespace std;



CBookKaryagin::CBookKaryagin()
{}

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

CBookKaryagin::CBookKaryagin(fstream& fin)
{
	fin >> this->bookTitle >> this->author >> this->amount >> this->price;
}

CBookKaryagin::~CBookKaryagin()
{
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



/*fstream& operator<<(fstream& fout, const CBook& book)
{
	fout << book.bookTitle << endl
		<< book.author << endl
		<< book.amount << endl
		<< book.price << endl;
	return fout;
}

fstream& operator>>(fstream& fin, CBook& book)
{
	fin >> book.bookTitle >> book.author >> book.amount >> book.price;
	return fin;
}*/
