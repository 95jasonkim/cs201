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


vector<string> container{ "one","two","three","four","five","six","seven" };

void exit(Fl_Widget* b, void*)
{
	exit(0);
}

string printed(const vector<string>& con)
{
	string print;
	for (auto item : con)
	{
		print += item + ", ";
	}
	print.pop_back();
	print.pop_back();
	return print;
}

void print(Fl_Widget* box)
{
	Fl_Box* item = (Fl_Box*)box;
	string print = printed(container);
	const char* c = print.c_str();
	item->copy_label(c);
}

void pushItem(Fl_Widget* b, void* v)
{
	Fl_Button* t = (Fl_Button*)b;
	Fl_Box* items = (Fl_Box*)v;
	Fl_Input* in = (Fl_Input*)b->parent()->child(0);
	LifoPush(container, in->value());
	print(items);
}

void popF(Fl_Widget* b, void* v)
{
	Fl_Button* t = (Fl_Button*)b;
	Fl_Box* items = (Fl_Box*)v;
	string item;
	FifoPop(container, item);
	print(items);
}

void popL(Fl_Widget* b, void* v)
{
	Fl_Button* t = (Fl_Button*)b;
	Fl_Box* items = (Fl_Box*)v;
	string item;
	LifoPop(container, item);
	print(items);
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
	push->callback(pushItem,items);
	quit->callback(exit);
	fifoPop->callback(popF,items);
	lifoPop->callback(popL, items);
	window->end();
	print(items);
	window->show();
	return Fl::run();
}