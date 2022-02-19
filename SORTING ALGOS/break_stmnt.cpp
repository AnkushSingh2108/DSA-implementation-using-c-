#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    for( int j= 0; j<=2 ; j++){
        for (int i = 0; i <=10; i++)
        {
            if (i==5)
            {
                break;
            }
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
