#include <iostream>
#include <fstream>
#include "CBookKaryagin.h"
#include "CBookStoreKaryagin.h"


using namespace std;

void MainMenu()
{
	cout << "1.New book." << endl
		<< "2. Print book on display." << endl
		<< "3. Load book from file." << endl
		<< "4. Save book in file." << endl
		<< "5. Add book in book list." << endl
		<< "6. Print book list on display." << endl
		<< "7. Load book list from file." << endl
		<< "8. Save book list in file." << endl
		<< "9. Clear book list." << endl
		<< "0. Exit." << endl
		<< "Enter the code menu:" << endl;
}

int codeMenu()
{
	int code;
	while ((cin >> code).fail() || code < 0 || code>9)
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
	CBookKaryagin book;
	while (1)
	{
		MainMenu();
		switch (codeMenu())
		{
			case 1:
			{
				book.newBook();
				break;
			}
			case 2:
			{
				book.outputOnDisplay();
				break;
			}
			case 3:
			{
				fstream inFile;
				string fileName; 
				cout << "Please enter the file name:" << endl;
				cin >> fileName;
				inFile.open(fileName + ".txt", fstream::in);
				CBookKaryagin book1(inFile);
				inFile.close();
				book = book1;
				break;
			}
			case 4:
			{
				fstream outFile;
				string fileName;
				cout << "Please enter the file name:" << endl;
				cin >> fileName;
				outFile.open(fileName + ".txt", fstream::out);
				book.outputInFile(outFile);
				outFile.close();
				break;
			}
			case 5:
			{
				bookList.enterBook(book);
				break;
			}
			case 6:
			{
				bookList.outputBooksListOnDisplay();
				break;
			}
			case 7:
			{
				bookList.readBooksListFromFile();
				break;
			}
			case 8:
			{
				bookList.writeBooksListInFile();
				break;
			}
			case 9:
			{
				bookList.clearBooksList();
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