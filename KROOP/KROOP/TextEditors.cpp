#include "TextEditors.h"

TextEditors::TextEditors() {
	cost = 0;
	name = new char[strlen("Noname") + 1];
	strcpy(name, "Noname");
	version = new char[strlen("Noname") + 1];
	strcpy(version, "Noname");
	typeSystem = new char[strlen("Noname") + 1];
	strcpy(typeSystem, "Noname");
}
TextEditors& TextEditors::operator=(const TextEditors& val) {
	if (this == &val) return *this;

	cost = val.cost;

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

TextEditors::TextEditors(char* name1, char* version1, char* typeSystem1, float cost1) {
	try {
		if (cost1 < 0) throw InstrumentalEx::BelowZero("Цена не может быть меньше 0!");
		cost = cost1;
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
	catch (InstrumentalEx::BelowZero(e)) {
		cout << "Ошибка:" << e.GetError() << endl;
	}
}

TextEditors::TextEditors(const TextEditors& val) {
	cost = val.cost;
	name = new char[strlen(val.name) + 1];
	strcpy(name, val.name);
	version = new char[strlen(val.version) + 1];
	strcpy(version, val.version);
	typeSystem = new char[strlen(val.typeSystem) + 1];
	strcpy(typeSystem, val.typeSystem);
}
TextEditors::~TextEditors() {

}

float TextEditors::getCost()const {
	return cost;
}
void TextEditors::setCost(float val) {
	cost = val;
}

void TextEditors::print() {
	cout << "Название: " << name << endl;
	cout << "Версия: " << version << endl;
	cout << "Вид: " << typeSystem << endl;
	cout << "Цена: " << cost << endl;
}

void TextEditors::readFromFile(char* val) {
	ifstream File;
	File.open(val);
	if (File.is_open()) {
		File >> name;
		File >> version;
		File >> typeSystem;
		File >> cost;
	}
}

void TextEditors::writeToFile(char* val) {
	ofstream a;
	a.open(val);
	if (a.is_open()) {
		a << name << endl << version << endl << typeSystem << endl << cost << endl;
	}
}

void TextEditors::enterFromKeyboard() {
	cout << "Название: ";
	cin >> name;
	cout << "Версия: ";
	cin >> version;
	cout << "Вид: ";
	cin >> typeSystem;
	cout << "Цена: ";
	cin >> cost;
}