using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, K, i, j, k, c, p;
	float sr;
	p = 0;
	k = 0;
	K = 0;
	cout << "Введите количество строк:  ";
	cin >> M;
	cout << "Введите количество столбцов: ";
	cin >> N;
	int** A = new int* [M];
	for (c = 0; c < M; c++)
		A[c] = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cin >> A[i][j];
		};
	};
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if ((A[j][i] % 10 == 1) || (A[j][i] % 10 == 3) || (A[j][i] % 10 == 5) || (A[j][i] % 10 == 7) || (A[j][i] % 10 == 9)) {
				k++;
			};
		};
		if (k == M) {
			if ((K >= 1) & (K < i + 1)) {
				K = K;
			}
			else {
				K = i + 1;
			};
		}
		else { p++; };
	};
	if (p == M) {
		cout << 0;
	}
	else { cout << "В " << K << " столбце все элементы нечетные"; };
}