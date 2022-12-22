#include <iostream>
using namespace std;
int main() {
	// Ввести дві матриці дійсних чисел 4х5. Поміняти місцями рядки матриць, які містять  
	//максимальні елементи
	int matrix1[4][5];
	int matrix2[4][5];
	int max1 = 0;
	int max2 = 0;
	int max1_index = 0;
	int max2_index = 0;
	int temp = 0;
	cout << "Enter matrix 1: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix1[i][j];
		}
	}

	cout << "Enter matrix 2: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix2[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (matrix1[i][j] > max1) {
				max1 = matrix1[i][j];
				max1_index = i;
			}
			if (matrix2[i][j] > max2) {
				max2 = matrix2[i][j];
				max2_index = i;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		temp = matrix1[max1_index][i];
		matrix1[max1_index][i] = matrix2[max2_index][i];
		matrix2[max2_index][i] = temp;
	}

	cout << "Matrix 1: " << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Matrix 2: " << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
