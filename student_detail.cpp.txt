// WAP to add  student details using class and object.
#include<iostream>
#include<string>
using namespace std;

class Student
{
  public:  
  int student_id,M_cpp,M_Gen_AI,M_backend,M_DSA,M_3D,total_M;
  int P;
  string student_name;
  char G;

    void enter(){
         cout<<"Enter ID : ";
        cin>>student_id;
        cout<<"Enter Name : ";
        cin>>student_name;
        cout<<"Enter Marks OF CPP : ";
        cin>>M_cpp;
         cout<<"Enter Marks OF CPP : ";
        cin>>M_Gen_AI;
         cout<<"Enter Marks OF CPP : ";
        cin>>M_backend;
         cout<<"Enter Marks OF CPP : ";
        cin>>M_DSA;
         cout<<"Enter Marks OF CPP : ";
        cin>>M_3D;

    }

    void calc(){

         total_M = M_3D+M_backend+M_cpp+M_DSA+M_Gen_AI; 
  P = ( total_M*100)/5;
     if(P>90){
        cout<<"o";}
        else if(P>80){
            G='A';
        }
        else if (P>70){
           G='B';
        }
        else if(P>60){
            G='C';
        }
        else{ 
            G='F';
        }

    }

    void display(){
    
        cout<<"ID  "<<student_name;
       cout<<"Name:  "<<student_name;
      cout<<"Name:  "<<student_name;
      cout<<"Name:  "<<student_name;
      cout<<"Name:  "<<student_name;
      



    }
    
  };

int main()
{
    Student S1;
    S1.enter();
    S1.calc();
    

    return 0;
}