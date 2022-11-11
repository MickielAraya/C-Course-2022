#include "functions.h"

string removeSpaces(string userString) 
{
   string userStringNoSpaces("");
   unsigned int i(0);
   
   for (i = 0; i < userString.length(); ++i) 
   {
      if ( userString.at(i) != ' ')
      {
         userStringNoSpaces += userString.at(i);
      }
   }
   
   return userStringNoSpaces;
}
