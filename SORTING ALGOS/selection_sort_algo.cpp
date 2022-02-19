#include<iostream>
using namespace std;

void selectionsort(int arr[]){
    for (int i = 0; i < 4; i++)
    {
        int min = i;
        for (int j = i+1; j < 5; j++)
        {
            if (arr[j]>arr[min]) // arr[j]>arr[min] this will sort in descending order and arr[j]<arr[min] this will sort in ascending order
            {
                min = j;
            }
        }
        // Swapping the minimum element & the current element
        if (min!=i)
        {
            // swap(arr[min],arr[i]);
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    
}
int main()
{
    int myarr[5];
    cout<<"Enter 5 random numbers\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>myarr[i];
    }
    cout<<"UNSORTED ARRAY\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }
    selectionsort(myarr);
    
    cout<<"SORTED ARRAY\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<myarr[i]<<" ";
    }
return 0;
}