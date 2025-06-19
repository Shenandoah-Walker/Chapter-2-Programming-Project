#include <iostream>
using namespace std;

int main() 
{
  double rateOfIncrease = 1.5;
  double years1 = 5, years2 = 7, years3 = 10;
  double levelChange1, levelChange2, levelChange3;

  levelChange1 = rateOfIncrease * years1;
  levelChange2 = rateOfIncrease * years2;
  levelChange3 = rateOfIncrease * years3;

  cout << "In " <<  years1 << " years, the ocean's level will be "<< levelChange1 << " millimeters higher than the current level." << endl;
  cout << "In " <<  years2 << " years, the ocean's level will be "<< levelChange2 << " millimeters higher than the current level." << endl;
  cout << "In " <<  years3 << " years, the ocean's level will be "<< levelChange3 << " millimeters higher than the current level." << endl;

  return 0;
}