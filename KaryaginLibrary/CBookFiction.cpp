#include "CBookFiction.h"
#include "CBookKaryagin.h"
#include <iostream>

void CBookFiction::newBook()
{
	CBookKaryagin::newBook();
	cout << "Enter the genre:" << endl;
	cin >> genre;
}

void CBookFiction::outputOnDisplay()
{
	CBookKaryagin::outputOnDisplay();
	cout << "Genre:   " << genre << endl;
}







