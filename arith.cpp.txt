
/*
#include<iostream>  // header file for input and output stream, it contains the definitions of objects like cin and cout. 
//istream and ostream are the classes defined in this header 
#include<conio.h>// header file for console input and output, it contains the definitions of functions like getch() and clrscr().
using namespace std; // this is used to avoid writing std:: before every standard library object or function.
// whatever is defined in the standard library is present in the namespace std.
// what it does is it tells the compiler to look into the std namespace for any object or function that is not found in the global namespace.
  class test {
   public:
   int x,y;
  
   void IO_function(int a, int b)// we can not write cin>>x>>y here along with cout without the function because cin will not work outside any function
   {
   cout<<"Enter the value of x & y"<<endl; // charecter output statement, object cout is used to display output on the screen, it is a object of ostream class.
   cin>>x>>y; // charecter input statement, object cin is used to take input from the keyboard, it is a object of istream class.
   }
   
  };

  int main()
{
  //clrscr();
 int sum;
 test t1; // creating object of class test to access the members of the class
  // function to clear the console screen
  // IO_function(); // we can not call the function like this because it is not a static function
  // we have to call the function using the object of the class
  t1.IO_function(0,0);
 sum = t1.x + t1.y;
 cout<<"The sum is "<<sum;

  return 0;
}
*/
