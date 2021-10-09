#include <iostream>
#include <fstream>
#include "CBookKaryagin.h"
#include "CBookStoreKaryagin.h"
#include "CBookFiction.h"


using namespace std;

void MainMenu()
{
	cout << "1. Add book in book list." << endl
		<< "2. Print book list on display." << endl
		<< "3. Load book list from file." << endl
		<< "4. Save book list in file." << endl
		<< "5. Clear book list." << endl
		<< "6. Add fiction book in book list." << endl
		<< "0. Exit." << endl
		<< "Enter the code menu:" << endl;
}

int codeMenu()
{
	int code;
	while ((cin >> code).fail() || code < 0 || code>6)
	{
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Input error!" << endl;
	}
	return code;
}

int main()
{
	CBookStoreKaryagin bookList;
	while (1)
	{
		MainMenu();
		switch (codeMenu())
		{
			case 1:
			{
				bookList.enterBook();
				break;
			}
			case 2:
			{
				bookList.outputBooksListOnDisplay();
				break;
			}
			case 3:
			{
				bookList.readBooksListFromFile();
				break;
			}
			case 4:
			{
				bookList.writeBooksListInFile();
				break;
			}
			case 5:
			{
				bookList.clearBooksList();
				break;
			}
			case 6:
			{
				bookList.enterBookFiction();
				break;
			}
			case 0:
			{
				return 0;
			}
		}
	}
	return 0;
}