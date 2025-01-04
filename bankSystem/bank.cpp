#include <iostream>
#include <string>
using namespace std;

// Base class for person-related accounts
class PersonKonto
{
protected:
    string firstName;
    string lastName;
    int age;
    bool subscribed;

public:
    // Input function to gather user details
    void input()
    {
        cout << "Enter the first name: ";
        getline(cin, firstName);
        cout << "You entered: " << firstName << endl;

        cout << "Enter last name: ";
        getline(cin, lastName);
        cout << "You entered: " << lastName << endl;

        cout << "Welcome " << firstName << " " << lastName << endl;

        cout << "Enter the age: ";
        cin >> age;
        cin.ignore(); // Clear newline character from the input buffer
        cout << "You entered: " << age << endl;

        cout << "Are you subscribed? (Y/N): ";
        char subscription;
        cin >> subscription;

        if (subscription == 'Y' || subscription == 'y')
        {
            subscribed = true;
            cout << "You are subscribed." << endl;
        }
        else if (subscription == 'N' || subscription == 'n')
        {
            subscribed = false;
            cout << "You are not subscribed." << endl;
        }
        else
        {
            cout << "Invalid input for subscription status!" << endl;
        }
    }
    virtual void display()
    {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Subscription Status: " << (subscribed ? "Subscribed" : "Not Subscribed") << endl;
    }

    // Virtual destructor || cleans up memory
    virtual ~PersonKonto() = default; 
};

// Derived class for underage accounts
class UnderAge : public PersonKonto
{
public:
    void display() override
    {
        cout << "[Underage Account]" << endl;
        PersonKonto::display();
    }
};

// Derived class for adult accounts
class OverAge : public PersonKonto
{
public:
    void display() override
    {
        cout << "[Adult Account]" << endl;
        PersonKonto::display();
    }
};

int main()
{
    PersonKonto *person = nullptr; // dont know what it is but it is needed

    // Create a temporary PersonKonto object to get input
    PersonKonto tempPerson;
    tempPerson.input();

    // should sort into right class
    if (tempPerson.age < 18)
    {
        person = new UnderAge(tempPerson); 
    }
    else
    {
        person = new OverAge(tempPerson); 
    }

    // Display information using the appropriate derived class
    person->display();


    return 0;
}
