#include <iostream>

using namespace std;

int adjustPopulationOneYear(int people, int birthRate, int deathRate) 
{
  return (people + birthRate) - deathRate;
}