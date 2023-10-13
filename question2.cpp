#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
int main ()
{
    string str = "123457";
    int n = stoi(str);
    int mx = (int)str[0];
    for (int i=0 ; i<str.size();i++)
    {
        if (mx < str[i]) mx = str[i];
    }
    cout << (char)mx << endl ;
    int smax = 0 ;
    for (int i=0 ; i<str.size();i++){
        if (smax<str[i]&& str[i]!= mx ) smax = str[i]; 
    }
    cout << (char)smax ;
}
