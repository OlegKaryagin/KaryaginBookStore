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
	CBookKaryagin();
	void newBook();
	CBookKaryagin(fstream& fin);
	~CBookKaryagin();
	void outputOnDisplay();
	void outputInFile(fstream& fout);

	/*friend fstream& operator << (fstream& fout, const CBook& book);
	friend fstream& operator >> (fstream& fin, CBook& book);*/
};

