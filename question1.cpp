#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std ;
int main ()
{
   string s ;
   cin >> s ;
   string t = s ;
   reverse(t.begin(),t.end());
   s += t ;
   cout << s ;
}