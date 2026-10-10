#include <stdio.h> //printf(), scanf_s()
#include <Windows.h> //Sleep()
#include <stdlib.h> //rand(), srand()
#include <locale.h> //setlocale()
#include <time.h> //time
//#define DEBUG

#define MONSTR { \
system("cls"); \
printf("-----\n"); \
printf("|O O|\n"); \
printf("_____\n"); \
printf(" | | \n"); \
printf(" --- \n\n"); \
printf("Monstr! You lose!"); \
return 0; \
}

#define EXIT { \
system("cls"); \
printf("-----\n"); \
printf("|   |\n"); \
printf("|   |\n"); \
printf("|   |\n"); \
printf("-----\n\n"); \
printf("You find exit!\n"); \
return 0; \
}

#define FACE { \
printf("Hi! I'm Coldun!\n\n"); \
printf(" ----------- \n"); \
printf("|  *   ---  |\n"); \
printf("|     | * | |\n"); \
printf("|  *   ---  |\n"); \
printf("|           |\n"); \
printf("|           |\n"); \
printf(" ----------- \n\n"); \
system("pause"); \
}

#define COIN \
hod = 0; \
ochenka = 0; \
help = 0; \
if (predmet1 != 0) { \
printf("You have glasses! Type 0 if you want use it!\n\n"); \
scanf_s("%d", &vybrano); \
if (vybrano == 0) {help = 1; predmet1--;} \
} \
printf("Go play in coin!\n\n"); \
system("pause"); \
while (hod < 3 && ochenka < 2) { \
system("cls"); \
nado_vybrat = rand() % 2; \
help == 1 ? printf("Type %d: ", nado_vybrat) : printf("Type number of side (0 or 1): "); \
scanf_s("%d", &vybrano); \
while(vybrano != 0 && vybrano != 1) { \
printf("Repeat again! Type number of side (0 or 1): "); \
scanf_s("%d", &vybrano); \
} \
printf("---\n"); printf("|%d|\n", nado_vybrat); printf("---\n"); system("pause"); \
if (vybrano == nado_vybrat) ochenka++; \
hod++; \
} \
if (ochenka < 2) {printf("You lose!\n"); system("pause"); povtor_urovnya = 1;} \
else {printf("You win!\n"); system("pause"); continue;} \
if (vybor_dveri == 1) otkryto1 = 0; \
else if (vybor_dveri == 2) otkryto2 = 0; \
else otkryto3 = 0;

#define CUEFA \
hod = 0; \
ochenka = 0; \
help = 0; \
if (predmet1 != 0) { \
printf("You have glasses! Type 0 if you want use it!\n\n"); \
scanf_s("%d", &vybrano); \
if (vybrano == 0) {help = 1; predmet1--;} \
} \
printf("Go play in cuefa!\n\n"); \
system("pause"); \
while (hod < 3 && ochenka < 2) { \
system("cls"); \
nado_vybrat = rand() % 3; \
help == 1 ? printf("Type %d: ", nado_vybrat) : printf("Type number of figure (0 (rock) or 1 (scissors) or 2 (paper)): "); \
scanf_s("%d", &vybrano); \
while(vybrano != 0 && vybrano != 1 && vybrano != 2) { \
printf("Repeat again! Type number of figure (0 (rock) or 1 (scissors) or 2 (paper)): "); \
scanf_s("%d", &vybrano); \
} \
if (nado_vybrat == 0) printf("-rock-\n"); \
if (nado_vybrat == 1) printf("-scissors-\n"); \
if (nado_vybrat == 2) printf("-paper-\n"); \
system("pause"); \
if (nado_vybrat == 0 && (vybrano == 0 || vybrano == 2)) ochenka++; \
if (nado_vybrat == 1 && (vybrano == 0 || vybrano == 1)) ochenka++; \
if (nado_vybrat == 2 && (vybrano == 1 || vybrano == 2)) ochenka++; \
hod++; \
} \
if (ochenka < 2) {printf("You lose!\n"); system("pause"); povtor_urovnya = 1;} \
else {printf("You win!\n"); system("pause"); continue;} \
if (vybor_dveri == 1) otkryto1 = 0; \
else if (vybor_dveri == 2) otkryto2 = 0; \
else otkryto3 = 0;

