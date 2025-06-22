//Energy Drink Consumption Program

#include <iostream>
using namespace std;

int main() 
{
  /* Create and initialize variables: surveySize is the number of people surveyed, percentCustomers is the percentage of customers who purchase one or more energy drinks per week, and percentCitrus is the percentage of customers in the group who prefer citrus flavored energy drinks. */
  double surveySize, percentCustomers, percentCitrus;
  surveySize = 16500;
  percentCustomers = surveySize * 0.15; //15% of those surveyed purchase one or more energy drinks per week
  percentCitrus = percentCustomers * 0.58; // 58% of those surveyed who purchase energy drinks prefer citrus flavored energy drinks.

  //Print the results to the console
  cout << "Approximately " << percentCustomers << " customers in the survey purchase one or more energy drinks per week." << endl;
  cout << "Approximately " << percentCitrus << " customers in the survey who purchase energy drinks prefer citrus flavored energy drinks." << endl;

  return 0;
}