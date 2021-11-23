//Javier Verde Marin
#include<iostream>
using namespace std;

const int MAX = 100000;


//O(n) ya que se recorre la lista de cordilleras de la montaña
//Pre: 0<=N<=longitud(cordillera)
int resuelveCaso(int & N, const int cordillera[]) {
	int i = N-2;
	int max = cordillera[N - 1];
	int res = 1;
    //(N - 2 >= i >= 0) ^ 
    //(res = # k : (N  > k > i) : cordillera[k] > maximoAnterior(cordillera,N ,k)
    // ^ (maximo = k : (N > k > i) : maximoAnterior(cordillera,N,k))
	while (i >= 0) {
		if (cordillera[i] > max) {
			res++;
			max = cordillera[i];
		}

	 i--;
	}

	return res;
}
//Pos: res = # i : (N > i >= 0) : cordillera[i] > maximoAnterior(cordillera,N,i)
//donde maximoAnterior(v, ini, fin) = max i : (ini > i > fin) : v[i];

int main() {
	int N;
	int cordillera[MAX];

	while (true) {
		if (cin >> N) {
			if (N > 0) {
				int i = 0;
				while (i < N) {
					cin >> cordillera[i];
					i++;
				}
				cout << resuelveCaso(N, cordillera) << endl;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}

	}
	return 0;
}
