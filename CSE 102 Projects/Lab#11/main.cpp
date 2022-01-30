#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <sstream>


using namespace std;

int main()
{
    string response;

    stack<int, vector<int>> myStack;

    int value, num1, num2;

    cout << "Enter a number or Q to quit: ";
    cin >> response;

    while((response != "q") && (response != "Q"))
    {
        if(myStack.size() < 2 && (response < "0" || response > "9"))
            cout << "Enter another value before performing that operation." << endl;

        else
        {
            if(response == "+")
            {
                num1 = myStack.top();
                myStack.pop();
                num2 = myStack.top();
                myStack.pop();
                myStack.push(num1 + num2);
            }

            else if(response == "-")
            {
                num1 = myStack.top();
                myStack.pop();
                num2 = myStack.top();
                myStack.pop();
                myStack.push(num2 - num1);
            }

            else if(response == "*")
            {
                num1 = myStack.top();
                myStack.pop();
                num2 = myStack.top();
                myStack.pop();
                myStack.push(num1 * num2);
            }

            else if(response == "/")
            {
                num1 = myStack.top();
                myStack.pop();
                num2 = myStack.top();
                myStack.pop();
                myStack.push(num2 / num1);
            }

        else
        {
            stringstream stringToInt(response);
            stringToInt >> value;
            myStack.push(value);
        } }

        cout << "Enter a number or operator, Q to quit: ";
        cin >> response;
    }

    cout << "The value on the top of the stack is: " << myStack.top();

    return 0;
}
