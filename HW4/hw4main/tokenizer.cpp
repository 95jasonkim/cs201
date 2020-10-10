/*
Jason Kim
CS201 hw4 tokenizer.cpp
10/9/2020
*/
#include"tokenizer.hpp"

bool ReadLine(string& str)
{
	getline(cin, str);
	return !str.empty();
}

unsigned StringToTokensWS(const string& input, vector<string>& tokens)
{
	istringstream in(input);
	string token;
	int count=0;
	while (in)
	{
		in >> token;
		tokens.push_back(token);
		count++;
	}
	tokens.push_back("");
	return count;
}

void AnalyzeTokens(const vector<string>& tokens)
{
	for (auto token : tokens)
	{
		if (token[0] >= 'A' && token[0] <= 'Z')
		{
			cout << "[identifier] \"" << token << "\"" << endl;
		}
		else if (token[0] >= 'a' && token[0] <= 'z')
		{
			cout << "[identifier] \"" << token << "\"" << endl;
		}
		else if (token.empty())
		{
			cout<<"[whitespace] \"" << token << "\"" << endl;
		}
		else if (token[0] == '\"' && token[token.size() - 1] == '\"')
		{
			cout << "[string] \"\\" << token << "\\\"" << endl;
		}
		else if (token.find_first_not_of("0123456789")==string::npos)
		{
			cout << "[integer] \"" << token << "\"" << endl;
		}
		else
		{
			cout << "[other] \"" << token << "\"" << endl;
		}
	}

}