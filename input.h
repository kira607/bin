#include <iostream>
#include <limits>
#include <string>
using namespace std;


void input(short *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(int *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(long *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(long long *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}


void input(unsigned short *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(unsigned int *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(unsigned long *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(unsigned long long *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}


void input(float *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(double *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(long double *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}

void input(string *a, string str)
{
	str += ": ";
	while(true)
	{
		cout << str;
		cin >> *a;
		if(cin.fail())
		{
		cout << "Wrong input!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
		}
	}
}