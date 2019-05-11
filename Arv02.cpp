#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main(){
	cout<<"Gerando numero aleatorio:\n";
	
	srand(time(0));//retorna um numero diferentes em segundos
	cout << rand() << endl;  

	
}
