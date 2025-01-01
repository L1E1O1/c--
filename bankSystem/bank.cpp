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
    bool Age;
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

        if (age < 18)
        {
            Age = false;
        }
        else
        {
            Age= true;
        }

        cout << "Are you subscribed? (Y/N): ";
        char subscription;
        cin >> subscription;

        if (subscription == 'Y' || subscription == 'y')
        {
            subscribed = true;
        }
        else if (subscription == 'N' || subscription == 'n')
        {
            subscribed = false;
        }
        else
        {
            cout << "Invalid input for subscription status!" << endl;
        }
    }

    // Default constructor
    PersonKonto() = default;

    // Method to display user details
    void display()
    {
        cout << "Name: " << firstName << " " << lastName << endl;
       if(Age == true){
        cout << "Age: " << age << " (Underage)" << endl;
       }
       else if(Age == false){
        cout << "Age: " << age << " (Off age)" << endl;
       }
        cout << "Subscription Status: " << (subscribed ? "Subscribed" : "Not Subscribed") << endl;
    }
};

// Derived classes for different categories of accounts
class UnderAge : public PersonKonto
{
};
class OverAge : public PersonKonto
{
};
class basic : public OverAge
{
};
class inDebt_B : public basic
{
};
class payedOff_B : public basic
{
};
class VIP : public OverAge
{
};
class inDebt_VIP : public VIP
{
};
class payedOff_VIP : public VIP
{
};

int main()
{
    PersonKonto person; // Create an instance of PersonKonto
    person.input();     // Collect input
    person.display();   // Display user details

    return 0;
}
