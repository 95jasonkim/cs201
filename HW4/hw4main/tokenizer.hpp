/*
Jason Kim
CS201 hw4 tokenizer.hpp
10/9/2020
*/
#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
using std::getline;
#include<vector>
using std::vector;
#include<sstream>
using std::istringstream;

/* 
reads input from user and sets str as found string
if a string is found returns true
if string is empty returns false
*/
bool ReadLine(string& str);

/*
separates @param input into separate tokens
tokens separated by white space are added to @param tokens
returns number of tokens found
*/
unsigned StringToTokensWS(const string& input, vector<string>& tokens);

/*
determines each of the tokens 
and prints each type and value
*/
void AnalyzeTokens(const vector<string>& tokens);

#endif // !TOKENIZER_HPP

