#pragma once
#include "TextEditors.h";
#include "CharacterDebugger.h";
#include "MachineDebugger.h";
#include "Translator.h";
#include "AssemblerInstrumental.h";
class TextEditors;
class CharacterDebugger;
class MachineDebugger;
class Translator;
class AssemblerInstrumental;
using namespace std;
class Search {
public:
	Search();
	~Search();
	void searchAssemblerInstrumental(AssemblerInstrumental** ValStek, int ValSize);
	void searchTranslator(Translator** ValStek, int ValSize);
	void searchTextEditors(TextEditors** ValStek, int ValSize);
	void searchCharacterDebugger(CharacterDebugger** ValStek, int ValSize);
	void searchMachineDebugger(MachineDebugger** ValStek, int ValSize);
};
