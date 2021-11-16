// Ternary numeric notation is quite popular in Berland. 
// To telegraph the ternary number the Borze alphabet is used. Digit 0 
// is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, 
// i.e. to find out the ternary number given its representation in Borze alphabet.

#include<bits/stdc++.h>
using namespace std;

string checkit(string code){

    int i=0;
    string ans="";

    while(i<code.length())
    {
        if(code[i]=='.'){
            ans+='0';
            i+=1;
        }
        else{

            if(code[i+1]=='-'){
                ans+='2';
            }
            else{
                ans+='1';
            }

            i+=2;
        }
    }

    return ans;
}
int main(){

    string code;
    cin>>code;

    string ans=checkit(code);

    cout<<ans;

    return 0;


}