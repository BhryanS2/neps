#include<bits/stdc++.h>
int main(){
	int vetor[3];//Aqui ele come�a em 0,1,2. Esse vetor tem esses valores
	int matriz [3][2];//a matriz seria como dois vetores
/*o primeiro vetor � tratado como linha
	0-primeira posi��o
	1-segunda posi��o
	2-terceira posi��o
	
j� o segundo vetor trata as colunas
	0					1
	primeira coluna		segunda coluna
	sendo assim ficaria
	0	1
	0	0
	1	1
	2	2
	*/
	matriz [0] [0] = 0;//linha 0 e coluna 0 recbem 0
	matriz [0] [1] = 3;//linha 0 e coluna 1 recbem 3
	matriz [1] [0] = 2;//linha 1 e coluna 0 recbem 2
	matriz [1] [1] = 5;//linha 1 e coluna 1 recbem 5
	matriz [2] [0] = 4;//linha 2 e coluna 0 recbem 4
	matriz [2] [1] = 9;//linha 2 e coluna 1 recbem 9
	/*
	ou seja essa matriz ficaria:
	 0   1		essas s�o as colunas
  0  0	 3
  1  2	 5
  2  4	 9
  ^
  ^esses aqui s�o as linhas
	*/
	return 0;
}
