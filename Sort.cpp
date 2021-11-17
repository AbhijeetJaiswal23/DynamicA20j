// Being a programmer, you like arrays a lot. For your birthday, your friends have given you an array a consisting of n distinct integers.

// Unfortunately, the size of a is too small. You want a bigger array! Your friends agree to give you a bigger array, but only if you are able to answer the following question correctly: is it possible to sort the array a (in increasing order) by reversing exactly one segment of a? See definitions of segment and reversing in the notes.

// Input
// The first line of the input contains an integer n (1 ≤ n ≤ 105) — the size of array a.

// The second line contains n distinct space-separated integers: a[1], a[2], ..., a[n] (1 ≤ a[i] ≤ 109).

// Output
// Print "yes" or "no" (without quotes), depending on the answer.

// If your answer is "yes", then also print two space-separated integers denoting start and end (start must not be greater than end) indices of the segment to be reversed. If there are multiple ways of selecting these indices, print any of them.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    int i=0;
    while(i<n){

        cin>>a[i];
        i+=1;
    }

    i=0;
    bool inc=true;
    int start=-1;
    int end=-1;
    while(i<n-1)
    {

        if(a[i]<=a[i+1])
        {
            if(inc==true)
            {
                i+=1;
            }
            else{
                inc=true;
                end=i;
                break;
            }
        }
        else{
            if(inc==true)
            {
                inc=false;
                start=i;
            }

            i+=1;
        }

    }

    int ff=0;
    if(start==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        ff=1;
    }

    if(start!=-1 && end==-1){
        end=n-1;
    }

    if(ff==0)
    {
        int l=start;
        int j=end;
        int ff=0;
        while(start<end){

            swap(a[start],a[end]);
            start+=1;
            end-=1;

        }

        int i=0;
        while(i<n-1)
        {

            if(a[i]>a[i+1])
            {
                cout<<"no"<<endl;
                ff=1;
                break;
            }

            i+=1;
        }

        if(ff==0)
        {
            cout<<"yes"<<endl;
            cout<<l+1<<" "<<j+1<<endl;
        }
    }

    return 0;

    
}