#include <string>
#include <fstream>
#include <iostream>
#include "Filter.h"

using namespace std;

Filter::Filter(string path) {
  Filter::path = path;
};

ostream& operator<<(ostream& os,  const Filter& fltr) 
{
  os << fltr.result;
  return os;
};

void Filter::minGrade(string grade) 
{
  Filter::grade = grade;
};

void Filter::minScore(int score) 
{
  Filter::score = score;
};

void Filter::filter() 
{
  result = "";
  string line;
  fstream myfile;
  myfile.open(path, ios::in);
  if (myfile.is_open()) 
  {
    result += "Accept these students:";
    while(getline(myfile, line)) 
    {
      int number = std::stoi(line.substr(line.find(","), line.length()).substr(5, 3));
      string letter = line.substr(line.find(","), line.length()).substr(2, 1);
      if (grade == "A")
      {
        if (letter == "A" || score <= number) 
        {
          result += "- " + line + "\n";
        };
      };
      if (grade == "B") 
      {
        if (letter == "A" || letter == "B" || score <= number) 
        {
          result += "- " + line + "\n";
        };   
      };   
      if (grade == "C") 
      {
        if (letter == "A" || letter == "B" || letter == "C" || score <= number)
        {
          result += "- " + line + "\n";
        };
      }; 
      if (grade == "D") 
      {
        if (letter == "A" || letter == "B" || letter == "C" || letter == "D" || score <= number) 
        {
          result += "- " + line + "\n";
        };
      };
    };
  };
};