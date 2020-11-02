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

void exit(Fl_Widget* button,void*)
{
	exit(0);
}

int main()
{
	Fl_Window* window = new Fl_Window(500, 300,"Truncate");
	Fl_Box* label = new Fl_Box(50, 20, 400, 20, "Enter text to be truncated and the number of characters to truncate.");
	Fl_Button* truncate = new Fl_Button(100, 200, 100, 50, "Truncate");
	Fl_Button* quit = new Fl_Button(350, 200, 50, 50, "Quit");
	truncate->type(FL_NORMAL_BUTTON);
	quit->type(FL_NORMAL_BUTTON);
	quit->callback(exit);
	Fl_Input* text = new Fl_Input(50, 50, 200, 35, "");
	text->value("Enter text here");
	Fl_Input* num = new Fl_Input(300, 50, 150, 35, "");
	num->value("Enter number here");
	Fl_Output* result = new Fl_Output(150, 120, 250, 35, "Truncated text");
	window->end();
	window->show();
	return Fl::run();
}