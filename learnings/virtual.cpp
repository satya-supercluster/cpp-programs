#include <iostream>
using namespace std;
int i=0,j=0;
class Person
{
    public:
        char name[100];
        int age,id;
        virtual void getdata()=0;
        virtual void putdata()=0;
};
class Professor:public Person
{
    public:
        int publications;
        void getdata()
        {
            cin>>name>>age>>publications;
        }
        void putdata()
        {
            cout<<name<<" "<<age<<" "<<publications<<" "<<++i<<endl;
        }
};
class Student:public Person
{
    public:
        int m[6],score=0;
        void getdata()
        {
            cin>>name>>age;
            for(int k=0;k<6;k++)
            {
                cin>>m[k];
                score+=m[k];
            }
        }
        void putdata()
        {
            cout<<name<<" "<<age<<" "<<score<<" "<<++j<<endl;
        }
          
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
