#include <iostream>
#include "LinkedStack.h"
using namespace std;

class InfixToPostfix {
private:
    LinkedStack<char> operatorStack;
    string postfix;

    bool isOperator(char c) {
        return c == '+' || c == '-' || c == '*' || c == '/';
    }

    int precedence(char op) {
        if (op == '*' || op == '/')
            return 2;
        else if (op == '+' || op == '-')
            return 1;
        else
            return 0;
    }

public:
    void convert(string infix) {
        for (int i = 0; i < infix.length(); i++) {
            char c = infix[i];
            if (isalnum(c)) {
                postfix += c;
            }
            else if (c == '(') {
                operatorStack.push(c);
            }
            else if (c == ')') {
                while (!operatorStack.isEmpty() && operatorStack.peek() != '(') {
                    postfix += operatorStack.peek();
                    operatorStack.pop();
                }
                operatorStack.pop();
            }
            else if (isOperator(c)) {
                while (!operatorStack.isEmpty() && operatorStack.peek() != '(' && precedence(c) <= precedence(operatorStack.peek())) {
                    postfix += operatorStack.peek();
                    operatorStack.pop();
                }
                operatorStack.push(c);
            }
        }
        while (!operatorStack.isEmpty()) {
            postfix += operatorStack.peek();
            operatorStack.pop();
        }
    }

    string getPostfix() {
        return postfix;
    }
};