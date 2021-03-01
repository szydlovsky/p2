//repo link: https://github.com/szydlovsky/p2.git
#include<bits/stdc++.h>
using namespace std;

struct wartosci_odzywcze
{
    int bialko;
    int weglowodany;
    int tluszcze;
};

struct produkt
{
    int cena;
    string nazwa;
    wartosci_odzywcze* sklad;
};

int main()
{
    produkt* baton = new produkt;
    baton->cena = 5;
    baton->nazwa = "Batonik Czekoladowy";
    wartosci_odzywcze* wskaznik = new wartosci_odzywcze;
    wskaznik->bialko = 9;
    wskaznik->tluszcze = 15;
    wskaznik->weglowodany = 40;
    baton->sklad = wskaznik;
    
    delete wskaznik;
    delete baton;
}