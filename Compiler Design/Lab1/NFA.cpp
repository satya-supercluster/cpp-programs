#include <bits/stdc++.h>
using namespace std;
enum TokenType
{
    IDENTIFIER,
    CONSTANT,
    OPERATOR,
    UNKNOWN
};

class NFA
{
private:
    bool isLetter(char c)
    {
        return isalpha(c) || c == '_';
    }

    bool isDigit(char c)
    {
        return isdigit(c);
    }

    bool isOperator(char c)
    {
        return c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == '<' || c == '>' || c=='%';
    }

public:
    TokenType recognize(const string &input)
    {
        if (input.empty())
        {
            return UNKNOWN;
        }
        if (isLetter(input[0]))
        {
            for (size_t i = 1; i < input.length(); ++i)
            {
                if (!isLetter(input[i]) && !isDigit(input[i]))
                {
                    return UNKNOWN;
                }
            }
            return IDENTIFIER;
        }
        if (isDigit(input[0]))
        {
            for (size_t i = 1; i < input.length(); ++i)
            {
                if (!isDigit(input[i]))
                {
                    return UNKNOWN;
                }
            }
            return CONSTANT;
        }
        if (input.length() == 1 && isOperator(input[0]))
        {
            return OPERATOR;
        }

        return UNKNOWN;
    }
};

int main()
{
    NFA nfa;
    string input;

    while (true)
    {
        cout << "Enter a token (or 'quit' to exit): ";
        cin >> input;

        if (input == "quit")
        {
            break;
        }

        TokenType token = nfa.recognize(input);

        switch (token)
        {
        case IDENTIFIER:
            cout << "Identifier" << endl;
            break;
        case CONSTANT:
            cout << "Constant" << endl;
            break;
        case OPERATOR:
            cout << "Operator" << endl;
            break;
        case UNKNOWN:
            cout << "Unknown" << endl;
            break;
        }
    }

    return 0;
}