#pragma once
#include "IInstrumental.h"
class DinamicMatrix {
private:
	IInstrumental*** matrix; //�������

public:
	int maxCount = 0; //���-�� ��������
	int* columnsCount; //���-�� ��������� � ����� �������
	
	//�����������
	DinamicMatrix(int n) { //n - ��������� ��������, ������� ����� � �������
		matrix = new IInstrumental**[n];
		maxCount = n;
		columnsCount = new int[n];
		for (int i = 0; i < n; i++) {
			columnsCount[i] = 0;
		}
	}
	//���������� ������ �������� 
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

	//��������� �������� �� �������
	IInstrumental* getElement(int column, int row){
		return matrix[column][row];
	}

	//��������� �������� �� �������
	void setElement(int column, int row, IInstrumental* val) {
		matrix[column][row] = val;
	}

	//�������� �������� �� ���������
	void removeElement(int column, int row) {

		IInstrumental** arr = new IInstrumental*[--columnsCount[column]];
		for (int i = 0; i < columnsCount[column] - 1; i++) {
			if (row == i) continue;
			arr[i] = matrix[column][i];
		}
		matrix[column] = arr;
	}

	//��������� ������� �� �������
	IInstrumental** getColumn(int column) {
		return matrix[column];
	}
};