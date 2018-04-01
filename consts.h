#ifdef CONSTS

#else
#define CONSTS
#include "creator.h"
#include "gamescreen.h"


//stale przechowujace ograniczenie planszy
#define MAX_B_ROW 200
#define MAX_B_COL 200


//Nazwy graczy przechowywane są w tablicy
//maksymalna ilosc graczy to 9.
//pierwszym (zerowym) graczem jest zawsze botw
int players_count=0;
int loosers_count=0;
typedef struct PLAYERS{
  int fish;
  char name[30];
} PLAYERS;

//tablica przechowujaca graczy
PLAYERS players[9]={0,{'0'}};
PLAYERS loosers[9]={0,{'0'}};


//zmienne przechowujace rozmiar planszy do gry
//sa inicjowane dopiero po wczytaniu gry lub stworzeniu (poprawnym) gry
int board_row=0;
int board_col=0;

//tablica intow ktora trzyma informacje o tym co sie znajduje na ktorym polu
//aby uniknac dynamicznego zarzadzania pamiecia, zakladamy na poczatku, ze plansza nie przekroczy pewnych okreslonych wymiarow
//a program jest sterowany przez zmienne board_row, board_col
int board[MAX_B_ROW][MAX_B_COL]={'0'};

//wskazniki na zmienne przetrzymujace zaczepienia do plikow z plansza wejsciowa i wyjsciowa podanymi jako argument programu
//gdy wyjsciowa=wejsciowa uzywamu dwoch zmiennych, aby utrzymac porządek
FILE *input;
FILE *output;

//zmienne przechowujace rozmiar terminala w ktorym sie znajdujemy
//ich inicjalizacja wykonuje sie poprzed wywolanie funkcji getmaxyx z biblioteko ncurses
int win_row=0;
int win_col=0;


//zmienna pad jest glownym padem w programie, wszelka tresc jest wyswietlana na nim
//ekrany główne typu CreatorScreen po prosty wyswietlaja wszystko w nim, ew. tworzac nowe subpady
WINDOW *pad;



#endif
