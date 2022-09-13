#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
	
	int main()
	{
	array < int, 5 > n; // n es un arreglo de 5 valores int
	
	// inicializa los elementos del arreglo n con 0
	 for (size_t i = 0; i < n.size(); ++i)
	n[i]= 0; // establece el elemento en la ubicación i a 0
	
	cout<< "Elemento" << setw( 13 ) << "Valor" << endl;
	
	// imprime el valor de cada elemento del arreglo
	 for (size_t j = 0; j < n.size(); ++j) 
	 cout << setw(7) << j << setw( 13 ) << n[j] << endl;
	 
  } // fin de main
