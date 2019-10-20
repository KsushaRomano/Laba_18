using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, K, i, j, sum, pr, c;
	sum = 0;
	pr = 1;
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
	cout << "Введите номер строки: ";
	cin >> K;
	for (i = 0; i < N; i++) {
		sum += A[K - 1][i];
		pr *= A[K - 1][i];
	};
	cout << "Суммма элементов строки K равна: " << sum << endl;
	cout << "Произведение элементов строки K равно: " << pr;
}