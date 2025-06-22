//Distance per Tank of Gas program

#include <iostream>
using namespace std;

int main() 
{
  /* Declare variables for tank size, average miles per gallon when driven in town or on the highway (resectively), and the distance that can be driven in town or on the highway (respectively). */
  double tankSize, townMileage, highwayMileage, townDistance, highwayDistance; 
  
// Assign values to the variables.
  tankSize = 20;
  townMileage = 23.5;
  highwayMileage = 28.9;
  townDistance = tankSize * townMileage;
  highwayDistance = tankSize * highwayMileage;
// Print the results to the console.
  cout << "With a full " << tankSize << "-gallon tank, the car can travel " << townDistance << " miles in town." << endl;
  cout << "With a full " << tankSize << "-gallon tank, the car can travel " << highwayDistance << " miles on the highway." << endl;
}