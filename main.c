#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_FunkcjaLiniowa 1
#define OPCJA_FunkcjaKwadratowa   2
#define OPCJA_WYJSCIE   0

void FunkcjaLiniowa();
void FunkcjaKwadratowa();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_FunkcjaLiniowa,  " - Funkcja Liniowa");
        printf("%d %s\n", OPCJA_FunkcjaKwadratowa,    " - Funkcja Kwadratowa");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        if(scanf("%d", &wybrana_opcja)==0)
            exit(EXIT_FAILURE);
        else
        {
            switch(wybrana_opcja) {
                case OPCJA_FunkcjaLiniowa :
                    FunkcjaLiniowa();
                    break;
                case OPCJA_FunkcjaKwadratowa:
                    FunkcjaKwadratowa();
                    break;
                case OPCJA_WYJSCIE:
                  wyjscie_z_programu = TRUE;
                   break;
                default:
                    printf("Niepoprawny kod polecenia.\n");
        }
        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void FunkcjaLiniowa() {
    /* TODO - osoba2 */

    /* TODO - właściwe obliczanie pola zrealizować poprzez dedykowaną funkcję */
    printf("%s\n" "%.2f" "%s", "\nPierwiastek wynosi : - ", "\n\n");
}

void FunkcjaKwadratowa() {
{

   float a,b, c;
   float x, wynik1, wynik2;
   float pierwiastek, delta;
printf("%s \n","Podaj a ");
if(scanf("%f",&a)==0)
{

    printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
}
if (a==0)
{
     printf("to nie jest rownanie kwadratowe\n");
        exit(EXIT_FAILURE);
}
printf("%s \n","Podaj b ");
if(scanf("%f",&b)==0)
{

    printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
}
printf("%s \n","Podaj c ");
if(scanf("%f",&c)==0)
{

    printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
}
delta =(b*b)-(4*a*c);
pierwiastek= sqrt(delta);

if (delta < 0)
{
printf("%s","Rownanie sprzeczne\n");
printf(" %s %f","delta= ", delta );
}
if (delta == 0)
{
x=-b/(2*a);
printf("%s %f","X wynosi",x);
}
if (delta > 0)
{
wynik1= (-b+pierwiastek)/(2*a);
printf("X1 wynosi ");
printf("%f", wynik1);
wynik2= (-b-pierwiastek)/(2*a);
printf("\nX2 wynosi ");
printf("%f %s", wynik2, "\n\n");

}
}

}
