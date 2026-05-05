//when derived class has adefinitionhas definition of member function in base class then that base function iss overwridden
#include<iostream>
using namespace std;
class Base{
    public:
   virtual void print() {cout<<"Base Print function";}// the print function is already virtual function in base class 
        void display(){cout<<"Base Display function";}
};
class Derived: public Base{
    public:
    void print(){cout<<"Derived Print function";}// the print function is already virtual function in base class 
        void display(){cout<<"Derived Display function";}
};
int main(){
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->print();//the virtual bind at runtime // the print function is already virtual function in base class 
    bptr->display(); // non virtual function bind at compile time (Early binding)
 
    return 0;

}
// a virtual function is the member function which is declared with in base class and is redefined 
// or overide by derived class  when you reffer to derived class object using a pointer to the base class 
// you can  call a virtual function for  that object and exicuter the derived class function
// the virtual function ensure that the correct function is called for an object, regardless of the type of reference (pointer or object) used for function call they are mainly used to achieve runtime polymorfism the function are declared with virtual keyword in base class the resolving of function call is done at runtime , r
// rules for virtual function
// 1. they CANnot be static also can not be a friend function of another class
// 2. virtual function should be accessed using pointerof base class type to achieve runtime polymorfism
// 3. the prototype of virtual function should be same in base and derived class
// 4. the virtual function is always defined in base class and it can be overridden in derived class but it is not mandatory for derived class to override or redefine the virtual function in that case the base class version of virtual function will be used    
// 5. a class may have virtual destructor but it cannot have virtual constructor
// 6. if class contain a virtual function then compiler it self does two things 
// - if object of that class is created then virtual pointer is incerted as data member of the class to point the virtual table of that class 
// - for each new object created a new virtual pointer is inserted as data member of that class 
// i respect of object is created or not the a static array of function pointer is called virtual table where each cell countains the address of each virtual function contained in that class
// a pure virtual function or abstract function is a virtual function for which we do not have implimentation we can only declare it. a pure virtual function is only declared by assigning 0 in its decleration
//  pure virtual function it is implimented by classes which are derived from the classes which is derived from base class