//Crie e leia uma matriz dinâmica de inteiros cuja quantidade de linhas e 
//colunas é informada pelo usuário e depois imprima a matriz e a transposta da matriz. 

#include <iostream>

using namespace std;

void ler_matriz(int** m, int l, int c) {
	for (int i = 0; i < l; i++){
		for (int j = 0; j < c; j++){
			cout <<"infoeme os elementos [" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}

}


void imprimir(int** m, int l, int c) {
	for (int i = 0; i < l; i++)	{
		for (int j = 0; j < c; j++){
			cout<< m[i][j]<< " ";
		}
		cout << endl;
	}
	
}

void transpostaa(int** m,int**t, int l, int c) {
	for (int i = 0; i < c; i++){
		for (int j = 0; j < l; j++){
			 t[i][j] = m[j][i];
		}
	}


}



int main() {
	int l, c;
	cout << "indorme a quantidade de linhas: ";
	cin >> l;
	cout << "indorme a quantidade de colunas: ";
	cin >> c;

	int** matriz = new int* [l];
	for (int i = 0; i < l; i++)
	{
		matriz[i] = new int[c];
	}



	ler_matriz(matriz, l, c);





	imprimir(matriz, l, c);


	int** transposta = new int* [c];
	for (int i = 0; i < c; i++)
	{
		transposta[i] = new int[l];
	}




	transpostaa(matriz, transposta, l, c);

	cout << "Matriz transposta:" << endl;
	imprimir(transposta, c, l);


}