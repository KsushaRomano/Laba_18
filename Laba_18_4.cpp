using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, K, i, j, k, c, pr;
	float sr;
	sr = 0;
	k = 0;
	cout << "Введите количество строк:  ";
	cin >> M;
	cout << "Введите количество столбцов: ";
	cin >> N;
	float** A = new float* [M];
	for (c = 0; c < M; c++)
		A[c] = new float[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cin >> A[i][j];
		};
	};
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			sr += A[j][i];
		};
		sr = sr / M;
		for (j = 0; j < M; j++) {
			if (A[j][i] > sr) {
				k++;
			};
		};
		cout << "В " << i + 1 << " столбце элементов, которые больше среднего арифметческого в столбце:  " << k << endl;
		sr = 0;
		k = 0;
	};
}