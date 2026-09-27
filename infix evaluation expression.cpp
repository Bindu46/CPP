#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int precedence(char op)
{
    if (op == '^')
        return 3;

    if (op == '*' || op == '/' || op == '%')
        return 2;

    if (op == '+' || op == '-')
        return 1;

    return 0;
}

int applyOperation(int a, int b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            return a / b;

        case '%':
            return a % b;

        case '^':
            return pow(a, b);
    }

    return 0;
}

void processTop(stack<int>& values, stack<char>& operators)
{
    int b = values.top();
    values.pop();

    int a = values.top();
    values.pop();

    char op = operators.top();
    operators.pop();

    int result = applyOperation(a, b, op);

    values.push(result);
}

int evaluate(string expression)
{
    stack<int> values;
    stack<char> operators;

    for (int i = 0; i < expression.length(); i++)
    {
        // Ignore spaces
        if (expression[i] == ' ')
            continue;

        // If number
        if (isdigit(expression[i]))
        {
            int number = 0;

            while (i < expression.length() &&
                   isdigit(expression[i]))
            {
                number = number * 10 + (expression[i] - '0');
                i++;
            }

            values.push(number);
            i--;
        }

        // Opening bracket
        else if (expression[i] == '(')
        {
            operators.push('(');
        }

        // Closing bracket
        else if (expression[i] == ')')
        {
            while (!operators.empty() &&
                   operators.top() != '(')
            {
                processTop(values, operators);
            }

            operators.pop();
        }

        // Operator
        else
        {
            char currentOperator = expression[i];

            while (!operators.empty() &&
                   operators.top() != '(' &&
                   precedence(operators.top()) >=
                   precedence(currentOperator))
            {
                processTop(values, operators);
            }

            operators.push(currentOperator);
        }
    }

    // Process remaining operators
    while (!operators.empty())
    {
        processTop(values, operators);
    }

    return values.top();
}

int main()
{
    string expression;

    cout << "Enter expression: ";
    getline(cin, expression);

    cout << "Result = " << evaluate(expression) << endl;

    return 0;
}