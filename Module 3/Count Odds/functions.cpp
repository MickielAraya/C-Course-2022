#include "functions.h"
#include <iostream>
#include <vector>

int countOdds(std::vector<int> numArr) {
  int odds = 0;
  for(int i : numArr) {
    if (i % 2 != 0) odds += 1;
  }
  return odds;
}