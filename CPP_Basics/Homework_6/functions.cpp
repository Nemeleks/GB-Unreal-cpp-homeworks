#include <iostream>
#include <math.h>
#include <cstdlib>
#include <fstream>
#include <string>

 
using namespace std;

void fill_array(long* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = pow(2, (i + 1));
	}

}

void print_array(long* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void random_matrix(int** arr, int size_m, int size_n)
{
	for (int i = 0; i < size_m; i++)
	{
		for (int j = 0; j < size_n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void print_matrix(int** arr, int size_m, int size_n)
{
	for (int i = 0; i < size_m; i++)
	{
		for (int j = 0; j < size_n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void create_txt()
{
	string filename;
	cout << "Enter filename: " << endl;
	cin >> filename;
	filename += ".txt";
	ofstream fout(filename);
	string filetxt;
	cout << "Enter txt to file: " << endl;
	cin.ignore();
	getline(cin, filetxt);
	fout << filetxt;
	fout.close();
}
bool file_to_copy(ifstream* fin, int file_number)
{
	string filename;
	cout << "enter file " << file_number << " name to copy (*.txt): " << endl;
	cin >> filename;
	fin->open(filename);
	if (!fin->is_open())
	{
		cout << "Can not open file " << filename << endl;
		return false;
	}
	return true;
}
bool file_to_save(ofstream* fin)
{
	string filename;
	cout << "enter filename to save (*.txt): " << endl;
	cin >> filename;
	fin->open(filename);
	if (!fin->is_open())
	{
		cout << "Can not open file " << filename << endl;
		return false;
	}
	return true;
}

void copy_file(ifstream *fin, ofstream *fout)
{
	const size_t size = 255;
	char buf[size];
	while (!fin->eof())
	{
		fin->getline(buf, size);
		*fout << buf << endl;
	}
}



void sum_file()
{
	ifstream fin;
	ifstream fin1;
	ofstream fout;
	file_to_copy(&fin, 1);
	file_to_copy(&fin1, 2);
	file_to_save(&fout);
	copy_file(&fin, &fout);
	copy_file(&fin1, &fout);
	fin.close();
	fin1.close();
	fout.close();
	
}

void find_in_file()
{
	string findWord;
	string filename;
	string temp;
	size_t j = 0;
	cout << "Enter filename (*.txt) where we should find the word" << endl;
	cin >> filename;
	cout << "Enter the word what we should find in " << filename << endl;
	cin >> findWord;

	ifstream fin(filename);
	if (fin.is_open())
	{
		const size_t size = 255;
		char buf[size];
		while (!fin.eof())
		{
			fin.getline(buf, size);
			temp = buf;
			if (temp.find(findWord) !=string::npos)
			{
				j++;
			}


		}
		if (j > 0)
		{
			cout << "in file" << filename << " word '" << findWord << "' was meeting in " << j << " strings" << endl;
		}
		else
		{
			cout <<"Word '"<< findWord << "' wasn't meeting in " << filename << endl;
		}

		fin.close();
	}
	else
	{
		cout << "Can not open file: " << filename << endl;
	}



}