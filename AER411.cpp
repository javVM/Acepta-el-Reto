#include<iostream>
using namespace std;

int main() {
	long long red;
	long long elefantes = 0;
	long long peso;

	while (true) {
		elefantes = 0;
		cin >> red;
		if (red == 0) { break; }
			while (true) {
				cin >> peso;
				if (peso == 0) { break; }
				red = red - peso;
				if (red >= 0) {
					elefantes++;
				}	
			}
		
		cout << elefantes<< endl;
	}
	return 0;
}
