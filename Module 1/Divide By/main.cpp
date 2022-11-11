#include <iostream>
#include "UserInput.h"
using namespace std;

int main() 
{
   UserInput in;
   int userNum = in.readInt();
   int x = in.readInt();;
   
   userNum = userNum / x;
   cout << userNum;
   
   userNum = userNum / x;
   cout << " " << userNum;
   
   userNum = userNum / x;
   cout << " " << userNum;
   
   userNum = userNum / x;
   cout << " " << userNum;
   
   cout << endl;

   return 0;
}
