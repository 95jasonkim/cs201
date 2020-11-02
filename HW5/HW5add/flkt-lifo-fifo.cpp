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
	Fl_Window* window=new Fl_Window(700, 500, "LiFo-FiFo");
	window->begin();
	Fl_Input* in = new Fl_Input(100, 250, 250, 70, "Input Item");
	Fl_Box* intro = new Fl_Box(50, 50, 200, 50, "Items in container");
	Fl_Box* items = new Fl_Box(50, 100, 600, 70,"place");
	items->box(FL_DOWN_BOX);
	Fl_Button* push = new Fl_Button(450, 250, 100, 70, "Push Item");
	Fl_Button* fifoPop = new Fl_Button(100, 385, 100, 70, "Pop first Item");
	Fl_Button* lifoPop = new Fl_Button(300, 385, 100, 70, "Pop last Item");
	Fl_Button* quit = new Fl_Button(550, 400, 100, 55, "Quit");
	quit->type(FL_NORMAL_BUTTON);
	quit->callback(exit);
	window->end();
	window->show();
	return Fl::run();
}