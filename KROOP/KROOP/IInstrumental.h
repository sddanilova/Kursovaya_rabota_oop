#pragma once
#include "InstrumentalEx.h"
#include <iostream>
#include <fstream>
using namespace std;
class IInstrumental {
public:
	virtual char* getName()const = 0;
	virtual char* getVersion()const = 0;
	virtual void setName(char*) = 0;
	virtual void setVersion(char*) = 0;

	virtual void print() = 0;
	virtual void readFromFile(char*) = 0;
	virtual void writeToFile(char*) = 0;
	virtual void enterFromKeyboard() = 0;
};