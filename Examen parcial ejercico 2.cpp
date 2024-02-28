// 2. Escribe un programa en C++ que solicite al usuario un número entero positivo n y muestre la suma de todos los números enteros desde 1 hasta n.

#include <iostream>
using namespace std;

int main(){
	
	int n, suma = 0;
	
	cout<<"Ingrese un numero porfavor: ";
	cin>> n;
	
	for(int i = 1; i <= n; i++){
		suma += i;
	}
	
	cout<<"---------- RESULTADOS ------------" <<endl;
	cout<<"La suma de todos los numeros entedor desde el 1 hasta " << n <<" es igual a: " << suma << endl;
	
	return 0;
		
	
}
