// they are two list of integer value which read as number is reverse order add two list and store in another list.
#include <iostream>
#include <vector>   
using namespace std;

vector<int> addTwoNumbers(vector<int>& num1, vector<int>& num2) {
    vector<int> result;
    int carry = 0;
    int n = max(num1.size(), num2.size());

    for (int i = 0; i < n; i++) {
        int x = (i < num1.size()) ? num1[i] : 0;
        int y = (i < num2.size()) ? num2[i] : 0;

        int sum = x + y + carry;
        result.push_back(sum % 10);
        carry = sum / 10;
    }

    if (carry > 0)
        result.push_back(carry);

    return result;
}

int main() {
    vector<int> num1 = {2, 4, 3}; 
    vector<int> num2 = {5, 6, 4}; 

    vector<int> result = addTwoNumbers(num1, num2);

    cout << "Sum: ";
    for (int digit : result)
        cout << digit << " "; 
    cout << endl;

    return 0;
}