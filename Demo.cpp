//============================================================================
// Name        : Demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
#include "CJsonObject.hpp"
#include <fstream>
#include <sstream>

int main() {

	std::ifstream input("C:\\Users\\Administrator\\cplus-workspace\\Demo\\src\\config.json");


	std::ostringstream sin;
	sin <<  input.rdbuf();
	std::string json = sin.str();
	input.close();
	input.clear();

    neb::CJsonObject oJson(json);

    std::cout << oJson.ToString() << std::endl;

	return 0;
}
