#include <iostream>
using namespace std;
int main(){
int Liczba;
int Liczba2;
int wynik;
char znak;


cout << "Podaj pierwsza liczba ";
cin >> Liczba;

cout << "Podaj druga liczba ";
cin >> Liczba2;
	
 cout << "Podaj znak dzialania (+, -, *, /): ";
 
cin >> znak;
	
switch (znak) {
case '+':
  wynik=Liczba + Liczba2;
	cout << "Wynik: " << wynik << endl;
	break;
case '-':
	wynik=Liczba - Liczba2;
cout << "Wynik: " << wynik << endl;
	break;
case '/':
	wynik=Liczba / Liczba2;
    cout << "Wynik: " << wynik << endl;
	break;	
 case '*':
 	wynik=Liczba * Liczba2;
	cout << "Wynik: " << wynik << endl;
	break;

	
	
	
	
	
	

}


return 0;}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
