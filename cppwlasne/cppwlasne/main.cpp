#include "uzytkownik.h"

int main() {
	uzytkownik u1("login","password");
	uzytkownik u2("login2", "password2");
	u1.wypisz();
	u2.wypisz();
	u1.zmien_haslo();
	u1.wypisz();

	uzytkownik root("root", "root", true);
	root.wypisz();
}