#include<iostream>
#include<string.h>
using namespace std;
class student{
public:
int id,age;
string name;

student(){
   id = 111;
   age = 18;
   name = "U";
}
student(int x,int y, string z){
    id = x;
    age = y;
    name = z;

}
student(student& obj){
id=obj.id;
}

};

int main(){
   int x,y;
   string z;
   cout<<"Enter ID : ";
   cin>>x;
   cout<<"Enter Age : ";
   cin>>y;
   cout<<"Enter Name : ";
   cin>>z;

   student s1(20,18,"saffron");
   student s2(s1);
   
   

    return 0;
}