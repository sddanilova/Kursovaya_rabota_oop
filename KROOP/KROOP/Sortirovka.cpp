#include "Sortirovka.h"
#include <algorithm>
#include <string>

Sortirovka::Sortirovka() {

}
Sortirovka::~Sortirovka() {

}
void Sortirovka::sortAssemblerInstrumental(AssemblerInstrumental** ValStek, int ValSize) {
	cout << "Выберите пункт для сортировки:" << endl;
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
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize ; j++)
			{
				if (strcmp(ValStek[j - 1]->getName(),ValStek[j]->getName())>0)
				{
					AssemblerInstrumental* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 2: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getVersion(), ValStek[j]->getVersion()) > 0)
				{
					AssemblerInstrumental* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 3: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getFeatures(), ValStek[j]->getFeatures()) > 0)
				{
					AssemblerInstrumental* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 4: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getDescription(), ValStek[j]->getDescription()) > 0)
				{
					AssemblerInstrumental* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 5: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getPortableVersion(), ValStek[j]->getPortableVersion()) > 0)
				{
					AssemblerInstrumental* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	default:
		break;
	}
}
void Sortirovka::sortTranslator(Translator** ValStek, int ValSize) {
	cout << "Выберите пункт для сортировки:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getName(), ValStek[j]->getName()) > 0)
				{
					Translator* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 2: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getVersion(), ValStek[j]->getVersion()) > 0)
				{
					Translator* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 3: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getTypeSystem(), ValStek[j]->getTypeSystem()) > 0)
				{
					Translator* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	default:
		break;
	}
}
void Sortirovka::sortTextEditors(TextEditors** ValStek, int ValSize) {
	cout << "Выберите пункт для сортировки:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	cout << "4 - Цена" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getName(), ValStek[j]->getName()) > 0)
				{
					TextEditors* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 2: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getVersion(), ValStek[j]->getVersion()) > 0)
				{
					TextEditors* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 3: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getTypeSystem(), ValStek[j]->getTypeSystem()) > 0)
				{
					TextEditors* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 4: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (ValStek[j - 1]->getCost() > ValStek[j]->getCost())
				{
					TextEditors* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	default:
		break;
	}
}
void Sortirovka::sortCharacterDebugger(CharacterDebugger** ValStek, int ValSize) {
	cout << "Выберите пункт для сортировки:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getName(), ValStek[j]->getName()) > 0)
				{
					CharacterDebugger* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 2: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getVersion(), ValStek[j]->getVersion()) > 0)
				{
					CharacterDebugger* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 3: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getTypeDebugger(), ValStek[j]->getTypeDebugger()) > 0)
				{
					CharacterDebugger* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	default:
		break;
	}
}
void Sortirovka::sortMachineDebugger(MachineDebugger** ValStek, int ValSize) {
	cout << "Выберите пункт для сортировки:" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Версия" << endl;
	cout << "3 - Вид" << endl;
	cout << "4 - Дополнительные возможности" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getName(), ValStek[j]->getName()) > 0)
				{
					MachineDebugger* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 2: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getVersion(), ValStek[j]->getVersion()) > 0)
				{
					MachineDebugger* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 3: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getTypeDebugger(), ValStek[j]->getTypeDebugger()) > 0)
				{
					MachineDebugger* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	case 4: {
		for (int i = 0; i < ValSize; i++)
		{
			for (int j = 1; j < ValSize; j++)
			{
				if (strcmp(ValStek[j - 1]->getAdditionalFunctions(), ValStek[j]->getAdditionalFunctions()) > 0)
				{
					MachineDebugger* temp = ValStek[j - 1];
					ValStek[j - 1] = ValStek[j];
					ValStek[j] = temp;
				}
			}
		}
		break;
	}
	default:
		break;
	}
}