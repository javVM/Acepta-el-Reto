#include<iostream>
using namespace std;
//Javier Verde Marín

bool resuelveCaso(int ini, int fin, int n, int &preguntas) {
	if (preguntas == 0) {
		return ((fin - ini) <= 1);
	}
	else {
		int k;
		cin >> k;
		preguntas--;

		if (k <= n) {
			if (k > ini) {
				return resuelveCaso(k, fin, n, preguntas);
			}
			else {
				return resuelveCaso(ini, fin, n, preguntas);
			}
		}
		else {
			if (k < fin) {
				return resuelveCaso(ini, k, n, preguntas);
			}
			else {
				return resuelveCaso(ini, fin, n, preguntas);
			}
		}
	}

}

int main() {
	int ini;
	int n;
	int fin;

	while (true) {
		cin >> ini;
		cin >> fin;
		cin >> n;
		if (ini == 0 && n == 0 && fin == 0) { break; }
		int preguntas;
		cin >> preguntas;
	    
		if (resuelveCaso(ini, fin+1, n, preguntas)) cout << "LO SABE" << "\n";
		else cout << "NO LO SABE" << "\n";
	}

	return 0;
}
