#include <iostream>
#include <string>  // Potrzebne do u¿ywania typu string

int main() {
    // Deklaracja zmiennych
    std::string imie;
    int wiek;

    // Pobranie danych od u¿ytkownika
    std::cout << "Podaj swoje imiê: ";
    std::cin >> imie;
    std::cout << "Podaj swój wiek: ";
    std::cin >> wiek;

    // Wyœwietlenie wiadomoœci powitalnej
    std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << std::endl;

    return 0;
