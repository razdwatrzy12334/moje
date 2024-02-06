#include "uzytkownik.h"
#include <iostream>
uzytkownik::uzytkownik(std::string login1, std::string password1, std::string group1)
{
	login = login1;
	password = password1;
	group = group1;
}
uzytkownik::uzytkownik(std::string login1, std::string password1, bool root1, std::string group1)
{
	login = login1;
	password = password1;
	if (root1 == true)
		root = true;
}

void uzytkownik::wypisz()
{
	std::cout << login << " " << password << " " << root << " " << group << "\n";
}

void uzytkownik::zmien_haslo()
{	
	std::cout << "dajte haslo: ";
	std::cin >> password;
}
void uzytkownik::zmien_login()
{
	std::cout << "dajte login: ";
	std::cin >> login;
}
void uzytkownik::zmien_grupe()
{
	std::cout << "dajte grupe: ";
	std::cin >> group;
}