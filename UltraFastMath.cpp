//just have to do Xor

#include<bits/stdc++.h>
using namespace std;

int main(){


    string num1,num2;

    cin>>num1;
    cin>>num2;

    string ans="";

    int k=0;
 
    while(k<num1.length())
    {

        if(num1[k]==num2[k])
        {
            ans+='0';
        }
        else
        {
            ans+='1';
        }

        k+=1;
    }
    cout<<ans;
    return 0;
}