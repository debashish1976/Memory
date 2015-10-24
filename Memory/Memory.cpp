// Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std::string_literals;

int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<std::string> v;
	for (int count=0; count<100;count++)
	{
		int i = 1;
		std::generate_n(std::back_inserter(v), 1000, [&i]() {return "Hello "s + std::to_string(i++); });
	}
	return 0;
}

