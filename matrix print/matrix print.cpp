// matrix print.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int row = 6, col = 6;
	int matrix[row][col];
	for (int i= 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			//matrix[i][j] = matrix[i][j] + 1;
			matrix[i][j] = rand() % row;
			cout << matrix[i][j];
		}

		cout << endl;
	}

    return 0;
}

