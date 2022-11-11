#include <iostream>
#include "UserInput.h"
using namespace std;

int main() 
{
    
   UserInput in;
   int baseChar = in.readInt();
   int headChar = in.readInt();
   
   cout << "     " << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << endl;
   cout << "     " << headChar << endl;

   return 0;

};