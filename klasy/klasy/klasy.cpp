// klasy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <Windows.h>
#include "Prostokat.h"
#include "Trapezu.h"
#include "Kolo.h"
#include "Trojkat.h"
#include "Szescian.h"


int main()
{
    bool koniec = false;
    char restart;
    do
    {
        system("cls");
        std::cout << "'a' Prostokat\n";
        std::cout << "'b' Trapez\n";
        std::cout << "'c' Trojkat\n";
        std::cout << "'d' Kolo\n";
        std::cout << "'e' Szescian\n\n";

        std::cout << "Wybierz litere odpowiadajaca figurze: \n";
        char figura1;
        std::cin >> figura1;
        if (figura1 == 'a')
        {
            int a, b;
            std::cout << "Pole prostokata\n\n";
            std::cout << "Podaj bok a = ";
            std::cin >> a;
            std::cout << "Podaj bok b = ";
            std::cin >> b;
            Prostokat pro = Prostokat(a, b);
            std::cout << pro.obliczeniepola();
        }
        else if (figura1 == 'b')
        {
            int a, b, h;
            std::cout << "Pole trapezu\n\n";
            std::cout << "Podaj bok a = ";
            std::cin >> a;
            std::cout << "Podaj bok b = ";
            std::cin >> b;
            std::cout << "Podaj wysokosc h = ";
            std::cin >> h;
            Trapezu tra = Trapezu(a, b, h);
            std::cout << tra.obliczeniepola();
        }
        else if (figura1 == 'c')
        {
            int a, h;
            std::cout << "Pole trojkata\n\n";
            std::cout << "Podaj bok a = ";
            std::cin >> a;
            std::cout << "Podaj wysokosc h = ";
            std::cin >> h;
            Trojkat tro = Trojkat(a, h);
            std::cout << tro.obliczeniepola();
        }
        else if (figura1 == 'd')
        {
            int r;
            std::cout << "Pole kola\n\n";
            std::cout << "Podaj promien r = ";
            std::cin >> r;
            Kolo kol = Kolo(r);
            std::cout << kol.obliczeniepola();
        }
        else if (figura1 == 'e')
        {
            int a;
            std::cout << "Pole szescianu\n\n";
            std::cout << "Podaj bok a = ";
            std::cin >> a;
            Szescian sze = Szescian(a);
            std::cout << sze.obliczeniepola();
        }
        std::cout << "\nCzy chcesz rozpoczac ponownie? y/n\n";
        std::cin >> restart;
        if (restart == 'n')
        {
            koniec = true;
        }
    } while (!koniec);
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
