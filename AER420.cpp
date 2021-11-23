#include<iostream>
#include<string>
using namespace std;
//Javier Verde Marin

const int MAX = 250000;

//(0<=N<=longitud(v) ^ (k > 0) ^ (P.T m : 0 <= m <= N: v[m] != 0)
int segmentos(int v[], int N, int k) {
	int ret = 0;
	int a = 0;
	int b = 0;
    int sumaVentana = 0;

	while (b < N || (sumaVentana > k)) {
		if (sumaVentana < k) {
			sumaVentana += v[b];
			b++;
		}
		else {
			sumaVentana -= v[a];
			a++;
		}

		if (sumaVentana == k) {
			ret++;
		}

	}


	return ret;
}
//Pos: ret = # i,j : 0<=i<j<=N : suma(v,i,j) = k donde suma(v,a,b) = sum i : a <= i <= b : v[i]




int main() {
	int numCasos;
	int v[MAX];
	int k;
	string num;
	
	cin >> numCasos;
	while (numCasos > 0) {
		cin >> k;
		cin >> num;
		for (unsigned int i = 0; i < num.size(); i++) {
			v[i] = num[i] - '0';
		}
		numCasos--;

		cout << segmentos(v, num.size(), k) << endl;
	}

	return 0;
}
