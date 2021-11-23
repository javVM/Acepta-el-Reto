#include<iostream>
using namespace std;
//Javier Verde Marin
const int MAX_DECIMOS = 10000;

//Pre: (0 <= N <= longitud(v))
int resuelveCaso(const int v[], const int N) {
	int ret = 0;
	int i = 0;
    //I: (0<=i<=N) ^ (ret = # k : 0 <= k < i : v[k] % 2 = 0)
	while (i < N) {
		if ((v[i] % 2) == 0) {
			ret++;
		}
		i++;
	}

	return ret;

}
//Pos: ret = # i : 0 <= i < N : v[i] % 2 = 0

int main() {
	int decimos[MAX_DECIMOS];
	int numCasos;
	int i = 0;
	cin >> numCasos;

	while (i < numCasos) {
		int numDecimos;
		cin >> numDecimos;
		if (numDecimos <= 10000) {
			for (int j = 0; j < numDecimos; j++) {
				cin >> decimos[j];
			}

			cout << resuelveCaso(decimos, numDecimos) << endl;
		}
		i++;
	}

	return 0;
}
