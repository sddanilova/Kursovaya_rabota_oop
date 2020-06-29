#pragma once
#include "IInstrumental.h"
class DinamicMatrix {
private:
	IInstrumental*** matrix; //матрица

public:
	int maxCount = 0; //кол-во столбцов
	int* columnsCount; //кол-во элементов в кажом столбце
	
	//констурктор
	DinamicMatrix(int n) { //n - количство столбцов, которое будет в матрице
		matrix = new IInstrumental**[n];
		maxCount = n;
		columnsCount = new int[n];
		for (int i = 0; i < n; i++) {
			columnsCount[i] = 0;
		}
	}
	//добавление нового элемента 
	void AddCell(int column, IInstrumental* val) {
		if (matrix[column] == NULL) {
			matrix[column] = new IInstrumental*[1]{
				val
			};
			columnsCount[column]++;
		}
		else {
			IInstrumental** arr = new IInstrumental*[++columnsCount[column]];
			for (int i = 0; i < columnsCount[column] - 1; i++) {
				arr[i] = matrix[column][i];
			}
			arr[columnsCount[column] - 1] = val;
			//delete matrix[column];
			matrix[column] = arr;
		}
	}

	//получение элемента по индексу
	IInstrumental* getElement(int column, int row){
		return matrix[column][row];
	}

	//изменение элемента по индексу
	void setElement(int column, int row, IInstrumental* val) {
		matrix[column][row] = val;
	}

	//удаление элемента со смещением
	void removeElement(int column, int row) {

		IInstrumental** arr = new IInstrumental*[--columnsCount[column]];
		for (int i = 0; i < columnsCount[column] - 1; i++) {
			if (row == i) continue;
			arr[i] = matrix[column][i];
		}
		matrix[column] = arr;
	}

	//получение столбца из матрицы
	IInstrumental** getColumn(int column) {
		return matrix[column];
	}
};