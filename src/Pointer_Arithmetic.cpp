//============================================================================
// Name        : Pointer_Arithmetic.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
    const int NSTRINGS = 5; // const means you can NOT change that value... constant!
    string numbers[NSTRINGS] =
	{
	"zero", "one", "two", "three", "four"
	};//0 ,  1  ,   2    ,   3   ,   4

    string * pTexts = numbers;	// 'pTexts'=to 'texts[0]' aka "bucket"
				// the --*-- says to look inside of that "bucket"
    cout << *pTexts << " at address: " << pTexts << endl;
    cout << "-------------------our array/pointer" << endl;
    cout << " " << endl;

    pTexts += 3; //pTexts[0] + 3 is like ... pTexts[1]...pTexts[2]...pTexts[3]

    cout << *pTexts << " at address: " << pTexts << endl;
    cout << "-------------------addition" << endl;
    cout << " " << endl;

    pTexts -= 2;

    cout << *pTexts << " at address: " << pTexts << endl;
    cout << "-------------------subtraction" << endl;
    cout << " " << endl;

    string *pEnd = &numbers[NSTRINGS - 1];

    cout << *pEnd << " at address: " << pEnd << endl;
    cout << "-------------------Create a new Pointer" << endl;
    cout << " " << endl;

    pTexts = &numbers[0];				//set back to start

    while (pTexts != (pEnd + 1))
	{
	cout << *pTexts << " at address: " << pTexts << endl;
	pTexts++;
	};

    cout << "-------------------Compare and loop" << endl;
    cout << " " << endl;

    pTexts = &numbers[0];				//set back to start

    int elements = (pEnd+1) - pTexts;

    cout << elements << endl;
    cout << "-------------------number of elements in the array" << endl; // don't use, pEnd should point off array
    cout << " " << endl;

    pTexts = &numbers[0]; //set back to start

    pTexts += NSTRINGS / 2; // really is   pTexts= pTexts + (5/2)
    cout << *pTexts << endl;
    cout << "-------------------find middle of array" << endl;
    cout << " " << endl;

    return 0;
    }
