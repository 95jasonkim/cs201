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

/* 
reads input from user and sets str as found string
if a string is found returns true
if string is empty returns false
*/
bool ReadLine(string& str);

#endif // !TOKENIZER_HPP

