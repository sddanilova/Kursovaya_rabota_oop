#include "MachineDebugger.h"

MachineDebugger::MachineDebugger() {
	name = new char[strlen("Noname") + 1];
	strcpy(name, "Noname");
	version = new char[strlen("Noname") + 1];
	strcpy(version, "Noname");
	typeDebugger = new char[strlen("Машинный") + 1];
	strcpy(typeDebugger, "Машинный");
	additionalFunctions = new char[strlen("Noname") + 1];
	strcpy(additionalFunctions, "Noname");
}

MachineDebugger& MachineDebugger::operator=(const MachineDebugger& val) {
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

	delete[] additionalFunctions;
	additionalFunctions = new char[strlen(val.additionalFunctions) + 1];
	strcpy(additionalFunctions, val.additionalFunctions);

	return *this;
}

MachineDebugger::MachineDebugger(char* name1, char* version1, char* typeDebugger1, char* additionalFunctions1) {
	name = nullptr;
	version = nullptr;
	typeDebugger = nullptr;
	additionalFunctions = nullptr;

	name = new char[strlen(name1) + 1];
	strcpy(name, name1);

	version = new char[strlen(version1) + 1];
	strcpy(version, version1);

	typeDebugger = new char[strlen(typeDebugger1) + 1];
	strcpy(typeDebugger, typeDebugger1);

	additionalFunctions = new char[strlen(additionalFunctions1) + 1];
	strcpy(additionalFunctions, additionalFunctions1);
}

MachineDebugger::MachineDebugger(const MachineDebugger& val) {
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);
	typeDebugger = new char[strlen(val.typeDebugger) + 1];
	strcpy(typeDebugger, val.typeDebugger);
	additionalFunctions = new char[strlen(val.additionalFunctions) + 1];
	strcpy(additionalFunctions, val.additionalFunctions);
}

MachineDebugger::~MachineDebugger() {

}

char* MachineDebugger::getAdditionalFunctions()const {
	return additionalFunctions;
}

void MachineDebugger::setAdditionalFunctions(char* val) {
	additionalFunctions = new char[strlen(val) + 1];
	strcpy(additionalFunctions, val);
}

void MachineDebugger::print() {
	cout << "Название: " << name << endl;
	cout << "Версия: " << version << endl;
	cout << "Вид: " << typeDebugger << endl;
	cout << "Дополнительные возвможности: " << additionalFunctions << endl;
}

void MachineDebugger::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
		File >> typeDebugger;
		File >> additionalFunctions;
	}
}

void MachineDebugger::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl << typeDebugger << endl << additionalFunctions << endl;
	}
}

void MachineDebugger::enterFromKeyboard() {
	cout << "Название: ";
	cin >> name;
	cout << "Версия: ";
	cin >> version;
	cout << "Вид: ";
	cin >> typeDebugger;
	cout << "Дополнительные возвможности: ";
	cin >> additionalFunctions;
}