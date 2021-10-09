#pragma once
#include <string>
#include <fstream>

using namespace std;

class CBookKaryagin
{
	string bookTitle;
	string author;
	int amount = 0;
	int price = 0;
	
public:
	virtual void newBook();
	void addFromFile(fstream& fin);
	virtual void outputOnDisplay();
	void outputInFile(fstream& fout);

	

};

