#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,5,45,55,100};
    int n = sizeof(a)/sizeof(int);
    cout<<"The size if the array is"<<n<<"\n";
    int ans = -1,key,s=0,e=n-1;

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"enter the value you want to search\n";
    cin>>key;

    while (s<=e)
    {
        int mid = (s+e)/2;
        cout<<mid<<"\n"; 
        if (a[mid]==key)
        {// mid index is the ans
            ans = mid;
            break;
        }
        else if (key>a[mid])
        {
            s= mid++;
        }
        else
        {
            s = mid--;
        }
        s++;
    }
    


    if (ans==-1)
    {
        cout<<"Key not found\n";
    }
    else
    {
        cout<<"Key found at index "<<ans<<'\n';
    }
    
    
    return 0;
}
