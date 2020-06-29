#include "AssemblerInstrumental.h"

AssemblerInstrumental::AssemblerInstrumental() {
	name = new char[strlen("Noname") + 1];
	strcpy(name, "Noname");
	version = new char[strlen("Noname") + 1];
	strcpy(version, "Noname");
	description = new char[strlen("Noname") + 1];
	strcpy(description, "Noname");
	features = new char[strlen("Noname") + 1];
	strcpy(features, "Noname");
	portableVersion = new char[strlen("Noname") + 1];
	strcpy(portableVersion, "Noname");
}

AssemblerInstrumental::AssemblerInstrumental(char* name1, char* version1, char* description1, char* features1, char* portableVersion1) {

	name = nullptr;
	version = nullptr;
	description = nullptr;
	features = nullptr;
	portableVersion = nullptr;

	name = new char[strlen(name1) + 1];
	strcpy(name, name1);

	version = new char[strlen(version1) + 1];
	strcpy(version, version1);

	description = new char[strlen(description1) + 1];
	strcpy(description, description1);

	features = new char[strlen(features1) + 1];
	strcpy(features, features1);

	portableVersion = new char[strlen(portableVersion1) + 1];
	strcpy(portableVersion, portableVersion1);
}

AssemblerInstrumental::AssemblerInstrumental(const AssemblerInstrumental& val) {
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);
	description = new char[strlen(val.description) + 1];
	strcpy(description, val.description);
	features = new char[strlen(val.features) + 1];
	strcpy(features, val.features);
	portableVersion = new char[strlen(val.portableVersion) + 1];
	strcpy(portableVersion, val.portableVersion);
}

AssemblerInstrumental::~AssemblerInstrumental() {

}

AssemblerInstrumental& AssemblerInstrumental::operator=(const AssemblerInstrumental& val) {
	if (this == &val) return *this;

	delete[] name;
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);

	delete[] version;
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);

	delete[] description;
	description = new char[strlen(val.description) + 1];
	strcpy(description, val.description);

	delete[] features;
	features = new char[strlen(val.features) + 1];
	strcpy(features, val.features);

	delete[] portableVersion;
	portableVersion = new char[strlen(val.portableVersion) + 1];
	strcpy(portableVersion, val.portableVersion);

	return *this;
}

char* AssemblerInstrumental::getFeatures()const {
	return features;
}
char* AssemblerInstrumental::getDescription()const {
	return description;
}
char* AssemblerInstrumental::getPortableVersion()const {
	return portableVersion;
}
void AssemblerInstrumental::setFeatures(char* val) {
	features = new char[strlen(val) + 1];
	strcpy(features, val);
}
void AssemblerInstrumental::setDescription(char* val) {
	description = new char[strlen(val) + 1];
	strcpy(description, val);
}
void AssemblerInstrumental::setPortableVersion(char* val) {
	portableVersion = new char[strlen(val) + 1];
	strcpy(portableVersion, val);
}

void AssemblerInstrumental::print() {
	cout << "Название: " << name << endl;
	cout << "Версия: " << version << endl;
	cout << "Особенности: " << features << endl;
	cout << "Описание: " << description << endl;
	cout << "Наличие портативной версии: " << portableVersion << endl;
}

void AssemblerInstrumental::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
		File >> features;
		File >> description;
		File >> portableVersion;
	}
}

void AssemblerInstrumental::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl << features << endl << description << endl << portableVersion << endl;
	}
}

void AssemblerInstrumental::enterFromKeyboard() {
	cout << "Название: ";
	cin >> name;
	cout << "Версия: ";
	cin >> version;
	cout << "Особенности: ";
	cin >> features;
	cout << "Описание: ";
	cin >> description;
	cout << "Наличие портативной версии: ";
	cin >> portableVersion;
}