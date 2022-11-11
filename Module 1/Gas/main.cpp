#include <iostream>
#include <iomanip>
#include "UserInput.h"

using namespace std;

int main()
{
	try
	{
		UserInput in;
 		int size = in.readInt();
 		int distance = in.readInt();
 		double mpg = distance/(double)size;
 		cout << fixed << setprecision(2);
 		cout << "MPG = " << mpg << endl;
	}
	catch (const char * error)
	{
		cout << "Please enter a valid integer." << endl;
	}
}