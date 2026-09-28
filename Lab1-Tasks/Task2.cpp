#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring both the user input variables as int, for later use
    int numOne;
    int numTwo;

    //first, displaying console messages to promp the user to input
    //second, taking user input from console and applying the input to the variables
    cout << "First Number: ";
    cin >> numOne;
    cout << endl << "Second Number: " << endl;
    cin >> numTwo;

    //displaying the results on the console, with each operation
    cout << endl << "Addition: " << numOne+numTwo << endl << "Subtraction: " << numOne-numTwo << endl << "Multiplication: " << numOne*numTwo << endl << "Division: " << (float)numOne/(float)numTwo << endl << "Modulus: " << numOne%numTwo;
    
    return 0; //returning 0 as the function I declared requires an int return value
}