#include <iostream>
using namespace std;
int main() {

    int count=0;
    int arr[7];
    for(int i=0; i<7; i++)
    {
        cout<<"Enter Integer "<<i+1<<" : ";
        cin>>arr[i];

        if(arr[i]%5==0)
        {
            count=count+1;
        }

    }
    cout<<"Integers which are Multiples of 5: "<<count;

    return 0;
}