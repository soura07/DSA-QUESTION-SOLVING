#include<bits/stdc++.h>
using namespace std;

void lastOccuranceLTR(string& s, char x,int i, int& ans){
    //base case

    if(i >= s.size()){
        return;
    }

    // ek case solve
    if(s[i] == x){
        ans = i;
    }
    //Recursive call
    lastOccuranceLTR(s,x, i+1, ans);
}

void lastOccuranceRTL(string& s, char x,int i, int& ans){
    //base case

    if(i < 0){
        return;
    }

    // ek case solve
    if(s[i] == x){
        ans = i;
        return;
    }
    //Recursive call
    lastOccuranceRTL(s,x, i-1, ans);
}


int main()
{
    string s;
    cin >> s;
    char x;
    cin >> x;
    int ans = -1;
    lastOccuranceRTL(s, x, s.size() - 1, ans);
    cout << ans ;
}