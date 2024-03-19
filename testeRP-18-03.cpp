#include <iostream>


int main () {
	int indice = 13, soma = 0, k = 0;
	
	while (k < indice ) {
		k = k +1; 
		soma = soma + k;
	} 
	
	std::cout << soma << std::endl;
	
	return 0;
}
