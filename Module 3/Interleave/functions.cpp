#include "functions.h"
#include "vector"

void interleave(const std::vector<std::string> &v1,
                const std::vector<std::string> &v2,
                std::vector<std::string> &interleaved) {
  unsigned int largest(0);
  unsigned int smallest(0);

  if (v1.size() > v2.size()) {
    largest = v1.size();
    smallest = v2.size();
  } else {
    largest = v2.size();
    smallest = v1.size();
  }

  for (unsigned int i(0); i < smallest; i++) {
    interleaved.push_back(v1[i]);
    interleaved.push_back(v2[i]);
  }

  if (v1.size() > v2.size()) {
    for (unsigned int i(smallest); i < largest; i++) {
      interleaved.push_back(v1[i]);
    }
  } else {
    for (unsigned int i(smallest); i < largest; i++) {
      interleaved.push_back(v2[i]);
    }
  }
}