#include "LinkedStack.cpp"
#include "InfixToPostfix.h"
#include "Node.cpp"
#include <string>
#include <iostream>

using namespace std;



int main() {
    InfixToPostfix converter;

    //create a menu to get user data for the converter
    cout << "Enter an infix expression: ";
    string infix;
    getline(cin, infix);
    converter.convert(infix);
    cout << "Postfix expression: " << converter.getPostfix() << endl;
    
    

    return 0;
}