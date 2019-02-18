#include <iostream>
#include <string>
using namespace std;

bool isChar(char a) {
    a = int(a);
    if (((a>=65)&&(a<=90))||((a>=97)&&(a<=122)))
        return true;
    else return false;
}

bool isOperator(char a) {
    switch (a) {
        case '+': return true;
        case '-': return true;
        case '*': return true;
        case '/': return true;
        case '(': return true;
        case ')': return true;
        case '^': return true;
        default: return false;
    }
}

int order(char op) {
    switch (op){
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
        case '^': return 3;

        default: return 0;
    }
}

bool isHigher(char a, char b) {
    if(order(a)>=order(b)) return true;
    else return false;
}

string pop(string s) {
return s.substr(0,s.size()-1);
}

string toPostfix(string infix) {
    string postfix, stack;

    for(int i=0; i<infix.length(); ++i) {

        //if operand
        if(isChar(infix[i])) {
            postfix.push_back(infix[i]);
        }

        //if operator
        else if(isOperator(infix[i])) {

            //if stack is empty
            if(stack.empty()) {
                stack.push_back(infix[i]);
                }

            //if stack not empty
            else if(!stack.empty()) {

                //if (
                if(infix[i]=='(') {
                   stack.push_back(infix[i]);
                   }

                //if ) is encountered pop till ( to postfix
                else if(infix[i]==')') {

                    while(*(stack.end()-1)!='(') {

                        postfix.push_back(*(stack.end()-1));
                        stack = pop(stack);
                          }
                stack=pop(stack);
                }

                else {
                    //pop until tos has lesser precedence or tos is null.
                    while(isHigher(*(stack.end()-1),infix[i])) {
                        postfix.push_back(*(stack.end()-1));
                        stack = pop(stack);
                        }

                    if(!(isHigher(*(stack.end()-1),infix[i])))
                        stack.push_back(infix[i]);
                    }
            }
        }
    }

        while(!stack.empty()) {
            string::iterator tos = stack.end() - 1;
            postfix.push_back(*tos);
            stack = pop(stack);
        }

    return postfix;
}

int main() {

    int t;
    cin>>t;

    string infix[t], postfix[t];

    for(int i = 0; i < t; ++i) {
        cin>>infix[i];
    }

    for(int i = 0; i < t; ++i) {
       postfix[i] = toPostfix(infix[i]);
        cout<<"\n"<<postfix[i];
    }

    return 0;


}