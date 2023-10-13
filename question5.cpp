#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std ;
int main ()
{
    string s ;
    cout << "enter the string ";
    getline(cin,s);
    string temp ;
    stringstream ss(s);
    while (ss>> temp ){
        cout << temp << endl ;
    }
}