#define CHET \
nado_vybrat = rand() % 2; \
help = 0; \
if (predmet1 != 0) { \
printf("You have glasses! Type 0 if you want use it!\n\n"); \
scanf_s("%d", &vybrano); \
if (vybrano == 0) {help = 1; predmet1--;} \
} \
printf("Go play in chet-nechet!\n\n"); \
system("pause"); \
system("cls"); \
help == 1 ? printf("Type %d: ", nado_vybrat) : printf("Type 0 or 1: "); \
scanf_s("%d", &vybrano); \
while(vybrano != 0 && vybrano != 1) { \
printf("Repeat again! Type 0 or 1: "); \
scanf_s("%d", &vybrano); \
} \
if (vybrano != nado_vybrat) {printf("You wrong!\n"); system("pause"); povtor_urovnya = 1;} \
else {printf("You guess!\n"); system("pause"); continue;} \
if (vybor_dveri == 1) otkryto1 = 0; \
else if (vybor_dveri == 2) otkryto2 = 0; \
else otkryto3 = 0;

#define COLDUN \
FACE; \
if (help == 0) {if (predmet3 != 0) { \
printf("You have poison! Type 0 if you want use it!\n"); \
scanf_s("%d", &vybrano); \
if (vybrano == 0) { \
predmet3--; \
dobry_coldun = rand() % 2; \
if (dobry_coldun == 1) {printf("Zzz... Zzz... Zzz...\n"); system("pause"); continue;} \
} \
} \
dobry_coldun = rand() % 2; \
if (dobry_coldun == 1) {printf("I'm busy now! Come back later!\n"); system("pause"); continue;} \
} \
system("cls"); \
vybor_igry = rand() % 3; \
if (vybor_igry == 0) {COIN;} \
else if (vybor_igry == 1) {CUEFA;} \
else {CHET;} \
uroven--

#define VEDMA \
printf("Hi! I'm Vedma! I have something for you!\n\n"); \
printf(" /|\n"); \
printf(" --\n"); \
printf(" O \n"); \
printf("-|-\n"); \
printf(" | \n"); \
printf("| |\n"); \
printf("- -\n\n"); \
system("pause"); \
vybor_igry = rand() % 100; \
if (vybor_igry < 60) { \
predmet1++; \
printf("You've got glasses!\n"); \
} \
else if (vybor_igry < 80) { \
predmet2++; \
printf("You've got key!\n"); \
} \
else if (vybor_igry < 90) { \
predmet3++; \
printf("You've got poison!\n"); \
} \
else printf("Sorry! My home is empty!\n"); \
system("pause")

#define CLOUN \
medal3++; \
printf("Hi! I'm Cloun! =)\n\n"); \
printf(" ----------- \n"); \
printf("|           |\n"); \
printf("| ---   --- |\n"); \
printf("| | |   | | |\n"); \
printf("| ---   --- |\n"); \
printf("|           |\n"); \
printf("| |-------| |\n"); \
printf("| |_______| |\n"); \
printf(" ----------- \n\n"); \
system("pause"); \
vybor_igry = rand() % 3; \
if (vybor_igry == 0) { \
printf("Go to last level!\n"); \
uroven = 8; \
} \
else if (vybor_igry == 1) { \
printf("You lose items!\n"); \
predmet1 = 0; predmet2 = 0; predmet3 = 0; \
} \
else { \
printf("Go to first level!\n"); \
uroven = 0; \
} \
system("pause")

