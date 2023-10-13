#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
int main ()
{
    string s ;
    cout << "enter the first string";
    getline(cin,s);
    cout << "enter the second string ";
    string t ;
    getline(cin,t);
    if (s.size()!=t.size()) cout << "false" ;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s==t) cout << "true" ;
    else cout << "false" ; 
}