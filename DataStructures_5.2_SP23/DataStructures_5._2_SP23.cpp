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
    
    //
    // cout << "a - b + c" << endl;
    // converter.convert("a - b + c");
    // cout << converter.getPostfix() << endl;
    //
    // cout << "a - (b / c * d)" << endl;
    // converter.convert("a - (b / c * d)");
    // cout << converter.getPostfix() << endl;
    //
    // cout << "a / (b * c)" << endl;
    // converter.convert("a / (b * c)");
    // cout << converter.getPostfix() << endl;
    //
    // cout << "a / b / c - (d + e) * f" << endl;
    // converter.convert("a / b / c - (d + e) * f");
    // cout << converter.getPostfix() << endl;
    //
    // cout << "(a + b) * c" << endl;
    // converter.convert("(a + b) * c");
    // cout << converter.getPostfix() << endl;
    //
    // cout << "a * (b / c / d) + e" << endl;
    // converter.convert("a * (b / c / d) + e");
    // cout << converter.getPostfix() << endl;
    //
    // cout << "a - (b + c )" << endl;
    // converter.convert("a - (b + c )");
    // cout << converter.getPostfix() << endl;
    //
    // cout << "a - (b + c * d) / e" << endl;
    // converter.convert("a - (b + c * d) / e");
    // cout << converter.getPostfix() << endl;

    return 0;
}