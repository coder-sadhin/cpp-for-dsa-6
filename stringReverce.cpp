#include <bits/stdc++.h>
using namespace std;

void print(stringstream& ss){
    string word;
    // this is for strate way 
    // if(ss>>word){
    //     cout<<word<<endl;
    //     print(ss);
    // }
    // this is for reverse way 
    if(ss>>word){
        print(ss);
        cout<<word<<endl;
    }
}

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    // string word;
    // while (ss>>word)
    // {
    //     cout<<word<<endl;
    // }
    // now try to do it using recartion 
    print(ss);
    
    return 0;
}