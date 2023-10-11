#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
    string s = "AZYZBDJKX";
    cout<<s<<endl;
    string str = "";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='X')
        {
            str+=s[i];
        }
    }
    cout<<str<<endl;
    int n= str.length();
    bool flag =false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                swap(str[j],str[j+1]);
                flag = true;
            }
        }
        if(flag==false)
        {
            break;
        }
    }
    cout<<str<<" ";
    return 0;
}