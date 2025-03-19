#include <iostream>

int main() {
    // Deklaracja i inicjalizacja zmiennych
    int liczba_calkowita = 10;       // Zmienna typu int
    float liczba_zmiennoprzecinkowa = 3.14f; // Zmienna typu float
    char znak = 'A';                 // Zmienna typu char
    bool wartosc_logiczna = true;    // Zmienna typu bool

    // Wyœwietlanie wartoœci zmiennych
    std::cout << "Zmienna ca³kowita: " << liczba_calkowita << std::endl;
    std::cout << "Zmienna zmiennoprzecinkowa: " << liczba_zmiennoprzecinkowa << std::endl;
    std::cout << "Zmienna znakowa: " << znak << std::endl;
    std::cout << "Zmienna logiczna: " << std::boolalpha << wartosc_logiczna << std::endl;

    return 0;
}
