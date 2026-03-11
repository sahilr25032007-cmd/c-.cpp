// WAP to print no in reverse order 
#include<iostream>
using namespace std;
int main(){

  int n, rev = 0, remainder;
  
  cout << "Enter a number: ";
  cin >> n;
  
  while(n != 0){ // when no. of digits is not known we use while loop
    remainder = n%10;
    rev = rev*10 + remainder;
    n = n/10;
  }
  
  cout << "Reversed number: " << rev <<endl;

  return 0;
}
