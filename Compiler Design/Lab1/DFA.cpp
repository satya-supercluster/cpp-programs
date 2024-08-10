#include <bits/stdc++.h>
using namespace std;
enum class State
{
    START,
    IDENTIFIER,
    NUMBER,
    OPERATOR,
    DONE
};

class DFA
{
private:
    State currentState;
    string input;
    int currentPos;

    bool isOperator(char c)
    {
        return c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == '<' || c == '>' || c=='%';
    }

public:
    DFA(const string &input) : input(input), currentPos(0), currentState(State::START) {}

    void analyze()
    {
        while (currentPos < input.length())
        {
            if (isalpha(input[currentPos]) || input[currentPos] == '_')
            {
                currentState = State::IDENTIFIER;
            }
            else if (isdigit(input[currentPos]))
            {
                currentState = State::NUMBER;
            }
            else if (isOperator(input[currentPos]))
            {
                currentState = State::OPERATOR;
            }
            else {
                currentPos++;
                continue;
            }
            switch (currentState)
            {
            case State::IDENTIFIER:
                cout << "Identifier: " << input[currentPos] << endl;
                break;

            case State::NUMBER:
                cout << "Constant: " << input[currentPos] << endl;
                break;

            case State::OPERATOR:
                cout << "Operator: " << input[currentPos] << endl;
                break;
            }
            currentPos++;
        }
    }
};

int main()
{
    string input;
    cout << "Enter a string to analyze: ";
    getline(cin, input);

    DFA dfa(input);
    dfa.analyze();

    return 0;
}