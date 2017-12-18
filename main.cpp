#include <iostream>
using namespace std;
int buscaBinaria(int arranjo[],int tamanho, int chave) {
	
	 
	int i = 0;
	int f = tamanho -1;
	int meio;
	while (i<=f) {
		meio = (i+f)/2;
		if (arranjo[meio]==chave)
			return meio;
		else {
			if (chave>arranjo[meio])
				i=meio+1;
			else
				f=meio-1;
		}
	}
	return -1;
}
int main() {
	

	int v[] = {4,6,8,9,17,18,25,42,39,65};
	int tamanho = 10;
	int p,res;
	cout << "Qual valor a ser procurado?" << endl;
	cin >> p;
	res=buscaBinaria(v,tamanho,p);
	if (res==-1)
		cout << "O valor procurado não esta na lista.";
	else
		cout << "O valor procurado encontra-se na posição " << res;
	return 0;

}
