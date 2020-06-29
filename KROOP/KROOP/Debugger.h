#pragma once
#include "Instrumental.h"
class Debugger : public Instrumental {
protected:
	char* typeDebugger;
public:
	char* getTypeDebugger()const;
	void setTypeDebugger(char*);

	virtual ~Debugger();

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	void enterFromKeyboard();
};