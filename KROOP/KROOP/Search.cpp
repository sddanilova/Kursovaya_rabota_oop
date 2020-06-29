#include "Search.h"
#include <string>

Search::Search() {

}

Search::~Search() {

}

void Search::searchAssemblerInstrumental(AssemblerInstrumental** ValStek, int ValSize) {
	cout << "Выберете критерий поиска:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Особенности" << endl;
	cout << "4 - Описание" << endl;
	cout << "5 - Наличие портативной версии" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{
			
			if (ValStek[i]->getName() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}
				
		}
		break;
	}
	case 2: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getVersion() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 3: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getFeatures() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 4: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getDescription() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 5: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getPortableVersion() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	default:
		break;
	}
}

void Search::searchTranslator(Translator** ValStek, int ValSize) {
	cout << "Выберете критерий поиска:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getName() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 2: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getVersion() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 3: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getTypeSystem() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	default:
		break;
	}
}

void Search::searchTextEditors(TextEditors** ValStek, int ValSize) {
	cout << "Выберете критерий поиска:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	cout << "4 - Цена" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getName() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 2: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getVersion() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 3: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getTypeSystem() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 4: {
		float tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getCost() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	default:
		break;
	}
}

void Search::searchCharacterDebugger(CharacterDebugger** ValStek, int ValSize) {
	cout << "Выберете критерий поиска:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getName() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 2: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getVersion() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 3: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getTypeDebugger() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	default:
		break;
	}
}

void Search::searchMachineDebugger(MachineDebugger** ValStek, int ValSize) {
	cout << "Выберете критерий поиска:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	cout << "4 - Дополнительные функции" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getName() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 2: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getVersion() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 3: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getTypeDebugger() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	case 4: {
		string tmp;
		cout << "Введите значение для поиска: ";
		cin >> tmp;
		for (int i = 0; i < ValSize; i++)
		{

			if (ValStek[i]->getAdditionalFunctions() == tmp)
			{
				ValStek[i]->print();
				cout << endl;
			}

		}
		break;
	}
	default:
		break;
	}
}