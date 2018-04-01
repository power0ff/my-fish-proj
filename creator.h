#ifdef CREATOR

#else
#define CREATOR

#include "consts.h"

#include "consts.h"
#include "gamescreen.h"

//ekran odpowiedzialny za przygotowanie rozgrywki wedlug podanych danych
//dzialanie funkcji polega na pobraniu danych od uzytkownika takich jak rozmiar planszy, kolejno nazwy graczy
//ilosc poczatkowych pingwinow
//funkcja zwraca 1 gdy wprowadzone dane sa poprawne, 0 gdy niepoprawne
//funkcja nie moze sie skonczyc jesli wprowadzone dane sa niepoprawne
int CreatorScreen();


//funkcja ktora dla wprowadzonych danych zwraca 1, jesli prawidlowa plansza jest mozliwa do stworzenia
//0 jesli plansza nie jest mozliwa do stworzenia\
//mozliwy wynik zalezec ma m. in. od wielkosci terminala w ktorym jest uruchomiony program
int ValidateBoard(int n /*szerokosc planszy*/, int m /*wysokosc planszy */, int Np /*poczatkowe pingwiny*/, int Ng /*lczba graczy*/ );


//funkcje ktore dodaja lub usuwaja graczy z tablicy players
int AddPlayer(char * name);
//usuwanie moze sie odbywac wedlug numeru "id"
int RemovePlayer(int n);


#endif
