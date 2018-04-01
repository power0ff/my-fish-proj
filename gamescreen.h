#ifdef GAMESCREEN

#else
#define GAMESCREEN

#include "creator.h"
#include "consts.h"

//funkcja sprawdza, czy dany pingwin ma mozliwosc ruchu, za argument bierze wspolrzedne punktu na planszy
//jesli jest pingwinem to przeglada mozliwe ruchy i jesli jakis ruch jest mozliwy zwraca 1
//jesli na tym polu nie ma pingwina albo nie moze sie ruszych zwraca 0
int CheckMove(int n /*wiersz*/, int m/*kolumna*/);

//funkcja przy pomocy f. checkMove sprawdza czy dany gracz o danym id ma jakikolwiek mozliwy ruch
//jesli dany gracz nie ma to przegral i zostaje usuneity z tablicy players i umieszczony w tablicy loosers
//przy pomocy funkcji DropPlayer
int CheckPlayerMoves(int id);


//Funkcja w której nastepuje rysowanie planszy i sterowanie gra
int GameScreen();



//przenosi gracza z tablicy players do tablicy loosers
int DropPlayer(int id);

//funkcja sprawdza czy na calej planszy jest jakikolwiek pingwin ktory moze sie ruszyc
//jesli nie ma, konczymy gre
int CheckAvailableMoves(int d);


//funkcja ktora ustawia pingwina z danego pola jako aktywnego i nastepnym krokiem jest wybranie pola na które sie ma ruszych
//funkcja zwraca 1 jesli udalo sie wybrac pingwina a 0 jesli nie (czyli gdy np. na polu nie bylo pingwina)
int ChoosePenguin(int n, int m);


//funkcja ustawia pingwina na polu. musi ono zawierac jedna rybe wtedy funkcja zwraca 1 i w przeciwnym wypadku 0
int PutPenguin(int n, int m);


//funkcja która wykonuje ruch za gracza
//
int botMove();


#endif
