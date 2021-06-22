#include <iostream>
#include <fstream>
#include <string>


using namespace std;


 void encrypt(char* s,size_t size, string key)
{
	for (size_t i = 0; i < size; i++)
	{
		s[i] ^= key[i % key.length()]; 
	}

}
 void open_file(ifstream& fin)
 {
	 cout << "Enter the name of file to be encrypted/decrypted: ";
	 string filename;
	 cin >> filename;
	 filename += ".txt";
	 fin.open(filename, ifstream::binary);
	 if (!fin.is_open())
	 {
		 cout << "Can not open file " << filename << endl;
		 return;
	 }
 }

 void save_file(ofstream& fout)
 {
	 string filename;
	 cout << "Enter the name of file to save: ";
	 cin >> filename;
	 filename += ".txt";
	 fout.open(filename, ofstream::binary);
	 if (!fout.is_open())
	 {
		 cout << "Can not open file " << filename << endl;
		 return;
	 }
 }
 void enter_key(string &keyword)
 {
	 cout << "Enter keyword: ";
	 cin >> keyword;
 }

 void write_file(ifstream& fin, ofstream& fout, string keyword)
 {
	 filebuf* pbuf = fin.rdbuf();
	 size_t size = pbuf->pubseekoff(0, fin.end, fin.in);
	 pbuf->pubseekpos(0, fin.in);
	 char* buffer = new char[size];
	 pbuf->sgetn(buffer, size);
	 encrypt(buffer, size, keyword);
	 fout.write(buffer, size);
	 delete[]  buffer;
 }
void to_code()
{

}

