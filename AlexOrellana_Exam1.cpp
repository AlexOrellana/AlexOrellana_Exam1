#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int** crear();
void movimiento(int** &arreglo, int size,int juga,int c1,int c2,int c3,int c4);
void borrar(int** &arreglo, int size);
void imprimir(int**);
int validar(int**,int &v);

int main(int argc,char* argv[]){
	int v=1,c1,c2,c3,c4,juga;
	int** arreglo = crear();
	cout << "El tablero es 7x7 pero usted debe ingresar las cordenadas del 0 al 6 ingresando primero la fila despues la columna debera hacer esto 2 veces la primera para elejir la pieza que desea mover la segunda para decidir donde moverlo" << endl;

	while(v!=0){
		imprimir(arreglo);
		juga=1;
		cout << "jugador 1 (usted es los -> '+') es su turno" << endl;
		cout << "===pieza que desea mover===" << endl;
		cout << "Ingrese la fila: ";
		cin >> c1;
		cout << endl;
		cout << "Ingrese la columna: ";
		cin >> c2;
		cout << endl;
		cout << "===hacia donde desea mover===" << endl;
		cout << "Ingrese la fila: ";
		cin >> c3;
		cout << endl;
		cout << "Ingrese la columna: ";
		cin >> c4;
		cout << endl;
		movimiento(arreglo,7,juga,c1,c2,c3,c4);
		
		imprimir(arreglo);
		juga=2;
		cout << "jugador 2 (usted es los -> '#') es su turno" << endl;
		cout << "===pieza que desea mover===" << endl;
		cout << "Ingrese la fila: ";
		cin >> c1;
		cout << endl;
		cout << "Ingrese la columna: ";
		cin >> c2;
		cout << endl;
		cout << "===hacia donde desea mover===" << endl;
		cout << "Ingrese la fila: ";
		cin >> c3;
		cout << endl;
		cout << "Ingrese la columna: ";
		cin >> c4;
		cout << endl;
		movimiento(arreglo,7,juga,c1,c2,c3,c4);
		v=validar(arreglo,v);
	}
	
	borrar(arreglo, 7);

	return 0;
}

int validar(int** x,int &v){
	int size = 7,mas,numeral,zero;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if(x[i][j] == 0){
				zero++;
			}else if(x[i][j] == 1){
				mas++;
			}else if(x[i][j] == 2){
				numeral++;
			} 
		}
	}	

	if(zero==0){
		if(mas>numeral){
			cout << "gano numero 1";		
		}else{
			cout << "gano numero 2";
		}
	}
	return zero;
}

