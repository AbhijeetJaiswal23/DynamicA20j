// Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

// Input
// Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

// Output
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

// Examples
// inputCopy
// aaaa
// aaaA
// outputCopy
// 0
// inputCopy
// abs
// Abz
// outputCopy
// -1
// inputCopy
// abcdefg
// AbCdEfF
// outputCopy
// 1
// Note
// If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

#include<bits/stdc++.h>
using namespace std;

int main(){

    string a,b;
    cin>>a>>b;

    int i=0;
    int ff=0;

    while(i<a.length() && ff==0)
    {

        if(a[i]==b[i] || a[i]==b[i]+32 || a[i]==b[i]-32){
            i+=1;
        }
        else
        {

            ff=1;
            // cout<<"out"<<" "<<a[i]<<" "<<b[i]<<endl;

            if((a[i]>=97 && a[i]<=122)&&(b[i]>=97 && b[i]<=122) ){

                // cout<<"in"<<" "<<a[i]<<" "<<b[i]<<endl;
                
                if(a[i]<b[i]){
                    cout<<-1;
                
                }
                else{
                    cout<<1;
                }
            }
            else if((a[i]>=65 && a[i]<=90)&&(b[i]>=65 && b[i]<=90)){

                if(a[i]<b[i]){
                    cout<<-1;
                
                }
                else{
                    cout<<1;
                }

            }
            else{
                if(a[i]>=65 && a[i]<=90)
                {
                    a[i]=a[i]+32;
                    if(a[i]<b[i])
                    {
                        cout<<-1;
                
                    }
                    else{
                        cout<<1;
                    }
                }
                else{
                    b[i]=b[i]+32;
                    if(a[i]<b[i])
                    {
                        cout<<-1;
                
                    }
                    else{
                        cout<<1;
                    }
                }
            }

            i+=1;
        }

    }

    if(ff==0){
        cout<<0;
    }

    return 0;
}