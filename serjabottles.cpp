// Sereja and his friends went to a picnic. The guys had n soda bottles just for it. Sereja forgot the bottle opener as usual, so the guys had to come up with another way to open bottles.

// Sereja knows that the i-th bottle is from brand ai, besides, you can use it to open other bottles of brand bi. You can use one bottle to open multiple other bottles. Sereja can open bottle with opened bottle or closed bottle.

// Knowing this, Sereja wants to find out the number of bottles they've got that they won't be able to open in any way. Help him and find this number.

// Input
// The first line contains integer n (1 ≤ n ≤ 100) — the number of bottles. The next n lines contain the bottles' description. The i-th line contains two integers ai, bi (1 ≤ ai, bi ≤ 1000) — the description of the i-th bottle.

// Output
// In a single line print a single integer — the answer to the problem.

// Examples
// inputCopy
// 4
// 1 1
// 2 2
// 3 3
// 4 4
// outputCopy
// 4
// inputCopy
// 4
// 1 2
// 2 3
// 3 4
// 4 1
// outputCopy
// 0

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    map<int,vector<int> >m;
    map<int,int>m1;

    int i=0;
    while(i<n){

        int a,b;
        cin>>a>>b;

        m[a].push_back(b);
        m1[a]+=1;
        i+=1;
    }

    int ans=0;

    map<int,vector<int>>::iterator it=m.begin();

    while(it!=m.end())
    {

        int i=0;
        int ff=0;
        while(i<it->second.size())
        {

            if(it->second[i]==it->first){
                if(m1[it->first]>1){
                    i+=1;
                }
            }
            else if(m.count(it->second[i]) > 0){
                ff=1;
                break;
            }

            i+=1;
        }
        if(ff==0){
            ans+=m1[it->first];
        }
        
        it++;
    }

    cout<<ans;
    return 0;
}