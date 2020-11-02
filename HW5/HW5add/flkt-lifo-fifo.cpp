/*
Jason Kim
CS201 HW5 flkt-lifo-fifo.cpp
11/1/2020
*/
#include<FL/Fl.h>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>
#include<FL/Fl_Input.H>
#include<FL/Fl_Output.H>
#include"lifo-fifo.hpp"

void exit(Fl_Widget* b, void*)
{
	exit(0);
}


int main()
{
	Fl_Window* window=new Fl_Window(1000, 500, "LiFo-FiFo");
	window->begin();
	Fl_Button* quit = new Fl_Button(350, 200, 50, 50, "Quit");
	quit->type(FL_NORMAL_BUTTON);
	quit->callback(exit);
	window->end();
	window->show();
	return Fl::run();
}