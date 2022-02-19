#include<iostream>
using namespace std;

int binarysearch(int arr[],int left, int right,int x){
    while (left<=right)
    {
        int mid = left +(right - left)/2;

        if (arr[mid]==x)
        {
            return mid;
            break;
        }        
        else if(arr[mid]<x)
        {
            left = mid+1;
        }
        else
        {
            right = mid - 1;
        }
        
    }
    return -1;
}
int main()
{
    int num,myarr[10],op;
    cout<<"Enter 10 integers in ASCENDING ORDER\n";
    for (int i = 0; i < 10; i++)
    {
        cin>>myarr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin>>myarr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<myarr[i];
    }

    cout<<"Enter one number you want to search\n";
    cin>>num;

    op = binarysearch(myarr,0,9,num);

    if (op==-1)
    {
        cout<<"No match found\n";
    }
    else
    {
        cout<<"Match found at index position: "<<op<<"\n";
    }
    
    
return 0;
}