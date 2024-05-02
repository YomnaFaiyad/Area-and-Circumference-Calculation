//A Program that Calculates the Area and Circumferance of a Rectangle
#include <iostream>
using namespace std;

void area (int, int);  //calculates the area of the rectangle and displays it

int circumference (int width, int height);  /*calculates the circumference of the rectangle and returns the value */

void displayRectangle (int width, int length) //displays the rectangle shape

{

    for( int row = 1; row <= width; row++)

   {

      for( int col = 1; col <= length; col++)

       {

                    cout << "*";

       }

     cout <<endl; 

   }

} // end of function

 

int main ()

{

    int width, length;

              
    cout << "Enter length of your rectangle : ";
    cin >> length;

    cout << "Enter width of your rectangle : ";
	cin >> width;
	
	area = length * width;
	circumference = (length * 2 + width * 2);
	
    cout << "The area of rectangle is: " << area;
	cout << "The circumference of rectangle is: " << circumference;
             
             
	return 0;
}


