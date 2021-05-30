#include <iostream>
#include <fstream>
#include <string>
#include "source.h"

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	std::string keyword;
	open_file(fin);
	save_file(fout);
	enter_key(keyword);
	write_file(fin, fout, keyword);
	fin.close();
	fout.close();

	return 0;
}
