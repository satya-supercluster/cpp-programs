#include <iostream>
using namespace std;
class dayType
{
private:
    string DN[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string day;
    string name(int i)
    {
        switch (i)
        {
        case 0:
            return "Sun";
        case 1:
            return "Mon";
        case 2:
            return "Tue";
        case 3:
            return "Wed";
        case 4:
            return "Thu";
        case 5:
            return "Fri";
        case 6:
            return "Sat";
        }
    }
    int value(string str)
    {
        if (str == "Sun")
            return 0;
        else if (str == "Mon")
            return 1;
        else if (str == "Tue")
            return 2;
        else if (str == "Wed")
            return 3;
        else if (str == "Thu")
            return 4;
        else if (str == "Fri")
            return 5;
        else if (str == "Sat")
            return 6;
    }
    int updateValue(int d)
    {
        int val = value(day);
        if (d >= 0)
        {
            if ((val + (d % 7)) > 6)
                return (val + (d % 7) - 7);
            else
                return (val + d % 7);
        }
        else
        {
            d=-d;
            if((val-(d%7))>=0)
                return (val - (d%7));
            else
                return (7+val-(d%7));
        }
        
    }

public :
    
    dayType(string day)
    {
        this->day = day;
    }
    void set(string day)
    {
        this->day = day;
    }
    void show()
    {
        cout <<"The day is "<< day << endl;
    }
    string returnDay()
    {
        return day;
    }
    string next()
    {
        cout <<"Next day is "<< name(updateValue(1))<< endl;
    }
    string prev()
    {
        cout <<"Previous day is "<< name(updateValue(-1))<< endl;
    }
    string update(int value)
    {
        if(value>=0)
        cout<<"The day after "<<value<<" days is "<<name(updateValue(value))<< endl;
        else
        cout<<"The day before "<<-value<<" days is "<<name(updateValue(value))<< endl;

    }

};
int main()
{
    string str;
    cout<<"Enter the day: ";
    cin>>str;
    dayType days(str);
    int c;
    cout<<"Enter you choice: \n1.Print the day\n2.Print next day\n3.Print previous day\n4.Update the day after or before the given number of days"<<endl;
    cin>>c;
    switch(c)
    {
        case 1: days.show(); break;
        case 2: days.next(); break;
        case 3: days.prev(); break;
        case 4: 
            int t;
            cout<<"Enter the number of days: ";
            cin>>t;
            days.update(t); break;
        default:
            cout<<"Invalid Choice"<<endl;
    }
    return 0;
}