#include <iostream>
#include <string>  // Potrzebne do u�ywania typu string

int main() {
    // Deklaracja zmiennych
    std::string imie;
    int wiek;

    // Pobranie danych od u�ytkownika
    std::cout << "Podaj swoje imi�: ";
    std::cin >> imie;
    std::cout << "Podaj sw�j wiek: ";
    std::cin >> wiek;

    // Wy�wietlenie wiadomo�ci powitalnej
    std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << std::endl;

    return 0;
