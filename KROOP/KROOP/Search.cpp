#include "Search.h"
#include <string>

Search::Search() {

}

Search::~Search() {

}

void Search::searchAssemblerInstrumental(AssemblerInstrumental** ValStek, int ValSize) {
	cout << "�������� �������� ������:" << endl;
	cout << "1 - ��������" << endl;
	cout << "2 - ������" << endl;
	cout << "3 - �����������" << endl;
	cout << "4 - ��������" << endl;
	cout << "5 - ������� ����������� ������" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
	cout << "�������� �������� ������:" << endl;
	cout << "1 - ��������" << endl;
	cout << "2 - ������" << endl;
	cout << "3 - ���" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
	cout << "�������� �������� ������:" << endl;
	cout << "1 - ��������" << endl;
	cout << "2 - ������" << endl;
	cout << "3 - ���" << endl;
	cout << "4 - ����" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
	cout << "�������� �������� ������:" << endl;
	cout << "1 - ��������" << endl;
	cout << "2 - ������" << endl;
	cout << "3 - ���" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
	cout << "�������� �������� ������:" << endl;
	cout << "1 - ��������" << endl;
	cout << "2 - ������" << endl;
	cout << "3 - ���" << endl;
	cout << "4 - �������������� �������" << endl;
	int val;
	cin >> val;
	switch (val)
	{
	case 1: {
		string tmp;
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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
		cout << "������� �������� ��� ������: ";
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