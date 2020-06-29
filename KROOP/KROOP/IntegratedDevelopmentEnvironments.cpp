#include "IntegratedDevelopmentEnvironments.h"


char* IntegratedDevelopmentEnvironments::getTypeSystem()const {
	return typeSystem;
}
void IntegratedDevelopmentEnvironments::setTypeSystem(char* val) {
	typeSystem = new char[strlen(val) + 1];
	strcpy(typeSystem, val);
}

IntegratedDevelopmentEnvironments::~IntegratedDevelopmentEnvironments() {
	delete[] typeSystem;
}

void IntegratedDevelopmentEnvironments::print() {
	cout << "��������: " << name << endl;
	cout << "������: " << version << endl;
	cout << "���: " << typeSystem << endl;
}

void IntegratedDevelopmentEnvironments::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
		File >> typeSystem;
	}
}

void IntegratedDevelopmentEnvironments::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl << typeSystem << endl;
	}
}

void IntegratedDevelopmentEnvironments::enterFromKeyboard() {
	cout << "��������: ";
	cin >> name;
	cout << "������: ";
	cin >> version;
	cout << "���: ";
	cin >> typeSystem;
}