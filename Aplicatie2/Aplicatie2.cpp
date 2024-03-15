#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Cartea
{
    char autor[20];
    char editura[20];
    char an_aparitie[20];
    char vechime[20];
};

class Carte
{
private:
    char autor[20];
    char editura[20];
    char an_aparitie[20];
    char vechime[20];

public:
    Carte(char* aut1, char* edit1, char* an1, char* vechime1)
    {
        strcpy_s(autor, 20, aut1);
        strcpy_s(editura, 20, edit1);
        strcpy_s(an_aparitie, 20, an1);
        strcpy_s(vechime, 20, vechime1);
    }

    Carte() {}
    char* arata_autor() { return this->autor; }
    char* arata_editura() { return this->editura; }
    char* arata_an_aparitie() { return this->an_aparitie; }
    char* arata_vechime() { return this->vechime; }
};

int main()
{
    cout << "Introduceti numarul de carti: ";
    int nr_carti;
    cin >> nr_carti;

    Carte* carte = new Carte[nr_carti];

    for (int i = 0; i < nr_carti; i++)
    {
        Console::WriteLine("Introduceti numele autorului {0}: ", i + 1);
        char autor[20];
        cin >> autor;

        Console::WriteLine("Introduceti editura {0}: ", i + 1);
        char editura[20];
        cin >> editura;

        Console::WriteLine("Introduceti anul aparitiei {0}: ", i + 1);
        char an_aparitie[20];
        cin >> an_aparitie;

        Console::WriteLine("Introduceti vechimea {0}: ", i + 1);
        char vechime[20];
        cin >> vechime;

        carte[i] = Carte(autor, editura, an_aparitie, vechime);
    }

    Console::WriteLine("Afisam cartile: ");
    for (int i = 0; i < nr_carti; i++)
    {
        cout << carte[i].arata_autor() << "\t" << carte[i].arata_editura() << "\t" << carte[i].arata_an_aparitie() << "\t" << carte[i].arata_vechime() << endl;
    }
    Console::ReadKey();
}
