using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, i, j, k, m, c;
	cout << "Введите размер квадратного массива: ";
	cin >> M;
	if ((M % 10 == 1) || (M % 10 == 1) || (M % 10 == 1) || (M % 10 == 1) || (M % 10 == 1)){
		float** A = new float* [M];
		for (c = 0; c < M; c++)
			A[c] = new float[M];
		cout << "Введите элементы массива: " << endl;
		for (i = 0; i < M; i++) {
			for (j = 0; j < M; j++) {
				cin >> A[i][j];
			};
		};
		cout << "Вывод массива змейкой: " << endl;
		for (m = 0; m < M / 2; m++) {
			for (i = m; i < M - m; i++) {
				cout << A[i][m];
				cout << endl;
			};
			for (j = m + 1; j <= M - m - 1; j++) {
				cout << A[M - m -1][j];
				cout << endl;
			};
			for (i = M - m - 2; i >= m; i--) {
				cout << A[i][M - m - 1];
				cout << endl;
			};
			for (j = M - m - 2; j >= m + 1; j--) {
				cout << A[m][j];
				cout << endl;
			};
		};
		cout << A[M / 2][M / 2];
	}
	else {
	cout << "Введен неверный размер матрицы. М должно быть нечетным";
	};
};
