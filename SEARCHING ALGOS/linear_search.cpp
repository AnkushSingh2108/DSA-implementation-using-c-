#include<iostream>
using namespace std;

void ls(int a[], int n)
{
    int temp = -1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]==n)
        {
            cout<<"Element found at location "<<i<<"\n";
            temp = 0;
            break;
        }
    }
    if (temp == -1)
    {
        cout<<"No element found ";
    }
    
    
}
int main()
{
    int arr[5] = {1,22,33,4,55};
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    cout<<"Enter an element to search ";
    int num;
    cin>>num;

    ls(arr,num);

return 0;
}