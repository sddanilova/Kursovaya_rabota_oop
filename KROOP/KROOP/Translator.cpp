#include "Translator.h"

Translator::Translator() {
	name = new char[strlen("Noname") + 1];
	strcpy(name, "Noname");
	version = new char[strlen("Noname") + 1];
	strcpy(version, "Noname");
	typeSystem = new char[strlen("Noname") + 1];
	strcpy(typeSystem, "Noname");
}
Translator& Translator::operator=(const Translator& val) {
	if (this == &val) return *this;

	delete[] name;
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);

	delete[] version;
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);

	delete[] typeSystem;
	typeSystem = new char[strlen(val.typeSystem) + 1];
	strcpy(typeSystem, val.typeSystem);

	return *this;
}
Translator::Translator(char* name1, char* version1, char* typeSystem1) {
	name = nullptr;
	version = nullptr;
	typeSystem = nullptr;

	name = new char[strlen(name1) + 1];
	strcpy(name, name1);

	version = new char[strlen(version1) + 1];
	strcpy(version, version1);

	typeSystem = new char[strlen(typeSystem1) + 1];
	strcpy(typeSystem, typeSystem1);
}
Translator::Translator(const Translator& val) {
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);
	typeSystem = new char[strlen(val.typeSystem) + 1];
	strcpy(typeSystem, val.typeSystem);
}
Translator::~Translator() {

}

void Translator::print() {
	cout << "Название: " << name << endl;
	cout << "Версия: " << version << endl;
	cout << "Вид: " << typeSystem << endl;
}

void Translator::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
		File >> typeSystem;
	}
}

void Translator::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl << typeSystem << endl;
	}
}

void Translator::enterFromKeyboard() {
	cout << "Название: ";
	cin >> name;
	cout << "Версия: ";
	cin >> version;
	cout << "Вид: ";
	cin >> typeSystem;
}