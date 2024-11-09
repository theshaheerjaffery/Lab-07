#include <iostream>
using namespace std;
int main() {

    int size;
    cout<<"Enter the size of the Array: ";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter a value to store in Array ["<<i<<"] : ";
        cin>>arr[i];
    }

    for(int j=0; j<size; j++)
    {
        cout<<arr[j]<<endl;
    }

    return 0;
}