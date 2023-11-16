#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
        char name[50];
    public:
        void set_name(char *c)
        {
            strcpy(name,c);
        }
        char* get_name()
        {
            return(name);
        }
    
};
int main()
{
    char name[51];
    cin>>name;
    student n;
    n.set_name(name);
    cout<<n.get_name()<<endl;

    // char s[6]="Hello",c;
    // char str[5]="kill";
    // c=s[0];
    // s[0]=str[0];
    // str[0]=c;
    // puts(str);
    // puts(s);
    // char *str1="hello";
    // puts(str1);
    return 0;
}