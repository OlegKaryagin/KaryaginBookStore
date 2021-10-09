#pragma once
#include "CBookKaryagin.h"
class CBookFiction :
    public CBookKaryagin
{
    string genre;

public:
    void newBook();
    void outputOnDisplay();
};

