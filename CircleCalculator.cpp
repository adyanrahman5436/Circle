#include <iostream>

using namespace std;

//this program will get a precision based area of a circle with precision based variable radius, which the 
//user will input, and double pi
//next the program will get an approximate value for the area with the same radius, which the user inputted at 
//the beginning. However, it will drop off the numbers after the decimal point to get an approximate 
//integer based area. This will be the approximated area

int main()
{
   double pi = 3.1415;
   
   //defining radius and area as floats for precision.
   
   float radius, area;
   cout << "Enter the radius of the circle: " ;
   
   // user inputs a radius here, even decimal values are accepted
   
   cin >> radius;
   
   //use the fromula area = pi(radius)^2
   
   area = pi * radius * radius;
   
   //this area that will be outputted will be with precision
   
   cout << "The area is "<< area << " units squared." << endl;
   
   
   
   int approxradius, approxarea;
   
   //assigning integer values so that we can get an approximate value for area and radius.
   
   approxradius = radius;
   
   //same radius will be used, however the decimal points will be chopped off to make it an integer
   
   cin >> approxradius;
   approxarea = pi * approxradius * approxradius;
   
   //will display an area that will be different from the precision area using floats.
   
   cout << "The area is approximately " << approxarea << " units squared." << endl; 
   
   return 0;
}
