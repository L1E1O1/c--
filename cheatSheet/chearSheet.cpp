#include <iostream> // standard library
#include <cmath> // bunch of useful mathematical functions
#include <cstdlib> //another libary
using namespace std; // by using this u dont need to define std anymore 


// Main function

// Function declaration
void variables() {
    int file_size = 100;
    int counter = 0;
    double sales = 9.99; // a number with a decimal point
    long s = 90000L; //longer version of int needs to end with L
    char letter = 'a'; // a character
    bool is_valid = true; // boolean can only be true or false

    // Exercise: swap the value of two variables without assigning a new value
    int a = 1;
    int b = 2;

    // Correct swap logic using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Print the swapped values
   // std::cout << "a: " << a << ", b: " << b << std::endl;

    // const
    const double pi = 3.14;

    //mathematical expression

    int x =10;
    int y = 3;
    int z = x + y;

    cout <<z << endl;

    // for decimals 
    double a1 = 10;
    int b2 = 3;
    double c = a1 / b2;
    float g= 1.67f; // float is a less acuurate double that needs to end with f


   // std::cout << c;

   //increament operator
   int f =1;
   f++;
   cout << f << endl;

   //mathematical shit
   double result = floor(1.2);  
   cout << result << endl;
}

//printing to the console

void print(){
    int x = 10;
   std::cout << "x = " <<x << std::endl; //by adding the << u can add a new value or variable 

    int y = 20;
    cout << "y = " <<y <<endl; //by adding the std::endl you end the line
}


// exercise print out the sales state tax and country tax and total income
void taxes(){
    double sales = 1000;
    const double sales_tax = 0.08;
    const double country_tax = 0.05;
    double total_income = sales + (sales * sales_tax) + (sales * country_tax);

    cout << "sales: " << sales << "$" << endl;
    cout << "sales tax: " << sales * sales_tax << "$" << endl;
    cout << "country tax: " << sales * country_tax << "$" <<endl;
    cout << "total income: " << total_income <<  "$" << endl;
}

// reading input
void input(){
   /* cout << "enter value: ";
    double value;
    cin >> value;
    cout << value << endl;
    */

   /* cout << "Enter a value for x: and y:";
    double x, y;
    cin >> x >> y;
    cout << x << y << endl;
    */
}

//exercise convert farenheight to celsius

void temperatur(){
    /* cout << "enter ferenheit temperatur: " ;
     double farenheit;
     cin >> farenheit;
     int celsius = (farenheit - 32) * 5/9;
     cout << "celsius temperatur: " << celsius << endl;
 */
}

// exercise take in radius and spit out area
void circleArea(){
 cout << "enter a value for radius: ";
 double radius;
 cin >> radius;
 const double pi = 3.14;
 double area = pow(radius, 2) * pi;
 cout << "area: " << area << endl;
}


// generate random numbers in c++
void random(){
    srand(5);
   int number =  rand() % 10; // random number from 0 to 10 
}

int main() {
    cout << "hello, World!" << endl; // Print hello message

    // Call the variables() function
    variables();
    print();
    taxes();
    input();
    temperatur();
    circleArea();
    random();

    return 0; // Return 0 is a common exit status for a program in Unix-like systems
}
