#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI=3.1415926535;
    const char Przedmiot[]="programowanie";
    const unsigned int Rok=-1;
    /*-------------*/
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(int));
    return 0;
}

/*
Napisz program, ktory deklaruje:

a) stala zmiennoprzecinkowa PI = 3.1415926535
b) staly lancuch znakow Przedmiot, ktory zawiera napis "programowanie"
c) zmienna Rok, ktora jest liczba calkowita dodatnia, sprobuj ustawic
ja na -1, a nastepnie wyswietl jej zawartosc
d) wyswietl ilosc bajtow, ktora jest potrzebna do zadeklarowania
zmiennej typu char, short, int oraz long.
*/
