#include "CharacterDebugger.h"

CharacterDebugger::CharacterDebugger() {
	name = new char[strlen("Noname") + 1];
	strcpy(name, "Noname");
	version = new char[strlen("Noname") + 1];
	strcpy(version, "Noname");
	typeDebugger = new char[strlen("Символьный") + 1];
	strcpy(typeDebugger, "Символьный");
}

CharacterDebugger& CharacterDebugger::operator=(const CharacterDebugger& val) {
	if (this == &val) return *this;

	delete[] name;
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);

	delete[] version;
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);

	delete[] typeDebugger;
	typeDebugger = new char[strlen(val.typeDebugger) + 1];
	strcpy(typeDebugger, val.typeDebugger);


	return *this;
}

CharacterDebugger::CharacterDebugger(char* name1, char* version1, char* typeDebugger1) {
	name = nullptr;
	version = nullptr;
	typeDebugger = nullptr;

	name = new char[strlen(name1) + 1];
	strcpy(name, name1);

	version = new char[strlen(version1) + 1];
	strcpy(version, version1);

	typeDebugger = new char[strlen(typeDebugger1) + 1];
	strcpy(typeDebugger, typeDebugger1);
}

CharacterDebugger::CharacterDebugger(const CharacterDebugger& val) {
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);
	typeDebugger = new char[strlen(val.typeDebugger) + 1];
	strcpy(typeDebugger, val.typeDebugger);
}

CharacterDebugger::~CharacterDebugger() {

}

void CharacterDebugger::print() {
	cout << "Название: " << name << endl;
	cout << "Версия: " << version << endl;
	cout << "Вид: " << typeDebugger << endl;
}

void CharacterDebugger::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
		File >> typeDebugger;
	}
}

void CharacterDebugger::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl << typeDebugger << endl;
	}
}

void CharacterDebugger::enterFromKeyboard() {
	cout << "Название: ";
	cin >> name;
	cout << "Версия: ";
	cin >> version;
	cout << "Вид: ";
	cin >> typeDebugger;
}