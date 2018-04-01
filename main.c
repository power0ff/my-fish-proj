#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "creator.h"
#include "consts.h"
#include "gamescreen.h"


//Gra ma 3 tryby, INTERACTIVE ktory prezentuje raz plansze i pozwala podjac decyzje o ruchu
//fully interactive pozwala na w pelni interaktywna gre
//static ma funcjonalnosc jedynie bota
#define INTERACTIVE //FULLY_INTERACTIVE, STATIC


//Funkcja której zadaniem jest wyswietlenie nazwy programu, autorow itp
//Dowolny przycisk powinien z tego ekrany wychodzic i przechodzic do menu
void StartScreen();

//wyswietlenie i sterowanie menu
//ma miec docelowo 3 opcje: nowa gra, wczytaj gre, wyjdz
//sterowanie odbywa sie przy uzyciu strzalek, enter wybiera opcje. podswietlany jest wybierany element.
//funkcja zwraza 1 gdy wybrano nowa gre, 2 gdy wczytaj gre, 0 gdy wyjdz
int MenuScreen();


//Funkcja ktora wczytuje stan gry z pliku ktorego nazwe podajemy
//program sprawdza poprawnosc nazwy i czy taki plik istnieje w folderze w ktorym odpalilismy gre
int LoadGame();

//funkcja która zapisuje stan gry w pliku podanym jako parametr programu

int SaveGame();
//funkcja sprawdza, czy plik wprowadzony jako wczytywany stan gry przedstawia w ogole plansze
//tzn sprawdza czy wszystkie wiersdze sa takie jak w zadaniu
int ValidateInputFile(FILE * input);



int main(char **argv, int argn)
{
  int GAMESTATE=1; //zmienna sluzaca sterowaniu programem. np. klikniecie exit w menu ma spowodowac zmiane jej wartosci na 0
  int ctrl=0;

  //tutaj jest fragment programu odpowiedzialny za dzialanie programu w trybie "samego bota"
  #ifdef STATIC




  #endif
  //tutaj jest fragment programu odpowiedzialny za dzialanie programu w wypadku kiedy nie podano do programu zadnych parametrow
  //jest to najbardziej interaktywna postac gry
  #ifdef FULLY_INTERACTIVE

    newterm(NULL, stderr, stdin);
    refresh();
    cbreak();
    noecho();
    getmaxyx(stdscr, win_row, win_col);
    pad = newpad(win_row,win_col);

    clear();
    prefresh(pad, 0, 0, 0, 0, win_row, win_col);
    keypad(pad, TRUE);

    StartScreen();
    getch();
    while(1)
    {
      switch(GAMESTATE=MenuScreen())
      {
        case 1: GAMESTATE=CreatorScreen(); break;
        case 2: GAMESTATE=LoadGame(); break;
        default: break;
      }
    if(GAMESTATE==0) continue;//kiedy nie doszlo do stworzenia lub wczytania gry
    if(GAMESTATE==2) GameScreen();   // kiedy wczytanie lub stworzenie gry sie udalo

    }

    delwin(pad);
    endwin();

  #endif

  #ifdef INTERACTIVE


  #endif








  return 0;
}
