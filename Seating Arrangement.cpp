// Hint:trick before seeing
//see the picture properly 1,12,6,7 are WS and 2,11,5,8 are  MS 3,10,4,9 are AS 
//Hint:
//try find common relation ship with all other number (i mean after 12..)






#include<iostream>
using namespace std;
string seat;
int main()
{
    int sol(int N);// ->29line  function
    int T;
    cin>>T;
    for(int i = 0;i<T;i++)
    {
        int n;
        cin>>n;
        cout<<sol(n)<<" "<<seat<<endl;
    }
    return 0;
}

//logic implementation
int sol(int N)
{
    if(N%12==0||N%12==1||N%12==6||N%12==7)
    {
        seat = "WS";
        if(N%12==0||N%12==1)
        return (N%12 ==0)?N-11:N+11;
        else
        return (N%12==6)?N+1:N-1;
    }
    else if(N%12==5||N%12==8||N%12==2||N%12==11)
    {
        seat = "MS";
        if(N%12==5||N%12==8)
        return (N%12 ==5)?N+3:N-3;
        else
        return (N%12==2)?N+9:N-9;
    }
    else
    {
        seat = "AS";
        if(N%12==3||N%12==10)
        return (N%12 ==3)?N+7:N-7;
        else
        return (N%12==4)?N+5:N-5;

    }
    
}
