#include "functions.h"
#include <algorithm>

bool containsVowel(std::vector<char> &v) {
  bool yes = false;

  yes = yes || find(v.begin(), v.end(), 'a') != v.end();
  yes = yes || find(v.begin(), v.end(), 'e') != v.end();
  yes = yes || find(v.begin(), v.end(), 'i') != v.end();
  yes = yes || find(v.begin(), v.end(), 'o') != v.end();
  yes = yes || find(v.begin(), v.end(), 'u') != v.end();

  yes = yes || find(v.begin(), v.end(), 'A') != v.end();
  yes = yes || find(v.begin(), v.end(), 'E') != v.end();
  yes = yes || find(v.begin(), v.end(), 'I') != v.end();
  yes = yes || find(v.begin(), v.end(), 'O') != v.end();
  yes = yes || find(v.begin(), v.end(), 'U') != v.end();

  return yes;
}