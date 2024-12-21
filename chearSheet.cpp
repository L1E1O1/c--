#include <iostream> // standard library
using namespace std; // by using this u dont need to define std anymore 


// Main function

// Function declaration
void variables() {
    int file_size = 100;
    int counter = 0;
    double sales = 9.99; // a number with a decimal point

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

   // std::cout << c;

   //increament operator
   int f =1;
   f++;
   cout << f << endl;

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
    double sales_tax = 0.08;
    double country_tax = 0.05;
    double total_income = sales + (sales * sales_tax) + (sales * country_tax);

    cout << "sales: " << sales << "$" << endl;
    cout << "sales tax: " << sales * sales_tax << "$" << endl;
    cout << "country tax: " << sales * country_tax << "$" <<endl;
    cout << "total income: " << total_income <<  "$" << endl;
}


int main() {
    cout << "hello, World!" << endl; // Print hello message

    // Call the variables() function
    variables();
    print();
    taxes();

    return 0; // Return 0 is a common exit status for a program in Unix-like systems
}
