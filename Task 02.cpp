#include <iostream>
using namespace std;
int main() {

    int max=0;
    int index;
    int arr[10];
    for(int i=0; i<10; i++)
    {
        cout<<"Study Hours of Student "<<i+1<<" : ";
        cin>>arr[i];

        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    cout<<endl;

    for(int j=0; j<10; j++)
    {
        cout<<"Study Hours of Student "<<j+1<<" : "<<arr[j]<<endl;
    }
    cout<<endl;
    cout<<"Maximum Hours are studied by Student "<<index+1<<" which is : "<<max;

    return 0;
}