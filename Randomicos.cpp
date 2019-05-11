#include<iostream>
#include<stdlib.h>//nescessario p/ usar a função rand
#include<ctime>//nescesario p/ usar função srand

using namespace std;

int main(){
	srand(time(0));//retornar um numero diferente em segundos
  	
	  cout<<"Gerando numeros aleatorios de 0 a 100\n";
		
		//gerando valores aleatoris entre zero e 100
		cout << rand() % 100;
}
