// Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

// Note, that during capitalization all the letters except the first one remains unchanged.

// Input
// A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

// Output
// Output the given word after capitalization.

#include<bits/stdc++.h>
using namespace std;

string checkit(string word){

    // cout<<"b4"<<word<<endl;

    if(word[0]>=97 && word[0]<=122){
        word[0]=word[0]-32;
    }

    return word;
}
int main(){

    string word;
    cin>>word;

    cout<<checkit(word)<<endl;
    return 0;
}