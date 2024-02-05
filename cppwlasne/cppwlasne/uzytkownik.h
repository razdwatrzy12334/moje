#pragma once
#include <string>
class uzytkownik
{
private:
	std::string login;
	std::string password;
	bool root = false;
public:
	
	uzytkownik(std::string login1, std::string password1);
	uzytkownik(std::string login1, std::string password1, bool root1);
	void wypisz();
	void zmien_haslo();


};

