#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int array[10][10],l,r,count=0;
    
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(i%10==2 ||i%10==3 || i%10==9)
        {
            count++;
        }
    }
    cout<<count<<endl;
    }
    
}