#include <iostream>
using namespace std;

int main() {
int wynik;
	
	cout << "Podaj liczbe: ";
    cin >> wynik;
    


	// Operator AND (&&): Sprawdzanie, czy liczba jest w zakresie 10-20
	if ((wynik >= 0) && (wynik <= 49)) {
	    cout << "Liczba znajduje sie w zakresie 0-49." << endl;
	} 
	else if ((wynik >= 50) && (wynik <= 69)) {
	    cout << "Liczba znajduje sie w zakresie 50-69." << endl;
	}
	else if ((wynik >= 70) && (wynik <= 84)) {
    cout << "Liczba znajduje sie w zakresie 70-84." << endl;
	} 
		else if ((wynik >= 85) && (wynik <= 99)) {
    cout << "Liczba znajduje sie w zakresie 70-84." << endl;
	}	
	else if (wynik ==100) {
    cout << "Liczba znajduje sie w zakresie 100-100." << endl;
	}


}
		
	
	
	
	
	

	
	
	
	
	
	
