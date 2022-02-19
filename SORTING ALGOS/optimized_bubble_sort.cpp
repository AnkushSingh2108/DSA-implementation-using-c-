#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a[]= {5,74,95,45,5,6,2,46,2};
    int n = sizeof(a)/sizeof(int);
    cout<<"size of the array is"<<n<<"\n";
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
        int cnt = 0;
        // WE NEED TO WRITE A LOOP FOR COMPARISION
        for (int j = 0; j <=n-2-i; j++)// loop for comparision
        {
            if (a[j]>a[j+1])
            {// swapping to sort
                cnt++;
                swap(a[j],a[j+1]);
            }
        }
        if (cnt==0)
        {
            break;
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
