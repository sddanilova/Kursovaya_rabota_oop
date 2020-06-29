#pragma once
#include "Instrumental.h"
class IntegratedDevelopmentEnvironments : public Instrumental {
protected:
	char* typeSystem;

public:
	char* getTypeSystem()const;
	void setTypeSystem(char*);

	virtual ~IntegratedDevelopmentEnvironments();

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	void enterFromKeyboard();
};