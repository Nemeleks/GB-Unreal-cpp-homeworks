#pragma once

void encrypt(char* s, size_t size, std::string key);
void open_file(std::ifstream& fin);
void save_file(std::ofstream& fout);
void enter_key(std::string& keyword);
void write_file(std::ifstream& fin, std::ofstream& fout, std::string keyword);
