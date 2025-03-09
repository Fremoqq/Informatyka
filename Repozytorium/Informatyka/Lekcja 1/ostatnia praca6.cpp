#include <iostream>

int main() {
    int pierwszaLiczba, drugaLiczba;

    // Wczytanie liczb od użytkownika
    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> pierwszaLiczba;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> drugaLiczba;

    // Obliczenie sumy
    int suma = pierwszaLiczba + drugaLiczba;

    // Wyświetlenie wyniku
    std::cout << "Suma: " << suma << std::endl;

    // Sprawdzenie, czy suma jest parzysta czy nieparzysta
    if (suma % 2 == 0) {
        std::cout << "Suma jest liczbą parzystą." << std::endl;
    } else {
        std::cout << "Suma jest liczbą nieparzystą." << std::endl;
    }

    return 0; // Zakończenie programu