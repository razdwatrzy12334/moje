#include "server.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

void server::run()
{
	uzytkownik default_user("root", "root", true, "admin");
	uzytkownicy.emplace_back(default_user);
	server_loop();
}

void server::server_loop() const
{
	for (;;)
	{
		system("cls");
		char wybor;
		std::cout << "***ConsoleOS***\n" << "1. Uzytkownicy\n" << "2. Grupy\n" << "3. Wyjscie\n\n";
		do
		{
			wybor = _getch();
		}
		while (wybor < '1' && wybor > '3'); // znaki ascii

		switch (wybor)
		{
		case '1':
			// user.menu; funkcja do obslugi uzytkownikow
			break;
		case '2':
			// grupy.menu; funkcja do obslugi grup
			break;
		case '3':
			return;

		default:
			break;
		}
	}
}
