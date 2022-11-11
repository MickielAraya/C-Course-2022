#include <cctype>
#include <iostream>
#include <algorithm>
#include "UserInput.h"

using namespace std;

string computerMove() {
  int choice = rand()%(4 - 1 + 1) + 1;
  if (choice == 1) return "rock";
  if (choice == 2) return "paper";
  if (choice == 3) return "scissors";
}

string userMove() {
  string choice;
  bool valid = false;
  UserInput userInput;
  do 
  {    
    choice = userInput.readString();
    std::transform(choice.begin(), choice.end(), choice.begin(),
    [](unsigned char c){ return std::tolower(c); });
    if (choice != "rock" && choice != "paper" && choice != "scissors") 
    {
      valid = false;
    } 
    else
    {
      valid = true;
    };
  } while (!valid);
  return choice;
}

string findWinner(string computer, string user) {
  if (computer == "rock" && user == "scissors") return "computer";
  if (computer == "rock" && user == "rock") return "tie";
  if (computer == "paper" && user == "rock") return "computer";
  if (computer == "paper" && user == "paper") return "tie";
  if (computer == "scissors" && user == "paper") return "computer";
  if (computer == "scissors" && user == "scissors") return "tie";
  if (user == "rock" && computer == "scissors") return "user";
  if (user == "rock" && computer == "rock") return "tie";
  if (user == "paper" && computer == "rock") return "user";
  if (user == "paper" && computer == "paper") return "tie";
  if (user == "scissors" && computer == "paper") return "user";
  if (user == "scissors" && computer == "scissors") return "tie";
}