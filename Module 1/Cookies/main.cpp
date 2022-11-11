#include <iostream>
#include <iomanip>
#include "UserInput.h"

using namespace std;

const double SERV_PER_COOKIE = 2.5/10.0; 
const double CAL_PER_SERV = 300;

int main()
{
	try
	{
		UserInput in;
		int cookies = in.readInt();
		double calories = (cookies * SERV_PER_COOKIE) * CAL_PER_SERV;
		cout << fixed << setprecision(2);
		cout << "Calories = " << calories << endl;
	}
	catch (const char * error)
	{
		cout << "Please enter a valid integer." << endl;
	}
}