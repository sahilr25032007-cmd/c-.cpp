#include<iostream>
#include<string>
#include<conio.h>
#include<cstdlib>
#include <unistd.h> //  #include<unistd.h> takes time in seconds 
// #include<windows.h> // can be used for windows system (It takes time in milliseconds) 
using namespace std;
class car{
  
    public :
    int quantity;
    int price;
    string type;

   void enter(){
      std::cout<<"Enter Type of Car :  ";
      std::cin>>type;  
      std::cout<<"Enter Price : ";
      std::cin>>price;
      std::cout<<"Enter Quantity : ";
      std::cin>>quantity;
      std::cout<<"\nData Entered Successfully";
        sleep(3);
      // main_menu();
   }

   void display(){
     std::cout<<"TYPE : "<<type<<"\n";
     std::cout<<"PRICE : "<<price<<"\n";
     std::cout<<"QUANTITY : "<<quantity<<"\n";
      sleep(3);   
      // main_menu();
   }
};
void main_menu(){   
    while(true){
system("CLS");
      int T;
   car c1;
   std::cout <<"TASK : \n";
   std::cout<<"=========    // ||     }}]}}}    ||   //\n";
   std::cout<<"   ||       //  ||    ||         ||  //\n";
   std::cout<<"   ||      //===||     }}        ||// \n";
   std::cout<<"   ||     //    ||       }}      || //\n";
   std::cout<<"   ||    //     ||   }}}}}}      ||   //\n";

    cout<<"(1) ENTER :\n";
   std::cout<<"(2) DISPLAY \n: ";
   std::cout<<"(3) EXIT : \n";
    for(int i=0;i<=20;i++){cout<<".";}
   std::cout<<"Enter Tsk To Perform : ";
   std:: cin>>T;

    if (T==1){
       c1.enter();
    }
   else if (T==2){
       c1.display();
   }
    else if (T==3){
         cout<<"Exiting Program";
         sleep(3);
         exit(0);
   }
    else{
         cout<<"Invalid Input";
         sleep(5);
      }   
  }
}
int main(){
    main_menu();

  
    return 0;
}