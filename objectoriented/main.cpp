#include <iostream>
#include <string>

using namespace std;

class Person
//if u change private to protected then the content inside will be accessible to other classes but still be inaccessible to other functions like Main
{
    // encapslulation
private:
    string first;
    string last;

public:
    // cunstrukture
    Person(string first, string last) : first(first), last(last)
    {
        // constructor to initialize first and last name
    }
    Person() = default; // should make it possible to make a person without a name

    void setFirst(string first) { this->first = first; } // if u make it same name then u need to add this ->
    void setLast(string last) { this->last = last; }
    string getfullName() { return first + " " + last; }
    void printfullName()
    {
        cout << first << " " << last << endl;
    }
      void  virtual printInfo() {
        cout << "Employee Name: " << getfullName() << endl;
    }
};

// inheritance
// the ":" sign indicates that the class inherits a nother class
// use public so that all inherited classes becomes accessable
class Employee : public Person
{
    string department;

public:
    Employee(string first, string last, string department) : Person(first, last), department(department) {}
    string getDepartment()
    {
        return department;
    }
    void setDepartment(string department)
    {
        this->department = department;
    }
// u need to put virtual before the desired part that u wanna override
    void  printInfo() override {
        cout << "Employee Name: " << getfullName() << endl;
        cout << "Department: " << department << endl;

    }
};

int main()
{

    Person p("John", "jones"); // this assigns first and last automatically making it impossible to only output first or last names

    Person p2; // person without a name

    // to reach private call functions and set value
    /*  Person p;
      p.setFirst("caleb");
      p.setLast("curry");
  */

    Employee e("first", "last", "sales"); 
    e.setFirst("Jacob");
    e.setLast("Smith");
       e.printInfo();

    cout << e.getDepartment()<< endl;

    p.printfullName();
    e.printfullName();
    return 0;
}

// class- describes the structure
// object- specific stuff from strukture
//  can contain

// data members - variables
// methods - functions

// abstractions - a consept where u make stuff easy by hiding complicated stuff
// encapslulation - give acces to private data only through controlled public interfaces
// inhereitance - classes that inherit properties from parent  classes
// polymorphism - we can treat multiple diffrent objects as their base object type