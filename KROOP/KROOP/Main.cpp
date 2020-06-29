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
		cout << "Выберете класс для работы:" << endl;
		cout << "1 - Ассемблер" << endl;
		cout << "2 - Транслятор" << endl;
		cout << "3 - Текстовый редактор" << endl;
		cout << "4 - Символьный отладчик" << endl;
		cout << "5 - Машинный отладчик" << endl;
		cin >> chosen_1;
		switch (chosen_1)
		{
		case 1: {
			int chosen_2;
			cout << "Выберете желаемую функцию:" << endl;
			cout << "1 - Поиск" << endl;
			cout << "2 - Сортировка" << endl;
			cout << "3 - Работа с существующим объектом" << endl;
			cout << "4 - Добавление нового объекта" << endl;
			cout << "5 - Просмотр всех элементов" << endl;
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
					cout << "Выберете индекс объета для работы. В данный момент существует " << val.columnsCount[0] << " объект(ов)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("Значение не должно быть меньше либо равно 0!");
					IInstrumental* obj = val.getElement(0, indexObj - 1);
					cout << "Выбранный елемент:" << endl;
					((AssemblerInstrumental*)obj)->print();
					cout << "Выберте необходимое действие:";
					cout << "1 - Изменение элемента";
					cout << "2 - Удаление элемента";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "Выберете поле для изменения:" << endl;
						cout << "1 - Название" << endl;
						cout << "2 - Версия" << endl;
						cout << "3 - Особенности" << endl;
						cout << "4 - Описание" << endl;
						cout << "5 - Наличие портативной версии" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getName() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setName(tmp);
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getVersion() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setVersion(tmp);
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getFeatures() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setFeatures(tmp);
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getFeatures() << ".";
							break;
						}
						case 4: {
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getDescription() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setDescription(tmp);
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getDescription() << ".";
							break;
						}
						case 5: {
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getPortableVersion() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((AssemblerInstrumental*)obj)->setPortableVersion(tmp);
							cout << "Текущее значение поля: " << ((AssemblerInstrumental*)obj)->getPortableVersion() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(0, indexObj - 1);
						cout << "Элемент успешно удален.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "Ошибка:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - Ввод из файла" << endl;
				cout << "2 - Создание стандартного объекта" << endl; 
				cout << "3 - Ввод всех полей с клавиатуры" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "Введите путь до файла: " << endl;
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
					cout << "Индекс элемента : " << i << endl;
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
			cout << "Выберете желаемую функцию:" << endl;
			cout << "1 - Поиск" << endl;
			cout << "2 - Сортировка" << endl;
			cout << "3 - Работа с существующим объектом" << endl;
			cout << "4 - Добавление нового объекта" << endl;
			cout << "5 - Просмотр всех элементов" << endl;
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
					cout << "Выберете индекс объета для работы. В данный момент существует " << val.columnsCount[1] << " объект(ов)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("Значение не должно быть меньше либо равно 0!");
					IInstrumental* obj = val.getElement(1, indexObj - 1);
					cout << "Выбранный елемент:" << endl;
					((Translator*)obj)->print();
					cout << "Выберте необходимое действие:";
					cout << "1 - Изменение элемента";
					cout << "2 - Удаление элемента";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "Выберете поле для изменения:" << endl;
						cout << "1 - Название" << endl;
						cout << "2 - Версия" << endl;
						cout << "3 - Вид" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "Текущее значение поля: " << ((Translator*)obj)->getName() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((Translator*)obj)->setName(tmp);
							cout << "Текущее значение поля: " << ((Translator*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "Текущее значение поля: " << ((Translator*)obj)->getVersion() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((Translator*)obj)->setVersion(tmp);
							cout << "Текущее значение поля: " << ((Translator*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "Текущее значение поля: " << ((Translator*)obj)->getTypeSystem() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((Translator*)obj)->setTypeSystem(tmp);
							cout << "Текущее значение поля: " << ((Translator*)obj)->getTypeSystem() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(1, indexObj - 1);
						cout << "Элемент успешно удален.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "Ошибка:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - Ввод из файла" << endl;
				cout << "2 - Создание стандартного объекта" << endl;
				cout << "3 - Ввод всех полей с клавиатуры" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "Введите путь до файла: " << endl;
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
					cout << "Индекс элемента : " << i << endl;
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
			cout << "Выберете желаемую функцию:" << endl;
			cout << "1 - Поиск" << endl;
			cout << "2 - Сортировка" << endl;
			cout << "3 - Работа с существующим объектом" << endl;
			cout << "4 - Добавление нового объекта" << endl;
			cout << "5 - Просмотр всех элементов" << endl;
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
					cout << "Выберете индекс объета для работы. В данный момент существует " << val.columnsCount[2] << " объект(ов)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("Значение не должно быть меньше либо равно 0!");
					IInstrumental* obj = val.getElement(2, indexObj - 1);
					cout << "Выбранный елемент:" << endl;
					((TextEditors*)obj)->print();
					cout << "Выберте необходимое действие:";
					cout << "1 - Изменение элемента";
					cout << "2 - Удаление элемента";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "Выберете поле для изменения:" << endl;
						cout << "1 - Название" << endl;
						cout << "2 - Версия" << endl;
						cout << "3 - Вид" << endl;
						cout << "4 - Цена" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getName() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((TextEditors*)obj)->setName(tmp);
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getVersion() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((TextEditors*)obj)->setVersion(tmp);
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getTypeSystem() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((TextEditors*)obj)->setTypeSystem(tmp);
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getTypeSystem() << ".";
							break;
						}
						case 4: {
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getCost() << ". Введите новое значение: ";
							float tmp;
							cin >> tmp;
							((TextEditors*)obj)->setCost(tmp);
							cout << "Текущее значение поля: " << ((TextEditors*)obj)->getCost() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(2, indexObj - 1);
						cout << "Элемент успешно удален.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "Ошибка:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - Ввод из файла" << endl;
				cout << "2 - Создание стандартного объекта" << endl;
				cout << "3 - Ввод всех полей с клавиатуры" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "Введите путь до файла: " << endl;
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
					cout << "Индекс элемента : " << i << endl;
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
			cout << "Выберете желаемую функцию:" << endl;
			cout << "1 - Поиск" << endl;
			cout << "2 - Сортировка" << endl;
			cout << "3 - Работа с существующим объектом" << endl;
			cout << "4 - Добавление нового объекта" << endl;
			cout << "5 - Просмотр всех элементов" << endl;
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
					cout << "Выберете индекс объета для работы. В данный момент существует " << val.columnsCount[3] << " объект(ов)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("Значение не должно быть меньше либо равно 0!");
					IInstrumental* obj = val.getElement(3, indexObj - 1);
					cout << "Выбранный елемент:" << endl;
					((CharacterDebugger*)obj)->print();
					cout << "Выберте необходимое действие:";
					cout << "1 - Изменение элемента";
					cout << "2 - Удаление элемента";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "Выберете поле для изменения:" << endl;
						cout << "1 - Название" << endl;
						cout << "2 - Версия" << endl;
						cout << "3 - Тип отладчика" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "Текущее значение поля: " << ((CharacterDebugger*)obj)->getName() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((CharacterDebugger*)obj)->setName(tmp);
							cout << "Текущее значение поля: " << ((CharacterDebugger*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "Текущее значение поля: " << ((CharacterDebugger*)obj)->getVersion() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((CharacterDebugger*)obj)->setVersion(tmp);
							cout << "Текущее значение поля: " << ((CharacterDebugger*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "Текущее значение поля: " << ((CharacterDebugger*)obj)->getTypeDebugger() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((CharacterDebugger*)obj)->setTypeDebugger(tmp);
							cout << "Текущее значение поля: " << ((CharacterDebugger*)obj)->getTypeDebugger() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(3, indexObj - 1);
						cout << "Элемент успешно удален.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "Ошибка:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - Ввод из файла" << endl;
				cout << "2 - Создание стандартного объекта" << endl;
				cout << "3 - Ввод всех полей с клавиатуры" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "Введите путь до файла: " << endl;
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
					cout << "Индекс элемента : " << i << endl;
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
			cout << "Выберете желаемую функцию:" << endl;
			cout << "1 - Поиск" << endl;
			cout << "2 - Сортировка" << endl;
			cout << "3 - Работа с существующим объектом" << endl;
			cout << "4 - Добавление нового объекта" << endl;
			cout << "5 - Просмотр всех элементов" << endl;
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
					cout << "Выберете индекс объета для работы. В данный момент существует " << val.columnsCount[4] << " объект(ов)." << endl;
					int indexObj;
					cin >> indexObj;
					if (indexObj <= 0) throw InstrumentalEx::BelowZero("Значение не должно быть меньше либо равно 0!");
					IInstrumental* obj = val.getElement(4, indexObj - 1);
					cout << "Выбранный елемент:" << endl;
					((MachineDebugger*)obj)->print();
					cout << "Выберте необходимое действие:";
					cout << "1 - Изменение элемента";
					cout << "2 - Удаление элемента";
					int chosen_3;
					cin >> chosen_3;
					switch (chosen_3)
					{
					case 1: {
						cout << "Выберете поле для изменения:" << endl;
						cout << "1 - Название" << endl;
						cout << "2 - Версия" << endl;
						cout << "3 - Тип отладчика" << endl;
						cout << "4 - Дополнительные возможности" << endl;
						int chosen_4;
						cin >> chosen_4;
						switch (chosen_4)
						{
						case 1: {
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getName() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setName(tmp);
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getName() << ".";
							break;
						}
						case 2: {
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getVersion() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setVersion(tmp);
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getVersion() << ".";
							break;
						}
						case 3: {
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getTypeDebugger() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setTypeDebugger(tmp);
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getTypeDebugger() << ".";
							break;
						}
						case 4: {
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getAdditionalFunctions() << ". Введите новое значение: ";
							string strtmp;
							char* tmp;
							cin >> strtmp;
							tmp = new char[strlen(strtmp.c_str()) + 1];
							strcpy(tmp, strtmp.c_str());
							((MachineDebugger*)obj)->setAdditionalFunctions(tmp);
							cout << "Текущее значение поля: " << ((MachineDebugger*)obj)->getAdditionalFunctions() << ".";
							break;
						}
						default:
							break;
						}
						break;
					}
					case 2: {
						val.removeElement(4, indexObj - 1);
						cout << "Элемент успешно удален.";
						break;
					}
					default:
						break;
					}
				}
				catch (InstrumentalEx::BelowZero(e)) {
					cout << "Ошибка:" << e.GetError() << endl;
				}
				break;
			}
			case 4: {
				cout << "1 - Ввод из файла" << endl;
				cout << "2 - Создание стандартного объекта" << endl;
				cout << "3 - Ввод всех полей с клавиатуры" << endl;
				int chosen_3;
				cin >> chosen_3;
				switch (chosen_3)
				{
				case 1: {
					cout << "Введите путь до файла: " << endl;
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
					cout << "Индекс элемента : " << i << endl;
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