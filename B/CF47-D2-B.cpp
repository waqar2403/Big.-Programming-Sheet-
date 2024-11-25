#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    map<char,int> mp;
    mp.insert(pair<char, int>('A',0));
    mp.insert(pair<char, int>('B',0));
    mp.insert(pair<char, int>('C',0));
    string s;
    cin>>s;
    if(s[1]=='>')mp[s[0]]++;
    else mp[s[2]]++;

    cin>>s;
    if(s[1]=='>')mp[s[0]]++;
    else mp[s[2]]++;

    cin>>s;
    if(s[1]=='>')mp[s[0]]++;
    else mp[s[2]]++;

    if(mp['A']==1&&mp['B']==1&&mp['C']==1)
        cout<<"Impossible";
    else{
        if(mp['A']==0)cout<<"A";
        else if(mp['B']==0)cout<<"B";
        else if(mp['C']==0)cout<<"C";

        if(mp['A']==1)cout<<"A";
        else if(mp['B']==1)cout<<"B";
        else if(mp['C']==1)cout<<"C";

        if(mp['A']==2)cout<<"A";
        else if(mp['B']==2)cout<<"B";
        else if(mp['C']==2)cout<<"C";}
}

int main() {
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile || !outFile) {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif

    int t=1;
   // cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
