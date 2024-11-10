// Kerwyn Jean
// Octo. 27, 2023
// C++ code to make a rectangle

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

   // vars
   int x, y, rows, colms;
   char unit;

   cout << " Enter the number of rows you want : ";
   cin  >> rows;
   cout << "Enter the number of colms you want : ";
   cin  >> colms;
   cout << "    Enter the unit you want to use : ";
   cin  >> unit;

   for (x = 1; x <= colms; x++)
{
   cout << "store";
      for (y = 1;y <= rows; y++)
      {
         cout << unit << " ";
      }  
   cout << endl;
}

return 0;










}
