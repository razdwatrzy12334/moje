#include "uzytkownik.h"
#include <iostream>
uzytkownik::uzytkownik(std::string login1, std::string password1)
{
	login = login1;
	password = password1;

}
uzytkownik::uzytkownik(std::string login1, std::string password1, bool root1)
{
	login = login1;
	password = password1;
	if (root1 == true)
		root = true;
}

void uzytkownik::wypisz()
{
	std::cout << login << " " << password << " " << root << "\n";
}

void uzytkownik::zmien_haslo()
{	
	std::cout << "dajte haslo: ";
	std::cin >> password;
}
