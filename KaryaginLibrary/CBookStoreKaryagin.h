#pragma once
#include <vector>
#include "CBookKaryagin.h"


class CBookStoreKaryagin
{
	vector<CBookKaryagin*> listOfBooks;
public:
	CBookStoreKaryagin();
	void enterBook();
	~CBookStoreKaryagin();
	void outputBooksListOnDisplay();
	void readBooksListFromFile();
	void writeBooksListInFile();
	void clearBooksList();
};

