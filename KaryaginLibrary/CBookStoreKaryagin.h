#pragma once
#include <vector>
#include "CBookKaryagin.h"


class CBookStoreKaryagin
{
	vector<CBookKaryagin>& listOfBooks;
public:
	CBookStoreKaryagin();
	void enterBook(const CBookKaryagin& book);
	~CBookStoreKaryagin();
	void outputBooksListOnDisplay();
	void readBooksListFromFile();
	void writeBooksListInFile();
	void clearBooksList();
};

