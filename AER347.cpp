#include<iostream>
using namespace std;
//Javier Verde Marin

int resuelveCaso(int n, int m) {
	if (n < 10 || m < 10) { return 0; }
	else {
		if (n >= m) { return n/m + resuelveCaso(n % m, m); }
		else { return m/n + resuelveCaso(n, m % n); }
	}
}


int main() {
	int n;
	int m;

	cin >> n;
	cin >> m;
	while (m != 0 && n != 0) {

		cout << resuelveCaso(n, m) << endl;
		

		cin >> n;
		cin >> m;
		
	}


	return 0;
}
