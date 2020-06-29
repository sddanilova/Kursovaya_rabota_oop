#pragma once
#include <iostream>
#include <fstream>
#include "IInstrumental.h"
using namespace std;

class Instrumental : public IInstrumental {
protected:
	char* name;
	char* version;
public:
	virtual ~Instrumental();

	virtual char* getName()const;
	virtual char* getVersion()const;
	virtual void setName(char*);
	virtual void setVersion(char*);

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	virtual void enterFromKeyboard();
};