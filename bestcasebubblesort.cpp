#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0;i<6-1;i++)
    {
        for(int j=0;j<6-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true)
        {
            break;
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}