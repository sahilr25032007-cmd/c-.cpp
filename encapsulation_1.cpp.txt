// # Encapsulation in C+++
// not just binding/ public - private access
// data hiding
// validation data

#include<iostream>
using namespace std; 
class BankAccount{

    string acctt;  // data hiding, can't be accessed outside the class, only through member functions
    long accNo;
    double bal;
    public:
       bool isvalidAmount(double amt){
           return amt > 0;
       }
   // public:
     BankAccount(string n,long a,double ibal){
       acctt = n;
         accNo = a;     
         if(ibal>=0){
                bal = ibal;
            }
            else{
                bal = 0;    
         }
     }    
     string getAccountHolder(){ // not void since we want to return the name of account holder, string can't be void
         return acctt;
     }
     long getAccountNo(){
         return accNo;
     }  
     double getBalance(){
         return bal;
     }
     void deposit(double amt);// controlled modification of data 
     void withdraw(double amt);
     void display(){
         cout<<"Account Holder: "<<acctt<<endl;
         cout<<"Account Number: "<<accNo<<endl;
         cout<<"Balance: "<<bal<<endl;
     }
};
void BankAccount::deposit(double amt){ // scope resolution operator, to define the member function outside the class //this function is defined outside the class, but it belongs to the class BankAccount
     cout<<"Enter amount to deposit: "; // 
    cin>>amt;
   if(isvalidAmount(amt)){
       bal += amt;
   }
   else{
       cout<<"Invalid amount. Deposit failed."<<endl;  // 
   }
}
void BankAccount::withdraw(double amt){
    
    cout<<"Enter amount to withdraw: ";
    cin>>amt;
    if(isvalidAmount(amt) && amt <= bal){
        bal -= amt;
        cout<<"Withdrawal successful. New balance: "<<bal<<endl;
    }
    else{
        cout<<"Invalid amount or insufficient balance. Withdrawal failed."<<endl;
    }

}
int main(){
    BankAccount b("John Doe", 123456, 1000);
    //b.bal = 1000;
    b.deposit(500);
    b.withdraw(200);
    b.display();
  //  b = new BankAccount("John Doe", 123456, 1000);

    return 0;
}
