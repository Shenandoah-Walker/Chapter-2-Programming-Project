#include <iostream>
using namespace std;

int main() 
{
  // Declare variables for tank size, average miles per gallon when driven in town or on the highway (resectively), and the distance that can be driven in town or on the highway (respectively).
  double tankSize, townMileage, highwayMileage, townDistance, highwayDistance; 

  tankSize = 20;
  townMileage = 23.5;
  highwayMileage = 28.9;
  townDistance = tankSize * townMileage;
  highwayDistance = tankSize * highwayMileage;

  cout << "The car can travel " << townDistance << " miles in town." << endl;
  cout << "The car can travel " << highwayDistance << " miles on the highway." << endl;
}