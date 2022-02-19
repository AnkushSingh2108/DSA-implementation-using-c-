// SELECTION SORT SAYS: ON EVERY POSITION KEEP ITS CORRECT ELEMENT
#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {58,56,268,2,55,554,45,23,1,5,43,1,89,56,-9};
    int n = sizeof(arr)/sizeof(int);
    cout<<"The size of the array is "<<n<<"\n";
    cout<<"Before sorting\n";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    for (int i = 0; i <=n-2; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }   
        }
        swap(arr[min],arr[i]);
    }
    cout<<"After sorting\n";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
