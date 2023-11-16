#include<iostream>
#include<string>
using namespace std;
class roman
{
    private:
        string rom;
        int dec=0;
        int value(char c)
        {
            switch(c)
            {
                case 'I': return 1; break;
                case 'V': return 5; break;
                case 'X': return 10; break;
                case 'L': return 50; break;
                case 'C': return 100; break;
                case 'D': return 500; break;
                case 'M': return 1000; break;
            }
        }
    public:
        void load(string str)
        {
            rom=str;
        }
        void show()
        {
            cout<<rom<<"'s conversion into decimal is: "<<dec<<endl;
        }
        void convert()
        {
            int p=0;
            for(int i=(rom.length()-1);i>=0;i--)
            {
                if(rom[i]>=p)
                    dec+=value(rom[i]);
                else   
                    dec-=value(rom[i]);
                p=rom[i];
            }
        }
        int validity()
        {
            int p;
            for(int i=(rom.length()-1);i>=0;i--)
            {
                if(rom[i]=='I'||rom[i]=='V'||rom[i]=='X'||rom[i]=='L'||rom[i]=='C'||rom[i]=='D'||rom[i]=='M')
                    p=1;
                else
                {
                    p=0;
                    break;
                }
            }
            return p;
        }
};
int main()
{
    string str;
    cout<<"ENTER THE ROMAN NUMBER: "<<endl;
    cin>>str;
    roman rom;
    rom.load(str);
    if(rom.validity())
    {
    rom.convert();
    rom.show();
    }
    else
        cout<<"Invalid Roman number"<<endl;
    return 0;
}