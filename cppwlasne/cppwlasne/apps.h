#pragma once
#include <string>
#include <vector>
#include "server.h"

class apps {
private:
	std::vector<server> servery;
public:
	apps() = default;
	void run();
};