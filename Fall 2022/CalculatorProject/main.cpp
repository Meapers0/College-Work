#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include "StackArray.h"

using namespace std;

int convertStringToInt(string s) {
	stringstream ss(s);
	int x = 0;
	ss >> x;
	return x;
}
//ok
string convertIntToString(int i) {
	stringstream ss;
	ss << i;
	return ss.str();
}
//ok
bool lowerPrec(string s1, string s2) {
    if (((s1 == "+") || (s1 == "-")) && ((s2 == "*") || (s2 == "/"))) return true;
    return false;
}

string convertToPostFix(string s) {
    stringstream ss;
    ss.str(s);
    ss.seekg(0);
    string item;
    string postFixExpr = "";
    Stack<string> stack1;
    while (getline(ss, item, ' ')) {
        if (item == "(") stack1.push(item);
        else if (item == "+" || item == "-") {
            string next;
            while (true) {
                stack1.peek(next);
                if (!(next == "+" || next == "-" || next == "*" || next == "/")) break;
                if (lowerPrec(next, item)) break;
                stack1.pop(next);
                postFixExpr = postFixExpr + " " + next;
            }
            stack1.push (item);
        }
        else if (item == "*" || item == "/") {
            string next;
            while (true) {
                stack1.peek(next);
                if (!(next == "+" || next == "-" || next == "*" || next == "/")) break;
                if (lowerPrec(next, item)) break;
                stack1.pop(next);
                postFixExpr = postFixExpr + " " + next;
            }
            stack1.push (item);
        }
        else if (item == ")") {
            string next;
            while (true) {
                stack1.pop(next);
                if (next == "(") break;
                postFixExpr = postFixExpr + " " + next;
            }
            if (stack1.isEmpty()) break;
        }
        else { // it is a number
            postFixExpr = postFixExpr + " " + item;
        }
    }
    return postFixExpr;
}

int eval(string expr) {
    stringstream ss;
    ss.str(expr);
    ss.seekg(0);
    string item;
    Stack<string> stack1;
    int result = 0;
    while (getline(ss, item, ' ')) {
        if (item == "+" || item == "-" || item == "/" || item == "*") {
            int n1, n2;
            string nStr1, nStr2;
            stack1.pop(nStr1); //pop the top element
            n1 = stoi(nStr1);//string to int
            stack1.pop(nStr2);//pop the second element
            n2 = stoi(nStr2);//string to int
            if (item == "+") {
                result = n2+n1;
            } else if (item == "-") {
                result = n2-n1;
            } else if (item == "/") {
                result = n2/n1;
            } else if (item == "*") {
                result = n2*n1;
            } stack1.push(to_string(result));//push result back to stack convert into string
        } else stack1.push(item);
    }
    stack1.pop(item);
    return stoi(item);
}

int main()
{
    string s;
    getline(cin, s);
    string postFixExpr = convertToPostFix(s);
    cout << "Final postFixExpr = " << postFixExpr << endl;
    int res = eval(postFixExpr);
    cout << "result = " << res << endl;
    return 0;
}
