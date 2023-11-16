#include <iostream> 
#include <stack>
#include <string>
using namespace std;
int main() {
   stack<char> stack;
   string str;
   getline(cin,str);
    for(auto i:str){
        if(stack.empty()||stack.top()!=i){
            stack.push(i);
        }
        else if(stack.top()==i){
            stack.pop();
        }
    }
    while (!stack.empty()) {
        cout << stack.top()<<" ";
        stack.pop();
    }
    return 0;
}