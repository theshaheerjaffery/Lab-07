#include <iostream>
using namespace std;
int main () {

    int num[10];
    int positive=0;
    int negative=0;
    int odd=0;
    int even=0;
    int zero=0;
    
    cout<<"Enter any 10 Integrs:"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>num[i];
    }
    cout<<endl;
    
    for(int j=0; j<10; j++)
    {
        if(num[j]>0)
        {
            positive++;
        }
    
        else if(num[j]<0)
        {
            negative++;
        }

        if(num[j]==0)
        {
            zero++;
        }

        else if(num[j]%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }
    
    cout<<"Number of Positive Integers:"<<endl;
    cout<<positive<<"\n"<<endl;

    cout<<"Number of Negative Integers:"<<endl;
    cout<<negative<<"\n"<<endl;

    cout<<"Number of Odd Integers:"<<endl;
    cout<<odd<<"\n"<<endl;

    cout<<"Number of Even Integers:"<<endl;
    cout<<even<<"\n"<<endl;

    cout<<"Number of 0s:"<<endl;
    cout<<zero;

    return 0;
}