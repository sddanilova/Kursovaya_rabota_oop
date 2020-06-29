#pragma once
#include "Debugger.h"
class MachineDebugger : public Debugger {
private:
	char* additionalFunctions;
public:
	friend class Search;
	friend class Sortirovka;
	MachineDebugger();
	MachineDebugger&operator=(const MachineDebugger&);
	MachineDebugger(char*, char*, char*, char*);
	MachineDebugger(const MachineDebugger&);
	~MachineDebugger();

	char* getAdditionalFunctions()const;
	void setAdditionalFunctions(char*);

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	void enterFromKeyboard();



	//Статистика api, сколько методов было вызвано и какое количетсво раз
};