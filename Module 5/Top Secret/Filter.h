#ifndef FILTER_H
#define FILTER_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Filter {

  private:
    int score;
    string path;
    string grade;

  public: 
    string result;
    Filter(string path);
    void minGrade(string grade);
    void minScore(int score);
    void filter();
    friend ostream& operator<< (std::ostream& out, const Filter& fltr);

};

#endif