#include <stdio.h>
#include <stdlib.h>

enum PORA_ROKU {WIOSNA, LATO, JESIEN, ZIMA};

int main()
{
    enum PORA_ROKU pora_roku;

    int miesiac=0;
    printf("Podaj miesiac: \n");
    scanf("%d",&miesiac);

    if (miesiac==3 || miesiac==4 || miesiac==5)
    {
        pora_roku=WIOSNA;
    }
    if (miesiac==6 || miesiac==7 || miesiac==8)
    {
        pora_roku=LATO;
    }
    if (miesiac==9 || miesiac==10 || miesiac==11)
    {
        pora_roku=JESIEN;
    }
    if (miesiac==12 || miesiac==1 || miesiac==2)
    {
        pora_roku=ZIMA;
    }

    if(pora_roku==ZIMA)
    {
        printf("Zima zima zima");
    }
    return 0;
}
/*
Napisz program, ktory pyta uzytkownika o numer miesiaca, a nastepnie
deklaruje zmienna PORA_ROKU, ktora ustawia na:

a) WIOSNA, jesli numer miesiaca to 3,4 lub 5
b) LATO, jesli numer miesiaca to 6,7 lub 8
c) JESIEN, jesli numer miesiaca to 9,10 lub 11
d) ZIMA, jesli numer miesiaca to 12,1 lub 2

W tym celu zadeklaruj zmienna wyliczeniowa PORA_ROKU, ktora zawiera
pola WIOSNA, LATO, JESIEN i ZIMA.

Nastepnie sprawdz, czy PORA_ROKU to ZIMA, a jesli tak, to niech
program wypisze komunikat "Zima zima zima".
*/
