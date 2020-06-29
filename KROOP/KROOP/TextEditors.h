#pragma once
#include "IntegratedDevelopmentEnvironments.h"
class TextEditors : public IntegratedDevelopmentEnvironments {
private:
	float cost; //—тоимость, если бесплатный - стоимость 0 рублей
public:
	friend class Search;
	friend class Sortirovka;
	TextEditors();
	TextEditors&operator=(const TextEditors&);
	TextEditors(char*, char*, char*, float);
	TextEditors(const TextEditors&);
	~TextEditors();

	float getCost()const;
	void setCost(float);

	virtual void print();
	virtual void readFromFile(char*);
	virtual void writeToFile(char*);
	void enterFromKeyboard();
};
