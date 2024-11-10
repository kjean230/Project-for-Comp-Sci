// Kerwyn Jean
// Octo. 27, 2023
// C++ Code for midterm sales bar chart

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

   cout.setf (ios::fixed);
   cout.setf (ios::showpoint);
   cout.precision (2);

   // vars
   double stand;
   float storeOne, storeTwo, storeThree, storeFour, storeFive, total, average, range, highpercent, lowpercent;
   char unit;
   int x, y, oneHUN, twoHUN, thrHUN, fourHUN, fiveHUN, stores, high, low;

   cout << "Enter the store sales for store 1 : ";
   cin  >> storeOne;
   cout << "Enter the store sales for store 2 : ";
   cin  >> storeTwo;


   if (storeTwo > storeOne)
{
   high = storeTwo;
   low = storeOne;
}
   else if (storeTwo < storeOne)
{
   high = storeOne;
   low = storeTwo;
}

   cout << "Enter the store sales for store 3 : ";
   cin  >> storeThree;

   if (storeThree > high)
{
   high = storeThree;
}
   else if (storeThree < low)
{
   low = storeThree;
}

   cout << "Enter the store sales for store 4 : ";
   cin  >> storeFour;
 
   if (storeFour > high)
{
   high = storeFour;
}
   else if (storeFour < low)
{
   low = storeFour;
}

   cout << "Enter the store sales for store 5 : ";
   cin  >> storeFive;

   if (storeFive > high)
{
   high = storeFive;
}
   else if (storeFive < low)
{
   low = storeFive;
}


   cout << " " << endl;   

   range = high - low; 
   average = ((storeOne + storeTwo + storeThree + storeFour + storeFive) / 5);
   total = storeOne + storeTwo + storeThree + storeFour + storeFive;
   stores = 5;
   oneHUN = storeOne / 100;
   twoHUN = storeTwo / 100;
   thrHUN = storeThree / 100;
   fourHUN = storeFour / 100;
   fiveHUN = storeFive / 100;
   highpercent = (high / total) * 100;
   lowpercent = (low / total) * 100;
   stand = sqrt((pow(storeOne - average, 2) + pow(storeTwo - average, 2) + pow(storeThree - average, 2) + pow(storeFour - average, 2) + pow(storeFive - average, 2)) / 5);
   unit = '*';


   cout << "SALES BAR CHART" << endl;
   cout << "(Each * = $100" << endl;

   cout << "Store 1 : ";

      for (y = 1;y <= oneHUN; y++)
      {
         cout << unit << " ";
      }
   cout << endl;

   cout << "Store 2 : ";

      for (y = 1;y <= twoHUN; y++)
      {
	 cout << unit << " ";
      }
   cout << endl;

   cout << "Store 3 : ";

   for (y = 1;y <= thrHUN; y++)
      
      {
         cout << unit << " ";
      }

   cout << endl;

   cout << "Store 4 : ";

   for (y = 1;y <= fourHUN; y++)
     
      {
         cout << unit << " ";
      }      

   cout << endl;

   cout << "Store 5 : ";

   for (y = 1;y <= fiveHUN; y++)

      {
	 cout << unit << " ";
      }

   cout << "   " << endl;

   if (high = storeFive)
{
   cout << "Store Five had the highest sales of : " << storeFive << endl;
} 
   else if (high = storeFour)
{
   cout << "Store Four had the highest sales of : " << storeFour << endl;
}
   else if (high = storeThree)
{
   cout << "Store Three had the highest sales of : " << storeThree << endl;
}
   else if (high = storeTwo)
{
   cout << "Store Two had the highest sales of : " << storeTwo << endl;
}
   else if (high = storeOne)
{
   cout << "Store One had the highest sales of : " << storeOne << endl;
}

        if (low = storeFive)
{
   cout << "Store Five had the lowest sales of : " << storeFive << endl;
}
   else if (low = storeFour)
{
   cout << "Store Four had the lowest sales of : " << storeFour << endl;
}
   else if (low = storeThree)
{
   cout << "Store Three had the lowest sales of : " << storeThree << endl;
}
   else if (low = storeTwo)
{
   cout << "Store Two had the lowest sales of : " << storeTwo << endl;
}
   else if (low = storeOne)
{
   cout << "Store One had the lowest sales of : " << storeOne << endl;
}

   
   cout << "The total of all five stores was        : " << total << endl;
   cout << "The average for all five stores was     : " << average << endl;
   cout << "The range of the five stores was        : " << range << endl;
   cout << "The highest sales as a percent of total : " << highpercent << " %" << endl;  
   cout << "The lowest sales as a percent of total  : " << lowpercent << " %" << endl;
   cout << "The standard deviation is               : " << stand << endl;

return 0;
}
