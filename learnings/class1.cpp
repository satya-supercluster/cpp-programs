#include<iostream>
using namespace std;
int main()
{
    class car
    {
        public:
            int registration;
            void car_status()
            {
                if(registration>2015)
                {
                    cout<<"car is in good condition"<<endl;
                }
                else 
                    cout<<"car is not in good condition"<<endl;
            }
    };
    car obj;
    cout<<"Enter the registration year of your car:"<<endl;
    cin>>obj.registration;
    obj.car_status();
    return 0;
}
