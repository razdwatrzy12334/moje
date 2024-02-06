#include "uzytkownik.h"
#include <string>
#include <iostream>

int main() {
	
	std::cout << "***ConsoleOS***\n" << "1. Uzytkownicy\n" << "2. Grupy\n" << "3. Wyjscie\n";
	int n, i;
	uzytkownik* uzytkownicy = new uzytkownik[n]; // definicja tablicy tylko dalej nie wiem jak to zrobic tak zeby to byla jako opcja, chce to tworze i tyle, a nie jako, tworze 5 i mam 5, albo pytam uzytkownika ile stworzyc
	for (int i = 0; i < n; i++) {
		std::cout << "podaj login, haslo, grupe: \n";
	}
	uzytkownik u1("login", "password", "dekadencja");
	uzytkownik u2("login2", "password2", "akademia");

	u1.wypisz();
	u2.wypisz();
	u1.zmien_haslo();
	u1.zmien_login();
	u2.zmien_grupe();
	u1.wypisz();
	u2.wypisz();

	uzytkownik root("root", "root", true, "root");
	root.wypisz();
}