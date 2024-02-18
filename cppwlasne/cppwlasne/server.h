#pragma once
#include <vector>
#include "uzytkownik.h"
class server
{
private:
	std::vector<uzytkownik> uzytkownicy;
	
public:
	server() = default;
	void run();
	void server_loop() const;
};