#define PERSONAZ \
system("cls"); \
vybor_personaza = rand() % 100; \
if (vybor_personaza < 10) {VEDMA;} \
else if (vybor_personaza < 15) {CLOUN;} \
else {COLDUN;}

int main() {
	//SetConsoleCP(CP_UTF8);
    //SetConsoleOutputCP(CP_UTF8);
    //setlocale(LC_ALL, "rus");
    //Sleep(1000);
    //system("pause");
    //system("cls");
    srand(time(0));
    int uroven = 1, vybor_dveri, za_pervoy, za_vtoroy, za_tretey, vybor_personaza, povtor_urovnya = 0;
    int eto_mostr, eto_vyhod, eto_personaz, dobry_coldun, vybor_igry;
    int otkryto1 = 1, otkryto2 = 1, otkryto3 = 1;
    int hod = 0, nado_vybrat, vybrano, ochenka = 0;
    int predmet1 = 0, predmet2 = 0, predmet3 = 0, help = 0;
    int medal1 = 0, medal2 = 0, medal3 = 0;
    for (uroven; uroven <= 9; uroven++) {
        system("cls");
        eto_mostr = 5 + 5 * uroven; eto_vyhod = 5 + 5 * uroven; eto_personaz = 90 - 10 * uroven;
        if (povtor_urovnya == 0) {
            otkryto1 = 1;
            otkryto2 = 1;
            otkryto3 = 1;
            za_pervoy = rand() % 100; za_vtoroy = rand() % 100; za_tretey = rand() % 100;
            while ((za_pervoy < eto_mostr && za_vtoroy < eto_mostr && za_tretey < eto_mostr) ||
                (za_pervoy > eto_mostr + eto_personaz && za_vtoroy > eto_mostr + eto_personaz && za_tretey > eto_mostr + eto_personaz)) {
                za_pervoy = rand() % 100; za_vtoroy = rand() % 100; za_tretey = rand() % 100;
            }
        }
        povtor_urovnya = 0;
        if (predmet1 != 0 && predmet2 != 0 && predmet3 != 0) medal2++;
        printf("          ");
        if (medal1 >= 4) printf("---     ");
        if (medal2 > 0) printf(" /|     ");
        if (medal3 > 0) printf("|-|");
        printf("\n");
        printf("Achieves: ");
        if (medal1 >= 4) printf("|X|     ");
        if (medal2 > 0) printf("/ |     ");
        if (medal3 > 0) printf(" -|");
        printf("\n          ");
        if (medal1 >= 4) printf("---     ");
        if (medal2 > 0) printf("___     ");
        if (medal3 > 0) printf(" O ");
        printf("\n\n");
        printf("-----   -----   -----\n");
        otkryto1 == 1 ? printf("|   |   ") : printf("|X X|   ");
        otkryto2 == 1 ? printf("|   |   ") : printf("|X X|   ");
        otkryto3 == 1 ? printf("|   |\n") : printf("|X X|\n");
        otkryto1 == 1 ? printf("|   |   ") : printf("| X |   ");
        otkryto2 == 1 ? printf("|   |   ") : printf("| X |   ");
        otkryto3 == 1 ? printf("|   |\n") : printf("| X |\n");
        otkryto1 == 1 ? printf("|   |   ") : printf("|X X|   ");
        otkryto2 == 1 ? printf("|   |   ") : printf("|X X|   ");
        otkryto3 == 1 ? printf("|   |\n") : printf("|X X|\n");
        printf("-----   -----   -----\n\n       ");
        if (predmet1 != 0) printf("---   ---      ");
        if (predmet2 != 0) printf("--------|      ");
        if (predmet3 != 0) printf("   ---   ");
        printf("\n");
        printf("Items: ");
        if (predmet1 != 0) printf("| |---| | * %d  ", predmet1);
        if (predmet2 != 0) printf("|   |---| * %d  ", predmet2);
        if (predmet3 != 0) printf(" |     |  * %d  ", predmet3);
        printf("\n       ");
        if (predmet1 != 0) printf("---   ---      ");
        if (predmet2 != 0) printf("-----          ");
        if (predmet3 != 0) printf("---------");
        printf("\n\n");
#ifdef DEBUG
        printf("%d %d %d\n", predmet1, predmet2, predmet3);
        printf("%d %d %d\n", otkryto1, otkryto2, otkryto3);
        printf("%d %d %d\n", za_pervoy, za_vtoroy, za_tretey);
        printf("%d %d %d\n", eto_mostr, eto_personaz, eto_vyhod);
#endif // DEBUG
        if (otkryto1 == 0 && otkryto2 == 0 && otkryto3 == 0) {
            system("cls");
            printf("Game over!");
            return 0;
        }
        printf("Type number of door (1 or 2 or 3): ");
        scanf_s("%d", &vybor_dveri);
        while (vybor_dveri != 1 && vybor_dveri != 2 && vybor_dveri != 3) {
            printf("Repeat again! Type number of door (1 or 2 or 3): ");
            scanf_s("%d", &vybor_dveri);
        }
        if (vybor_dveri == 1) {
            if (otkryto1 == 0 && predmet2 == 0) { povtor_urovnya = 1; uroven--; medal1++; continue; }
            else if (otkryto1 == 0 && predmet2 != 0) {
                printf("You have key! Type 0 if you want use it!\n");
                scanf_s("%d", &vybrano);
                if (vybrano == 0) {
                    predmet2--;
                    dobry_coldun = rand() % 2;
                    if (dobry_coldun == 1) { help = 1; system("cls"); FACE; system("cls"); COLDUN; }
                    else { povtor_urovnya = 1; uroven--; printf("NO\n"); system("pause"); }
                }
                else { povtor_urovnya = 1; uroven--; medal1++; continue; }
            }
            else if (za_pervoy < eto_mostr) {MONSTR;}
            else if (za_pervoy < eto_mostr + eto_personaz) {PERSONAZ;}
            else {EXIT;}
        }
        if (vybor_dveri == 2) {
            if (otkryto2 == 0 && predmet2 == 0) { povtor_urovnya = 1; uroven--; medal1++; continue; }
            else if (otkryto2 == 0 && predmet2 != 0) {
                printf("You have key! Type 0 if you want use it!\n");
                scanf_s("%d", &vybrano);
                if (vybrano == 0) {
                    predmet2--;
                    dobry_coldun = rand() % 2;
                    if (dobry_coldun == 1) { help = 1; system("cls"); FACE; system("cls"); COLDUN; }
                    else { povtor_urovnya = 1; uroven--; printf("NO\n"); system("pause"); }
                }
                else { povtor_urovnya = 1; uroven--; medal1++; continue; }
            }
            else if (za_vtoroy < eto_mostr) {MONSTR;}
            else if (za_vtoroy < eto_mostr + eto_personaz) {PERSONAZ;}
            else {EXIT;}
        }
        if (vybor_dveri == 3) {
            if (otkryto3 == 0 && predmet2 == 0) { povtor_urovnya = 1; uroven--; medal1++; continue; }
            else if (otkryto3 == 0 && predmet2 != 0) {
                printf("You have key! Type 0 if you want use it!\n");
                scanf_s("%d", &vybrano);
                if (vybrano == 0) {
                    predmet2--;
                    dobry_coldun = rand() % 2;
                    if (dobry_coldun == 1) { help = 1; system("cls"); FACE; system("cls"); COLDUN; }
                    else { povtor_urovnya = 1; uroven--; printf("NO\n"); system("pause"); }
                }
                else { povtor_urovnya = 1; uroven--; medal1++; continue; }
            }
            else if (za_tretey < eto_mostr) {MONSTR;}
            else if (za_tretey < eto_mostr + eto_personaz) {PERSONAZ;}
            else {EXIT;}
        }
    }
	return 0;
}