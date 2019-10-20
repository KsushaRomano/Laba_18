using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, K, i, j, max, l, c, pr;
	max = 0;
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
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			K = i;
			pr *= A[j][i];
		};
		if (pr > max) {
			max = pr;
			l = K;
		};
		pr = 1;
	};
	cout << "Номер столбца, в котором наибольшое произведение элементов: " << l + 1 << endl;
	cout << "Произведение элементов столбца K равно: " << max;
}