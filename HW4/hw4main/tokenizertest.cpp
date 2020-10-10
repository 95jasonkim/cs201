/*
Jason Kim
CS201 hw4 tokenizertest.cpp
10/9/2020
*/
#include"tokenizer.hpp"

int main()
{
	cout << "Type in some text, type in \"End\", \"end\", or \"END\" when you are done." << endl;
	vector<string> tokens;
	while (true)
	{
		string text;
		ReadLine(text);
		StringToTokensWS(text, tokens);
		if (text == "end" || text == "End" || text == "END")
		{
			break;
		}
	}
	AnalyzeTokens(tokens);
}