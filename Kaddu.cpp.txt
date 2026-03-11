#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

class School
{
public:
    //     School(){
    //         // cout<< "hi i am constructor" << endl;
    //         college = "shoolini university";
    //     }
    //     string subject;
    //     float marks;
    //     int class_ ;
    //     string school_name ;
    //     string college;

    // non-parameterized
    School()
    {

        // cout<< "hi i am constructor" << endl;
        college = "shoolini university";
    }

    School(string school_name, string college, float marks, int class_)
    {
        this -> school_name = school_name;
        this -> college = college;
        this -> marks = marks;
        this -> class_ = class_ ;

    }

    string subject;
    float marks;
    int class_;
    string school_name;
    string college;
    void getInfo()
    {

        cout << "your school name" << school_name << endl;
        cout << "your class " << class_ << endl;
        cout << "your marks " << marks << endl;
        cout << "your college " << college << endl;
    }
};

class Teacher
{

private:
    double salary;
    // properties / attributes
public:
    Teacher()
    {
        // cout<< "hi i am constructor" << endl;
        college = "shoolini university";
    }
    string name;
    string dept;
    string subject;
    string college;

    // methods  / member function

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    system("cls");
    // Teacher t1;
    // Teacher t2;
    // Teacher t3;
    // Teacher t4;

    Teacher t1;
    t1.name = "ashish";
    t1.subject = "c++";
    t1.dept = "cse";
    t1.setSalary(65468);

    cout << t1.name << endl
         << t1.subject << endl
         << t1.dept << endl
         << t1.college << endl
         << t1.getSalary() << endl;

    cout << endl;

    Teacher t2;
    t2.name = "kira";
    t2.subject = "c++";
    t2.dept = "cse ds";
    t2.setSalary(14);

    cout << t2.name << endl
         << t2.subject << endl

         << t2.dept << endl
         << t2.college << endl
         << t2.getSalary() << endl;

    cout << endl;

    // School s1;
    // s1.school_name = "st john's school";
    // s1.class_ = 12;
    // s1.subject = "maths";
    // s1.marks = 99.99;

    // cout << s1.school_name << endl
    //      << s1.subject << endl
    //      << s1.class_ << endl
    //      << s1.college << endl;

    // // or'

    // cout << endl;

    // School s2("st john's school", "shoolini unversity", 99.98, 12);
    // s2.getInfo();


    // // COPY CONSTRUCTOR
    // School s3(s2);
    // s3.getInfo();

    system("pause");
    system("cls");
    return 0;
}

/* ACCESS MODIFIERS
   1. private = DATA AND METHOD ACCESSIBLE ONLY INSIDE THE CLASS
   2. public = DATA AND METHOD ACCESSIBLE TO EVERYONE
   3. protected =  DATA AND METHOD ACCESSIBLE INSIDE THE CLASS AND DERIVED CLASS
*/

/*  # ENCAPSULATION
    ENCAPSULATION IS WRAPPING UP OF DATE AND MEMBER FUNCTION IN A SINGLE UNIT CALLED CLASS

*/

/*  # CONSTRUCTOR
    SPECICAL MATHOD INVOKED AUTOMATICALLY AT TIME OF OBJECT CREATION . USED FOR INITIALISATION

    1. SAME NAME AS CLASS
    2. CONSTRUCTION DOESN'T HAVE A RETURN TYPE
    3. ONLY CALLED ONCE (AUTOMATICALLLY), AT OBJECT CREATION
    4. MEMORY ALLOCATION HAPPENS WHEN CONSTRUCTION IS CALLED

   ` THIS `  IS A SPECIAL POINTER IN C++ THAT POINTS TO THE CURRENT OBJECT.

   THIS -> PROP IS SAME AS `*(this).prop`

   COPY CONSTRUCTOR
        SPECIAL CONSTRUCTOR (DEFAULT) USED TO COPY PROPERTIES OF ONE OBJECT INTO ANOTHER

*/