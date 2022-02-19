#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[]= {1,2,4,6,78};
    int n = 5, key;


    for (int i = 0; i <=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the element to search\n";
    cin>>key;    
    int ans = -1;
    for (int i = 0; i <=n-1; i++)
    {
        if (arr[i]==key)
        {
            ans=i;
        }
    }
    cout<<"\n";
    if (ans==-1)
    {
        cout<<"Key not Found\n";
    }
    else
    {
        cout<<"Key found at index " <<ans;
    }
    return 0;
}
