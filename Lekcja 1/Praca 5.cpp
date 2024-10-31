#include <iostream>

int main() {
    int pierwszaLiczba, drugaLiczba;

    // Wczytanie liczb od użytkownika
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> pierwszaLiczba;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> drugaLiczba;

    // Wykonanie operacji arytmetycznych
    int suma = pierwszaLiczba + drugaLiczba;
    int roznica = pierwszaLiczba - drugaLiczba;
    int iloczyn = pierwszaLiczba * drugaLiczba;
    int iloraz;
    int reszta;

    // Sprawdzenie dzielenia przez zero
    if (drugaLiczba != 0) {
        iloraz = pierwszaLiczba / drugaLiczba;  // Całkowity iloraz
        reszta = pierwszaLiczba % drugaLiczba; // Reszta z dzielenia
    } else {
        std::cout << "Blad: dzielenie przez zero!" << std::endl;
        return 1; // Zakończenie programu z błędem
    }

    // Wyświetlenie wyników
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Roznica: " << roznica << std::endl;
    std::cout << "Iloczyn: " << iloczyn << std::endl;
    std::cout << "Iloraz: " << iloraz << std::endl;
    std::cout << "Reszta z dzielenia: " << reszta << std::endl;

    return 0; // Zakonczenie programu
}
