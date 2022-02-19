#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a[]= {5,74,95,45,5,6,2,46,2};
    int n = sizeof(a)/sizeof(int);
    cout<<"Before Sorting";
    cout<<endl;
    for (int i = 0; i <=n-1; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\n";
    // loop for iteraations
    for (int i = 0; i <=n-2; i++)
    {
        // WE NEED TO WRITE A LOOP FOR COMPARISION
        for (int j = 0; j <=n-2-i; j++)// loop for comparision
        {
            if (a[j]>a[j+1])
            {// swapping to sort
                swap(a[j],a[j+1]);
            }
            
        }
        
    }
    cout<<"After sorting\n";
    for (int i = 0; i <=n-1; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\n";
    return 0;
}
