#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int** crear();
void borrar(int** &arreglo, int size);
void imprimir(int**);

int main(int argc,char* argv[]){
	
	int** arreglo = crear();
	imprimir(arreglo);
	borrar(arreglo, 7);

	return 0;
}

void borrar(int** &arreglo, int size){
	for (int i = 0; i < size; i++)
		delete[] arreglo[i];
	delete[] arreglo;
}

int** crear(){
	int size = 7;
	int** arreglo = new int*[size];
	for (int i = 0; i < size; i++){
		arreglo[i] = new int [size];
			for (int j = 0; j < size; j++){
				arreglo[i][j] = 0;
			}
	}
	return arreglo;
}

void imprimir(int** x){
	cout << endl;
	int size = 7;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if(x[i][j] == 0){
				cout << " o ";
			}else if(x[i][j] == 1){
				cout << " # ";
			}else if(x[i][j] == 2){
				cout << " + ";
			} 
		}
		cout << endl;
	}
	cout << endl;
}

