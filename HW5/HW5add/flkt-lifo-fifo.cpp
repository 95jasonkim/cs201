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

int main()
{
	Fl_Window* window=new Fl_Window(300, 300, "LiFo-FiFo");
	window->begin();
	window->end();
	window->show();
	return Fl::run();
}