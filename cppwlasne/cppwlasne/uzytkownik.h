#pragma once
#include <string>
class uzytkownik
{
private:
	std::string login;
	std::string password;
	std::string group;
	bool root = false;
public:
	
	uzytkownik(std::string login1, std::string password1, std::string group1);
	uzytkownik(std::string login1, std::string password1, bool root1, std::string group1);
	void wypisz();
	void zmien_haslo();
	void zmien_login();
	void zmien_grupe();
};
class uzytkownicy 
{
private:

public:
	char login[30];
	char password[30];
	bool root = false;

};

