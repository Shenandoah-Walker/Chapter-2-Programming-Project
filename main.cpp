//Ocean Levels Program

#include <iostream>
using namespace std;

int main() 
{
  // Create and initialize variables
  double rateOfIncrease = 1.5;
  double years1 = 5, years2 = 7, years3 = 10;
  double levelChange1, levelChange2, levelChange3;

//The level change is calculated by multiplying the rate of increase by the number of years
  levelChange1 = rateOfIncrease * years1;
  levelChange2 = rateOfIncrease * years2;
  levelChange3 = rateOfIncrease * years3;

  //Print the results to the console
  cout << "In " <<  years1 << " years, the ocean's level will be "<< levelChange1 << " millimeters higher than the current level." << endl;
  cout << "In " <<  years2 << " years, the ocean's level will be "<< levelChange2 << " millimeters higher than the current level." << endl;
  cout << "In " <<  years3 << " years, the ocean's level will be "<< levelChange3 << " millimeters higher than the current level." << endl;

  return 0;
}