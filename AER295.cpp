#include<iostream>
using namespace std;
//Javier Verde Marín
//b =2;
//a = 1;
//k = 0
//Complejidad =>  a = 1 =  b^k =  2^0 = 1
//por tanto T(n) = (n^k * log n) = log(n)

long long int resuelveCaso(long long int x, long long int n) {
	if (n == 0) return 1;
	else {
		long long int  particion = resuelveCaso(x, n / 2);

		if (n % 2 == 0) { return (particion * particion) % 31543; }
		else {
			return (particion * particion * x) % 31543;
		}
	}
}

int main() {
	long long int x;
	long long int n;

	while (true) {
		cin >> x;
		cin >> n;

		if (x == 0 && n == 0) { break; }
		
		cout << resuelveCaso(x, n) % 31543<< endl;

	}

	return 0;
}
