#include "CBookStoreKaryagin.h"
#include <iostream>
#include "CBookKaryagin.h"

using namespace std;

CBookStoreKaryagin::CBookStoreKaryagin()
{
}

void CBookStoreKaryagin::enterBook()
{
	CBookKaryagin* book = new CBookKaryagin;
	book->newBook();
	listOfBooks.push_back(book);
}

CBookStoreKaryagin::~CBookStoreKaryagin()
{
	for (CBookKaryagin* book : listOfBooks)
		delete book;
}

void CBookStoreKaryagin::outputBooksListOnDisplay()
{
	for (int i = 0; i < listOfBooks.size(); i++)
		listOfBooks[i]->outputOnDisplay();
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
			CBookKaryagin* book = new CBookKaryagin;
			book->addFromFile(inFile);
			listOfBooks.push_back(book);
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
	outFile << listOfBooks.size()<<endl;
	for (int i = 0; i < listOfBooks.size(); i++)
	{
		listOfBooks[i]->outputInFile(outFile);
	}
	outFile.close();
}

void CBookStoreKaryagin::clearBooksList()
{
	for (int i = 0; i < listOfBooks.size(); i++)
		delete listOfBooks[i];
	listOfBooks.clear();
}
