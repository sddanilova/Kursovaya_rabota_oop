#include "Instrumental.h"

Instrumental::~Instrumental() {
	delete[]name;
	delete[]version;
}

char* Instrumental::getName()const {
	return name;
}

char* Instrumental::getVersion()const {
	return version;
}

void Instrumental::setName(char* val) {
	name = new char[strlen(val) + 1];
	strcpy(name, val);
}

void Instrumental::setVersion(char* val) {
	version = new char[strlen(val) + 1];
	strcpy(version, val);
}

void Instrumental::print() {
	cout << "Название: " << name << endl;
	cout << "Версия: " << version << endl;
}

void Instrumental::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
	}
}

void Instrumental::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl;
	}
}

void Instrumental::enterFromKeyboard() {
	cout << "Название: ";
	cin >> name;
	cout << "Версия: ";
	cin >> version;
}