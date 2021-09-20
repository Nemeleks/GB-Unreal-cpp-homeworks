#include <iostream>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

template <class FIter>
void uniuqeString(FIter begin, FIter end)
{
	std::unordered_set<std::string> result;
	std::copy(begin, end, std::inserter(result, result.begin()));
	for (const auto& n : result)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> entry = { "asd", "Skf", "asd", "fish" };
	uniuqeString(entry.begin(), entry.end());

	std::string in;
	std::string separators = "!.?";
	std::cout << "Enter text to split into sentences : ";
	std::getline(std::cin, in);
	std::multimap<size_t, std::string> result;
	std::string temp;
	for (auto it = in.begin(); it != in.end(); it++)
	{
		auto sentence = std::find_first_of(it, in.end(), separators.begin(), separators.end());
		if (sentence != in.end())
		{
			auto sentenceIndexBegin = std::distance(in.begin(), it);
			auto sentenceIndexEnd = std::distance(in.begin(), sentence);
			temp = in.substr(sentenceIndexBegin, sentenceIndexEnd - sentenceIndexBegin+1);
			it = sentence;
			if (temp[0] == ' ')
			{
				temp = temp.substr(1);
			}
			result.emplace(temp.size(),temp);
		}
	}

	std::cout << std::endl;
	for (const auto& n : result)
	{
		std::cout << n.second <<"  Sentence length = "<< n.first<< std::endl;
	}

	return 0;
}