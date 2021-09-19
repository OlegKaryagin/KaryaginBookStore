#include "CBookStoreKaryagin.h"
#include <iostream>
#include "CBookKaryagin.h"

using namespace std;

CBookStoreKaryagin::CBookStoreKaryagin()
{
}

void CBookStoreKaryagin::enterBook(const CBookKaryagin& book)
{
	listOfBooks.push_back(book);
}

CBookStoreKaryagin::~CBookStoreKaryagin()
{
}

void CBookStoreKaryagin::outputBooksListOnDisplay()
{
	for (int i = 0; i <listOfBooks.size(); i++)
		listOfBooks[i].outputOnDisplay();
}

void CBookStoreKaryagin::readBooksListFromFile()
{
	fstream inFile;
	string fileName;
	cout << "Please enter the file name:" << endl;
	cin >> fileName;
	inFile.open(fileName+".txt", fstream::in);
	int bookCount;
	inFile >> bookCount;
	for (int i = 0; i < bookCount; i++)
		{
			CBookKaryagin book(inFile);
			enterBook(book);
		}
	inFile.close();
}

void CBookStoreKaryagin::writeBooksListInFile()
{
	fstream outFile;
	string fileName;
	cout << "Please enter the file name:" << endl;
	cin >> fileName;
	outFile.open(fileName+".txt", fstream::out);
	outFile << listOfBooks.size();
	for (int i = 0; i < listOfBooks.size(); i++)
		listOfBooks[i].outputInFile(outFile);
	outFile.close();
}

void CBookStoreKaryagin::clearBooksList()
{
	listOfBooks.clear();
}
