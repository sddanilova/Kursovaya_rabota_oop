#pragma once
#include "IntegratedDevelopmentEnvironments.h"
class Translator : public IntegratedDevelopmentEnvironments {
public:
	friend class Search;
	friend class Sortirovka;
	Translator();
	Translator&operator=(const Translator&);
	Translator(char*, char*, char*);
	Translator(const Translator&);
	~Translator();

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	void enterFromKeyboard();
};