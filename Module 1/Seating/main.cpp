#include <iostream>
#include <iomanip>
#include "UserInput.h"

using namespace std;

const double PRICE_A = 15.00; 
const double PRICE_B = 12.00; 
const double PRICE_C = 9.00;

int main()
{
	try
	{
		UserInput in;
		int a = in.readInt();
		int b = in.readInt();
		int c = in.readInt();
		double total = (a * PRICE_A) + (b * PRICE_B) + (c * PRICE_C);
		cout << fixed << setprecision(2);
		cout << "Total = $" << total << endl;
	}
	catch (const char * error)
	{
		cout << "Please enter a valid integer." << endl;
	}
}