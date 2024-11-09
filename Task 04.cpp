#include <iostream>
using namespace std;
int main() {

    int arr[10];
    for(int i=0; i<10; i++)
    {
        cout<<"Enter a value to store in Array ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Following are the values of Array is Reverse Order: "<<endl;

    for(int j=9; j>=0; j--)
    {
        cout<<"Array ["<<j<<"] : "<<arr[j]<<endl;
    }

    return 0;
}