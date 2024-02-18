#include "apps.h"
#include "server.h"

void apps::run()
{
	server default_server;
	servery.emplace_back(default_server);
	servery[0].run();

}
