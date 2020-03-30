#include<iostream>
using namespace std;
int main()
{
    string s;
    static int cx,cy,index;
    cin>>s;
    for(int i = 0;i<s.length();i++)
        if(s[i]!=s[i+1])
        {
        index = i;
        break;
        }
    for(int i =0;i<s.length();i++)
        (i<=index)?cx++:cy++;

    cout<<cx<<endl<<cy<<endl;
    (2*cx==cy)? cout<<"Yes": cout<<"No";
    return 0;
}
