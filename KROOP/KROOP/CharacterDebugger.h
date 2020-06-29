#pragma once
#include "Debugger.h"
class CharacterDebugger : public Debugger {
public:
	friend class Search;
	friend class Sortirovka;
	CharacterDebugger();
	CharacterDebugger&operator=(const CharacterDebugger&);
	CharacterDebugger(char*, char*, char*);
	CharacterDebugger(const CharacterDebugger&);
	~CharacterDebugger();

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	void enterFromKeyboard();
};