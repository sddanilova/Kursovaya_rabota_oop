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
class Sortirovka {
public:
	Sortirovka();
	~Sortirovka();
	void sortAssemblerInstrumental(AssemblerInstrumental** ValStek, int ValSize);
	void sortTranslator(Translator** ValStek, int ValSize);
	void sortTextEditors(TextEditors** ValStek, int ValSize);
	void sortCharacterDebugger(CharacterDebugger** ValStek, int ValSize);
	void sortMachineDebugger(MachineDebugger** ValStek, int ValSize);
};