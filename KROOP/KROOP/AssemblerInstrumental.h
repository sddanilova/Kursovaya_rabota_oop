#pragma once
#include "Instrumental.h"
class AssemblerInstrumental : public Instrumental {
private:
	char* features; //Особенности
	char* description; //Описание
	char* portableVersion; //Наличие портативной версии
public:
	friend class Search;
	friend class Sortirovka;
	AssemblerInstrumental();
	AssemblerInstrumental&operator=(const AssemblerInstrumental&);
	AssemblerInstrumental(char*, char*, char*, char*, char*);
	AssemblerInstrumental(const AssemblerInstrumental&);
	~AssemblerInstrumental();

	char* getFeatures()const;
	char* getDescription()const;
	char* getPortableVersion()const;
	void setFeatures(char*);
	void setDescription(char*);
	void setPortableVersion(char*);

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	void enterFromKeyboard();
};