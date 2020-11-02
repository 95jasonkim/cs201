/*
Jason Kim
CS201 HW5 fltk-trunc.cpp
11/1/2020
*/
#include<FL/Fl.h>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>
#include"truncstruct.hpp"
#include<FL/Fl_Input.H>
#include<FL/Fl_Output.H>
#include<sstream>

void exit(Fl_Widget* b,void*)
{
	exit(0);
}

void callTruncate(Fl_Widget* b, void*)
{
	Fl_Button* t = (Fl_Button*)b;
	Fl_Input* text = (Fl_Input*)t->parent()->child(3);
	Fl_Input* num = (Fl_Input*)t->parent()->child(4);
	Fl_Output* out = (Fl_Output*)t->parent()->child(5);
	std::istringstream is(num->value());
	size_t size;
	is >> size;
	string truncated = trunc(StringInfo{ text->value(), size}).str;
	const char* result = truncated.c_str();
	out->value(result);
}
int main()
{
	Fl_Window* window = new Fl_Window(500, 300,"Truncate");
	window->begin();
	Fl_Box* label = new Fl_Box(50, 20, 400, 20, "Enter text to be truncated and the number of characters to truncate.");
	Fl_Button* truncate = new Fl_Button(100, 200, 100, 50, "Truncate");
	Fl_Button* quit = new Fl_Button(350, 200, 50, 50, "Quit");
	truncate->type(FL_NORMAL_BUTTON);
	quit->type(FL_NORMAL_BUTTON);
	quit->callback(exit);
	truncate->callback(callTruncate);
	Fl_Input* text = new Fl_Input(50, 50, 200, 35, "");
	text->value("Enter text here");
	Fl_Input* num = new Fl_Input(300, 50, 150, 35, "");
	num->value("Enter number here");
	Fl_Output* result = new Fl_Output(150, 120, 250, 35, "Truncated text");
	window->end();
	window->show();
	return Fl::run();
}