void movimiento(int** &arreglo, int size,int juga,int c1,int c2,int c3,int c4){
	if(juga==1){
		if(arreglo[c1][c2]==1 && arreglo[c3][c4]==0){
			if(c3-c1==1 && c2==c4){
				
				arreglo[c3][c4]=1;
				if(arreglo[c3+1][c4]==2){
					arreglo[c3+1][c4]=1;
				}
				if(arreglo[c3-1][c4]==2){
					arreglo[c3-1][c4]=1;
				}
				if(arreglo[c3][c4+1]==2){
					arreglo[c3][c4+1]=1;
				}
				if(arreglo[c3][c4-1]==2){
					arreglo[c3][c4-1]=1;
				}
				if(arreglo[c3+1][c4+1]==2){
					arreglo[c3+1][c4+1]=1;
				}
				if(arreglo[c3+1][c4-1]==2){
					arreglo[c3+1][c4-1]=1;
				}
				if(arreglo[c3-1][c4+1]==2){
					arreglo[c3-1][c4+1]=1;
				}
				if(arreglo[c3-1][c4-1]==2){
					arreglo[c3-1][c4-1]=1;
				}	
			}else if(c3-c1==2 && c2==c4){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=1;

			}else if(c1-c3==-1 && c2==c4){
				
				arreglo[c3][c4]=1;
				if(arreglo[c3+1][c4]==2){
					arreglo[c3+1][c4]=1;
				}
				if(arreglo[c3-1][c4]==2){
					arreglo[c3-1][c4]=1;
				}
				if(arreglo[c3][c4+1]==2){
					arreglo[c3][c4+1]=1;
				}
				if(arreglo[c3][c4-1]==2){
					arreglo[c3][c4-1]=1;
				}
				if(arreglo[c3+1][c4+1]==2){
					arreglo[c3+1][c4+1]=1;
				}
				if(arreglo[c3+1][c4-1]==2){
					arreglo[c3+1][c4-1]=1;
				}
				if(arreglo[c3-1][c4+1]==2){
					arreglo[c3-1][c4+1]=1;
				}
				if(arreglo[c3-1][c4-1]==2){
					arreglo[c3-1][c4-1]=1;
				}
			}else if(c1-c3==-2 && c2==c4){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=1;

			}else if(c1==c3 && c4-c2==1){
				
				arreglo[c3][c4]=1;
				if(arreglo[c3+1][c4]==2){
					arreglo[c3+1][c4]=1;
				}
				if(arreglo[c3-1][c4]==2){
					arreglo[c3-1][c4]=1;
				}
				if(arreglo[c3][c4+1]==2){
					arreglo[c3][c4+1]=1;
				}
				if(arreglo[c3][c4-1]==2){
					arreglo[c3][c4-1]=1;
				}
				if(arreglo[c3+1][c4+1]==2){
					arreglo[c3+1][c4+1]=1;
				}
				if(arreglo[c3+1][c4-1]==2){
					arreglo[c3+1][c4-1]=1;
				}
				if(arreglo[c3-1][c4+1]==2){
					arreglo[c3-1][c4+1]=1;
				}
				if(arreglo[c3-1][c4-1]==2){
					arreglo[c3-1][c4-1]=1;
				}
			}else if(c1==c3 && c4-c2==2){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=1;

			}else if(c1==c3 && c2-c4==-1){
				
				arreglo[c3][c4]=1;
				if(arreglo[c3+1][c4]==2){
					arreglo[c3+1][c4]=1;
				}
				if(arreglo[c3-1][c4]==2){
					arreglo[c3-1][c4]=1;
				}
				if(arreglo[c3][c4+1]==2){
					arreglo[c3][c4+1]=1;
				}
				if(arreglo[c3][c4-1]==2){
					arreglo[c3][c4-1]=1;
				}
				if(arreglo[c3+1][c4+1]==2){
					arreglo[c3+1][c4+1]=1;
				}
				if(arreglo[c3+1][c4-1]==2){
					arreglo[c3+1][c4-1]=1;
				}
				if(arreglo[c3-1][c4+1]==2){
					arreglo[c3-1][c4+1]=1;
				}
				if(arreglo[c3-1][c4-1]==2){
					arreglo[c3-1][c4-1]=1;
				}
			}else if(c1==c3 && c2-c4==-2){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=1;

			}else if(c3-c1==1 && c4-c2==1){
				
				arreglo[c3][c4]=1;
				if(arreglo[c3+1][c4]==2){
					arreglo[c3+1][c4]=1;
				}
				if(arreglo[c3-1][c4]==2){
					arreglo[c3-1][c4]=1;
				}
				if(arreglo[c3][c4+1]==2){
					arreglo[c3][c4+1]=1;
				}
				if(arreglo[c3][c4-1]==2){
					arreglo[c3][c4-1]=1;
				}
				if(arreglo[c3+1][c4+1]==2){
					arreglo[c3+1][c4+1]=1;
				}
				if(arreglo[c3+1][c4-1]==2){
					arreglo[c3+1][c4-1]=1;
				}
				if(arreglo[c3-1][c4+1]==2){
					arreglo[c3-1][c4+1]=1;
				}
				if(arreglo[c3-1][c4-1]==2){
					arreglo[c3-1][c4-1]=1;
				}
			}else if(c3-c1==2 && c4-c2==2){	
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=1;
			}else if(c1-c3==-1 && c2-c4==-1){
				
				arreglo[c3][c4]=1;
				if(arreglo[c3+1][c4]==2){
					arreglo[c3+1][c4]=1;
				}
				if(arreglo[c3-1][c4]==2){
					arreglo[c3-1][c4]=1;
				}
				if(arreglo[c3][c4+1]==2){
					arreglo[c3][c4+1]=1;
				}
				if(arreglo[c3][c4-1]==2){
					arreglo[c3][c4-1]=1;
				}
				if(arreglo[c3+1][c4+1]==2){
					arreglo[c3+1][c4+1]=1;
				}
				if(arreglo[c3+1][c4-1]==2){
					arreglo[c3+1][c4-1]=1;
				}
				if(arreglo[c3-1][c4+1]==2){
					arreglo[c3-1][c4+1]=1;
				}
				if(arreglo[c3-1][c4-1]==2){
					arreglo[c3-1][c4-1]=1;
				}
			}else if(c1-c3==-2 && c2-c4==-2){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=1;
			}else{
				cout << "movimiemto invalido" << endl;
			}
		}
	}else if(juga==2){
		if(arreglo[c1][c2]==2 && arreglo[c3][c4]==0){
			if(c3-c1==1 && c2==c4){
				
				arreglo[c3][c4]=2;
				if(arreglo[c3+1][c4]==1){
					arreglo[c3+1][c4]=2;
				}
				if(arreglo[c3-1][c4]==1){
					arreglo[c3-1][c4]=2;
				}
				if(arreglo[c3][c4+1]==1){
					arreglo[c3][c4+1]=2;
				}
				if(arreglo[c3][c4-1]==1){
					arreglo[c3][c4-1]=2;
				}
				if(arreglo[c3+1][c4+1]==1){
					arreglo[c3+1][c4+1]=2;
				}
				if(arreglo[c3+1][c4-1]==1){
					arreglo[c3+1][c4-1]=2;
				}
				if(arreglo[c3-1][c4+1]==1){
					arreglo[c3-1][c4+1]=2;
				}
				if(arreglo[c3-1][c4-1]==1){
					arreglo[c3-1][c4-1]=2;
				}	
			}else if(c3-c1==2 && c2==c4){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=2;

			}else if(c1-c3==-1 && c2==c4){
				
				arreglo[c3][c4]=2;
				if(arreglo[c3+1][c4]==1){
					arreglo[c3+1][c4]=2;
				}
				if(arreglo[c3-1][c4]==1){
					arreglo[c3-1][c4]=2;
				}
				if(arreglo[c3][c4+1]==1){
					arreglo[c3][c4+1]=2;
				}
				if(arreglo[c3][c4-1]==1){
					arreglo[c3][c4-1]=2;
				}
				if(arreglo[c3+1][c4+1]==1){
					arreglo[c3+1][c4+1]=2;
				}
				if(arreglo[c3+1][c4-1]==1){
					arreglo[c3+1][c4-1]=2;
				}
				if(arreglo[c3-1][c4+1]==1){
					arreglo[c3-1][c4+1]=2;
				}
				if(arreglo[c3-1][c4-1]==1){
					arreglo[c3-1][c4-1]=2;
				}
			}else if(c1-c3==-2 && c2==c4){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=2;

			}else if(c1==c3 && c4-c2==1){
				
				arreglo[c3][c4]=2;
				if(arreglo[c3+1][c4]==1){
					arreglo[c3+1][c4]=2;
				}
				if(arreglo[c3-1][c4]==1){
					arreglo[c3-1][c4]=2;
				}
				if(arreglo[c3][c4+1]==1){
					arreglo[c3][c4+1]=2;
				}
				if(arreglo[c3][c4-1]==1){
					arreglo[c3][c4-1]=2;
				}
				if(arreglo[c3+1][c4+1]==1){
					arreglo[c3+1][c4+1]=2;
				}
				if(arreglo[c3+1][c4-1]==1){
					arreglo[c3+1][c4-1]=2;
				}
				if(arreglo[c3-1][c4+1]==1){
					arreglo[c3-1][c4+1]=2;
				}
				if(arreglo[c3-1][c4-1]==1){
					arreglo[c3-1][c4-1]=2;
				}
			}else if(c1==c3 && c4-c2==2){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=2;

			}else if(c1==c3 && c2-c4==-1){
				
				arreglo[c3][c4]=2;
				if(arreglo[c3+1][c4]==1){
					arreglo[c3+1][c4]=2;
				}
				if(arreglo[c3-1][c4]==1){
					arreglo[c3-1][c4]=2;
				}
				if(arreglo[c3][c4+1]==1){
					arreglo[c3][c4+1]=2;
				}
				if(arreglo[c3][c4-1]==1){
					arreglo[c3][c4-1]=2;
				}
				if(arreglo[c3+1][c4+1]==1){
					arreglo[c3+1][c4+1]=2;
				}
				if(arreglo[c3+1][c4-1]==1){
					arreglo[c3+1][c4-1]=2;
				}
				if(arreglo[c3-1][c4+1]==1){
					arreglo[c3-1][c4+1]=2;
				}
				if(arreglo[c3-1][c4-1]==1){
					arreglo[c3-1][c4-1]=2;
				}
			}else if(c1==c3 && c2-c4==-2){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=2;

			}else if(c3-c1==1 && c4-c2==1){
				
				arreglo[c3][c4]=2;
				if(arreglo[c3+1][c4]==1){
					arreglo[c3+1][c4]=2;
				}
				if(arreglo[c3-1][c4]==1){
					arreglo[c3-1][c4]=2;
				}
				if(arreglo[c3][c4+1]==1){
					arreglo[c3][c4+1]=2;
				}
				if(arreglo[c3][c4-1]==1){
					arreglo[c3][c4-1]=2;
				}
				if(arreglo[c3+1][c4+1]==1){
					arreglo[c3+1][c4+1]=2;
				}
				if(arreglo[c3+1][c4-1]==1){
					arreglo[c3+1][c4-1]=2;
				}
				if(arreglo[c3-1][c4+1]==1){
					arreglo[c3-1][c4+1]=2;
				}
				if(arreglo[c3-1][c4-1]==1){
					arreglo[c3-1][c4-1]=2;
				}
			}else if(c3-c1==2 && c4-c2==2){	
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=2;
			}else if(c1-c3==-1 && c2-c4==-1){
				
				arreglo[c3][c4]=2;
				if(arreglo[c3+1][c4]==1){
					arreglo[c3+1][c4]=2;
				}
				if(arreglo[c3-1][c4]==1){
					arreglo[c3-1][c4]=2;
				}
				if(arreglo[c3][c4+1]==1){
					arreglo[c3][c4+1]=2;
				}
				if(arreglo[c3][c4-1]==1){
					arreglo[c3][c4-1]=2;
				}
				if(arreglo[c3+1][c4+1]==1){
					arreglo[c3+1][c4+1]=2;
				}
				if(arreglo[c3+1][c4-1]==1){
					arreglo[c3+1][c4-1]=2;
				}
				if(arreglo[c3-1][c4+1]==1){
					arreglo[c3-1][c4+1]=2;
				}
				if(arreglo[c3-1][c4-1]==1){
					arreglo[c3-1][c4-1]=2;
				}
			}else if(c1-c3==-2 && c2-c4==-2){
				arreglo[c1][c2]=0;
				arreglo[c3][c4]=2;
			}else{
				cout << "movimiemto invalido" << endl;
			}
		}
	}
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
				if(i==0 && j==3){
					arreglo[i][j] = 1;
				}else if(i==6 && j==3){
					arreglo[i][j] = 1;
				}else if(i==3 && j==0){
					arreglo[i][j] = 2;
				}else if(i==3 && j==6){
					arreglo[i][j] = 2;
				}else{
					arreglo[i][j] = 0;
				}
			}
	}
	return arreglo;
}

void imprimir(int** x){
	cout << endl;
	cout << " 0  1  2  3  4  5  6  " << endl;
	int size = 7;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if(x[i][j] == 0){
				cout << " o ";
			}else if(x[i][j] == 1){
				cout << " + ";
			}else if(x[i][j] == 2){
				cout << " # ";
			} 
		}
		if(i==0){
			cout << " 0" << endl;
		}else if(i==1){
			cout << " 1" << endl;
		}else if(i==2){
			cout << " 2" << endl;
		}else if(i==3){
			cout << " 3" << endl;
		}else if(i==4){
			cout << " 4" << endl;
		}else if(i==5){
			cout << " 5" << endl;
		}else if(i==6){
			cout << " 6" << endl;
		}else if(i==7){
			cout << " 7" << endl;
		}
	}
	cout << endl;
}

