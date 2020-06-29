#pragma once
#include "IntegratedDevelopmentEnvironments.h"
class TextEditors : public IntegratedDevelopmentEnvironments {
private:
	float cost; //���������, ���� ���������� - ��������� 0 ������
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
