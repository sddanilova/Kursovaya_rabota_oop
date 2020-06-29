#include "windows.h"
#include "IInstrumental.h"
#include "InstrumentalEx.h"
#include "DinamicMatrix.h"
#include "TextEditors.h"
#include "AssemblerInstrumental.h"
#include "Translator.h"
#include "CharacterDebugger.h"
#include "MachineDebugger.h"
#include "Search.h"
#include "Sortirovka.h"
using namespace std;



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	DinamicMatrix val = DinamicMatrix(5);
	val.AddCell(0, new AssemblerInstrumental();
	val.AddCell(1, new Translator());
	val.AddCell(2, new TextEditors());
	val.AddCell(3, new CharacterDebugger());
	val.AddCell(4, new MachineDebugger());
	Search SEARCH;
	Sortirovka SORT;
	while (true)
	{
		int chosen_1;
		cout << "�������� ����� ��� ������:" << endl;
		cout << "1 - ���������" << endl;
		cout << "2 - ����������" << endl;
		cout << "3 - ��������� ��������" << endl;
		cout << "4 - ���������� ��������" << endl;
		cout << "5 - �������� ��������" << endl;
		cin >> chosen_1;
		switch (chosen_1)
		{
		case 1: {
			int chosen_2;
			cout << "�������� �������� �������:" << endl;
			cout << "1 - �����" << endl;
			cout << "2 - ����������" << endl;
			cout << "3 - ������ � ������������ ��������" << endl;
			cout << "4 - ���������� ������ �������" << endl;
			cout << "5 - �������� ���� ���������" << endl;
			cin >> chosen_2;
			switch (chosen_2)
			{
			case 1: {
				AssemblerInstrumental** obj = new AssemblerInstrumental*[val.columnsCount[0]];
				for (int i = 0; i < val.columnsCount[0];i++) {
					obj[i] = ((AssemblerInstrumental*)val.getElement(0, i));
				}
				SEARCH.searchAssemblerInstrumental(obj, val.columnsCount[0]);
				break;
			}
			case 2: {
				SORT.sortAssemblerInstrumental((AssemblerInstrumental**)val.getColumn(0), val.columnsCount[0]);
				for (int i = 0; i < val.columnsCount[0]; i++) {
					((AssemblerInstrumental*)val.getElement(0, i))->print();
				}
				break;
			}
			case 3: {
				try {
					cout << "�������� ������ ������ ��� ������. � ������ ������ ���������� " << val.columnsCount[0] << " ������(��)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("�������� �� ������ ���� ������ ���� ����� 0!");
					IInstrumental* obj = val.getElement(0, indexObj - 1);
					cout << "��������� �������:" << endl;
					((AssemblerInstrumental*)obj)->print();
					cout << "������� ����������� ��������:";
					cout << "1 - ��������� ��������";
					cout << "2 - �������� ��������";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "�������� ���� ��� ���������:" << endl;
						cout << "1 - ��������" << endl;
						cout << "2 - ������" << endl;
						cout << "3 - �����������" << endl;
						cout << "4 - ��������" << endl;
						cout << "5 - ������� ����������� ������" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getName() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setName(tmp);
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getVersion() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setVersion(tmp);
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getFeatures() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setFeatures(tmp);
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getFeatures() << ".";
							break;
						}
						case 4: {
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getDescription() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setDescription(tmp);
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getDescription() << ".";
							break;
						}
						case 5: {
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getPortableVersion() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setPortableVersion(tmp);
							cout << "������� �������� ����: " << ((AssemblerInstrumental*)obj)->getPortableVersion() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(0, indexObj - 1);
						cout << "������� ������� ������.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "������:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - ���� �� �����" << endl;
				cout << "2 - �������� ������������ �������" << endl; 
				cout << "3 - ���� ���� ����� � ����������" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "������� ���� �� �����: " << endl;
					string strtmp;
					char* temp;
					cin >> strtmp;
					temp = new char[strlen(strtmp.c_str()) + 1];
					strcpy(temp, strtmp.c_str());
					val.AddCell(0, new AssemblerInstrumental());
					((AssemblerInstrumental*)val.getElement(0, val.columnsCount[0] - 1))->readFromFile(temp);
					break;
				}
				case 2: {
					val.AddCell(0, new AssemblerInstrumental());
					break;
				}
				case 3: {
					val.AddCell(0, new AssemblerInstrumental());
					((AssemblerInstrumental*)val.getElement(0, val.columnsCount[0] - 1))->enterFromKeyboard();
					break;
				}
				default:
					break;
				}
				break;
			}
			case 5: {
				for (int i = 0; i < val.columnsCount[0]; i++) {
					cout << "������ �������� : " << i << endl;
					((AssemblerInstrumental*)val.getElement(0, i))->print();
				}
				break;
			}
			default:
				break;
			}
			break;
		}
		case 2: {
			int chosen_2;
			cout << "�������� �������� �������:" << endl;
			cout << "1 - �����" << endl;
			cout << "2 - ����������" << endl;
			cout << "3 - ������ � ������������ ��������" << endl;
			cout << "4 - ���������� ������ �������" << endl;
			cout << "5 - �������� ���� ���������" << endl;
			cin >> chosen_2;
			switch (chosen_2)
			{
			case 1: {
				Translator** obj = new Translator*[val.columnsCount[1]];
				for (int i = 0; i < val.columnsCount[1]; i++) {
					obj[i] = ((Translator*)val.getElement(1, i));
				}
				SEARCH.searchTranslator(obj, val.columnsCount[1]);
				break;
			}
			case 2: {
				SORT.sortTranslator((Translator**)val.getColumn(1), val.columnsCount[1]);
				for (int i = 0; i < val.columnsCount[1]; i++) {
					((Translator*)val.getElement(1, i))->print();
				}
				break;
			}
			case 3: {
				try {
					cout << "�������� ������ ������ ��� ������. � ������ ������ ���������� " << val.columnsCount[1] << " ������(��)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("�������� �� ������ ���� ������ ���� ����� 0!");
					IInstrumental* obj = val.getElement(1, indexObj - 1);
					cout << "��������� �������:" << endl;
					((Translator*)obj)->print();
					cout << "������� ����������� ��������:";
					cout << "1 - ��������� ��������";
					cout << "2 - �������� ��������";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "�������� ���� ��� ���������:" << endl;
						cout << "1 - ��������" << endl;
						cout << "2 - ������" << endl;
						cout << "3 - ���" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "������� �������� ����: " << ((Translator*)obj)->getName() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((Translator*)obj)->setName(tmp);
							cout << "������� �������� ����: " << ((Translator*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "������� �������� ����: " << ((Translator*)obj)->getVersion() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((Translator*)obj)->setVersion(tmp);
							cout << "������� �������� ����: " << ((Translator*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "������� �������� ����: " << ((Translator*)obj)->getTypeSystem() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((Translator*)obj)->setTypeSystem(tmp);
							cout << "������� �������� ����: " << ((Translator*)obj)->getTypeSystem() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(1, indexObj - 1);
						cout << "������� ������� ������.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "������:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - ���� �� �����" << endl;
				cout << "2 - �������� ������������ �������" << endl;
				cout << "3 - ���� ���� ����� � ����������" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "������� ���� �� �����: " << endl;
					string strtmp;
					char* temp;
					cin >> strtmp;
					temp = new char[strlen(strtmp.c_str()) + 1];
					strcpy(temp, strtmp.c_str());
					val.AddCell(1, new Translator());
					((Translator*)val.getElement(1, val.columnsCount[1] - 1))->readFromFile(temp);
					break;
				}
				case 2: {
					val.AddCell(1, new Translator());
					break;
				}
				case 3: {
					val.AddCell(1, new Translator());
					((Translator*)val.getElement(1, val.columnsCount[1] - 1))->enterFromKeyboard();
					break;
				}
				default:
					break;
				}
				break;
			}
			case 5: {
				for (int i = 0; i < val.columnsCount[1]; i++) {
					cout << "������ �������� : " << i << endl;
					((Translator*)val.getElement(1, i))->print();
				}
				break;
			}
			default:
				break;
			}
			break;
		}
		case 3: {
			int chosen_2;
			cout << "�������� �������� �������:" << endl;
			cout << "1 - �����" << endl;
			cout << "2 - ����������" << endl;
			cout << "3 - ������ � ������������ ��������" << endl;
			cout << "4 - ���������� ������ �������" << endl;
			cout << "5 - �������� ���� ���������" << endl;
			cin >> chosen_2;
			switch (chosen_2)
			{
			case 1: {
				TextEditors** obj = new TextEditors*[val.columnsCount[2]];
				for (int i = 0; i < val.columnsCount[2]; i++) {
					obj[i] = ((TextEditors*)val.getElement(2, i));
				}
				SEARCH.searchTextEditors(obj, val.columnsCount[2]);
				break;
			}
			case 2: {
				SORT.sortTextEditors((TextEditors**)val.getColumn(2), val.columnsCount[2]);
				for (int i = 0; i < val.columnsCount[2]; i++) {
					((TextEditors*)val.getElement(2, i))->print();
				}
				break;
			}
			case 3: {
				try {
					cout << "�������� ������ ������ ��� ������. � ������ ������ ���������� " << val.columnsCount[2] << " ������(��)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("�������� �� ������ ���� ������ ���� ����� 0!");
					IInstrumental* obj = val.getElement(2, indexObj - 1);
					cout << "��������� �������:" << endl;
					((TextEditors*)obj)->print();
					cout << "������� ����������� ��������:";
					cout << "1 - ��������� ��������";
					cout << "2 - �������� ��������";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "�������� ���� ��� ���������:" << endl;
						cout << "1 - ��������" << endl;
						cout << "2 - ������" << endl;
						cout << "3 - ���" << endl;
						cout << "4 - ����" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getName() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((TextEditors*)obj)->setName(tmp);
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getVersion() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((TextEditors*)obj)->setVersion(tmp);
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getTypeSystem() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((TextEditors*)obj)->setTypeSystem(tmp);
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getTypeSystem() << ".";
							break;
						}
						case 4: {
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getCost() << ". ������� ����� ��������: ";
							float tmp;
							cin >> tmp;
							((TextEditors*)obj)->setCost(tmp);
							cout << "������� �������� ����: " << ((TextEditors*)obj)->getCost() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(2, indexObj - 1);
						cout << "������� ������� ������.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "������:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - ���� �� �����" << endl;
				cout << "2 - �������� ������������ �������" << endl;
				cout << "3 - ���� ���� ����� � ����������" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "������� ���� �� �����: " << endl;
					string strtmp;
					char* temp;
					cin >> strtmp;
					temp = new char[strlen(strtmp.c_str()) + 1];
					strcpy(temp, strtmp.c_str());
					val.AddCell(2, new TextEditors());
					((TextEditors*)val.getElement(2, val.columnsCount[2] - 1))->readFromFile(temp);
					break;
				}
				case 2: {
					val.AddCell(2, new TextEditors());
					break;
				}
				case 3: {
					val.AddCell(2, new TextEditors());
					((TextEditors*)val.getElement(2, val.columnsCount[2] - 1))->enterFromKeyboard();
					break;
				}
				default:
					break;
				}
				break;
			}
			case 5: {
				for (int i = 0; i < val.columnsCount[2]; i++) {
					cout << "������ �������� : " << i << endl;
					((TextEditors*)val.getElement(2, i))->print();
				}
				break;
			}
			default:
				break;
			}
			break;
		}
		case 4: {
			int chosen_2;
			cout << "�������� �������� �������:" << endl;
			cout << "1 - �����" << endl;
			cout << "2 - ����������" << endl;
			cout << "3 - ������ � ������������ ��������" << endl;
			cout << "4 - ���������� ������ �������" << endl;
			cout << "5 - �������� ���� ���������" << endl;
			cin >> chosen_2;
			switch (chosen_2)
			{
			case 1: {
				CharacterDebugger** obj = new CharacterDebugger*[val.columnsCount[3]];
				for (int i = 0; i < val.columnsCount[3]; i++) {
					obj[i] = ((CharacterDebugger*)val.getElement(3, i));
				}
				SEARCH.searchCharacterDebugger(obj, val.columnsCount[3]);
				break;
			}
			case 2: {
				SORT.sortCharacterDebugger((CharacterDebugger**)val.getColumn(3), val.columnsCount[3]);
				for (int i = 0; i < val.columnsCount[3]; i++) {
					((CharacterDebugger*)val.getElement(3, i))->print();
				}
				break;
			}
			case 3: {
				try {
					cout << "�������� ������ ������ ��� ������. � ������ ������ ���������� " << val.columnsCount[3] << " ������(��)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("�������� �� ������ ���� ������ ���� ����� 0!");
					IInstrumental* obj = val.getElement(3, indexObj - 1);
					cout << "��������� �������:" << endl;
					((CharacterDebugger*)obj)->print();
					cout << "������� ����������� ��������:";
					cout << "1 - ��������� ��������";
					cout << "2 - �������� ��������";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "�������� ���� ��� ���������:" << endl;
						cout << "1 - ��������" << endl;
						cout << "2 - ������" << endl;
						cout << "3 - ��� ���������" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "������� �������� ����: " << ((CharacterDebugger*)obj)->getName() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((CharacterDebugger*)obj)->setName(tmp);
							cout << "������� �������� ����: " << ((CharacterDebugger*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "������� �������� ����: " << ((CharacterDebugger*)obj)->getVersion() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((CharacterDebugger*)obj)->setVersion(tmp);
							cout << "������� �������� ����: " << ((CharacterDebugger*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "������� �������� ����: " << ((CharacterDebugger*)obj)->getTypeDebugger() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((CharacterDebugger*)obj)->setTypeDebugger(tmp);
							cout << "������� �������� ����: " << ((CharacterDebugger*)obj)->getTypeDebugger() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(3, indexObj - 1);
						cout << "������� ������� ������.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "������:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - ���� �� �����" << endl;
				cout << "2 - �������� ������������ �������" << endl;
				cout << "3 - ���� ���� ����� � ����������" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "������� ���� �� �����: " << endl;
					string strtmp;
					char* temp;
					cin >> strtmp;
					temp = new char[strlen(strtmp.c_str()) + 1];
					strcpy(temp, strtmp.c_str());
					val.AddCell(3, new CharacterDebugger());
					((CharacterDebugger*)val.getElement(3, val.columnsCount[3] - 1))->readFromFile(temp);
					break;
				}
				case 2: {
					val.AddCell(3, new CharacterDebugger());
					break;
				}
				case 3: {
					val.AddCell(3, new CharacterDebugger());
					((CharacterDebugger*)val.getElement(3, val.columnsCount[3] - 1))->enterFromKeyboard();
					break;
				}
				default:
					break;
				}
				break;
			}
			case 5: {
				for (int i = 0; i < val.columnsCount[3]; i++) {
					cout << "������ �������� : " << i << endl;
					((CharacterDebugger*)val.getElement(3, i))->print();
				}
				break;
			}
			default:
				break;
			}
			break;
		}
		case 5: {
			int chosen_2;
			cout << "�������� �������� �������:" << endl;
			cout << "1 - �����" << endl;
			cout << "2 - ����������" << endl;
			cout << "3 - ������ � ������������ ��������" << endl;
			cout << "4 - ���������� ������ �������" << endl;
			cout << "5 - �������� ���� ���������" << endl;
			cin >> chosen_2;
			switch (chosen_2)
			{
			case 1: {
				MachineDebugger** obj = new MachineDebugger*[val.columnsCount[4]];
				for (int i = 0; i < val.columnsCount[4]; i++) {
					obj[i] = ((MachineDebugger*)val.getElement(4, i));
				}
				SEARCH.searchMachineDebugger(obj, val.columnsCount[4]);
				break;
			}
			case 2: {
				SORT.sortMachineDebugger((MachineDebugger**)val.getColumn(4), val.columnsCount[4]);
				for (int i = 0; i < val.columnsCount[4]; i++) {
					((MachineDebugger*)val.getElement(4, i))->print();
				}
				break;
			}
			case 3: {
				try {
					cout << "�������� ������ ������ ��� ������. � ������ ������ ���������� " << val.columnsCount[4] << " ������(��)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("�������� �� ������ ���� ������ ���� ����� 0!");
					IInstrumental* obj = val.getElement(4, indexObj - 1);
					cout << "��������� �������:" << endl;
					((MachineDebugger*)obj)->print();
					cout << "������� ����������� ��������:";
					cout << "1 - ��������� ��������";
					cout << "2 - �������� ��������";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "�������� ���� ��� ���������:" << endl;
						cout << "1 - ��������" << endl;
						cout << "2 - ������" << endl;
						cout << "3 - ��� ���������" << endl;
						cout << "4 - �������������� �����������" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getName() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setName(tmp);
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getVersion() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setVersion(tmp);
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getTypeDebugger() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setTypeDebugger(tmp);
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getTypeDebugger() << ".";
							break;
						}
						case 4: {
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getAdditionalFunctions() << ". ������� ����� ��������: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setAdditionalFunctions(tmp);
							cout << "������� �������� ����: " << ((MachineDebugger*)obj)->getAdditionalFunctions() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(4, indexObj - 1);
						cout << "������� ������� ������.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "������:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - ���� �� �����" << endl;
				cout << "2 - �������� ������������ �������" << endl;
				cout << "3 - ���� ���� ����� � ����������" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "������� ���� �� �����: " << endl;
					string strtmp;
					char* temp;
					cin >> strtmp;
					temp = new char[strlen(strtmp.c_str()) + 1];
					strcpy(temp, strtmp.c_str());
					val.AddCell(4, new MachineDebugger());
					((MachineDebugger*)val.getElement(4, val.columnsCount[4] - 1))->readFromFile(temp);
					break;
				}
				case 2: {
					val.AddCell(4, new MachineDebugger());
					break;
				}
				case 3: {
					val.AddCell(4, new MachineDebugger());
					((MachineDebugger*)val.getElement(4, val.columnsCount[4] - 1))->enterFromKeyboard();
					break;
				}
				default:
					break;
				}
				break;
			}
			case 5: {
				for (int i = 0; i < val.columnsCount[4]; i++) {
					cout << "������ �������� : " << i << endl;
					((MachineDebugger*)val.getElement(4, i))->print();
				}
				break;
			}
			default:
				break;
			}
			break;
		}
		default:
			break;
		}
	}
}