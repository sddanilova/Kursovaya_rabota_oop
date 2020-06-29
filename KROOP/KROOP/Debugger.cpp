#include "Debugger.h"

char* Debugger::getTypeDebugger()const {
	return typeDebugger;
}

void Debugger::setTypeDebugger(char* val) {
	typeDebugger = new char[strlen(val) + 1];
	strcpy(typeDebugger, val);
}

Debugger::~Debugger() {
	delete[] typeDebugger;
}

void Debugger::print() {
	cout << "Название: " << name << endl;
	cout << "Версия: " << version << endl;
	cout << "Вид: " << typeDebugger << endl;
}

void Debugger::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
		File >> typeDebugger;
	}
}

void Debugger::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl << typeDebugger << endl;
	}
}

void Debugger::enterFromKeyboard() {
	cout << "Название: ";
	cin >> name;
	cout << "Версия: ";
	cin >> version;
	cout << "Вид: ";
	cin >> typeDebugger;
}