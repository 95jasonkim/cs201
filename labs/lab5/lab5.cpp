/*
Jason Kim
CS201 Lab5
9/11/2020
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//code using switch
void switchf(int i)
{
	switch (i)
	{
	case 1: cout << "The first day of the week is Monday.";
		break;
	case 2: cout << "The second day of the week is Tuesday.";
		break;
	case 3: cout << "The third day of the week is Wednesday.";
		break;
	case 4: cout << "The fourth day of the week is Thursday.";
		break;
	case 5: cout << "The fifth day of the week is Friday.";
		break;
	case 6: cout << "The sixth day of the week is Saturday.";
		break;
	case 7: cout << "The seventh day of the week is Sunday.";
		break;
	default: cout << "That is not an integer between 1 and 7.";
	}
}

//code using if-else-if	
void ifelseif(int i)
{
	if (i == 1)
	{
		cout << "The first day of the week is Monday.";
	}
	else if (i == 2)
	{
		cout << "The second day of the week is Tuesday.";
	}
	else if (i == 3)
	{
		cout << "The third day of the week is Wednesday.";
	}
	else if (i == 4)
	{
		cout << "The fourth day of the week is Thursday.";
	}
	else if (i == 5)
	{
		cout << "The fifth day of the week is Friday.";
	}
	else if (i == 6)
	{
		cout << "The sixth day of the week is Saturday.";
	}
	else if (i == 7)
	{
		cout << "The seventh day of the week is Sunday.";
	}
	else
	{
		cout << "That is not an integer between 1 and 7.";
	}
}
int main()
{
	cout << "Enter an integer between 1 and 7: ";
	int i;
	cin >> i;
	
	//switchf(i);

	ifelseif(i);

	return 0;
}

