#include<iostream>
using namespace std;
int main(){

  int r, c;
  cout << "Enter number of rows and columns: ";
  cin >> r >> c;

  int matrix[r][c];

  cout << "Enter elements of the matrix:" << endl;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout << "Element [" << i+1 << "][" << j+1 << "]: ";
      cin >> matrix[i][j];
    }
  }

  cout << "The entered matrix is:" << endl;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}