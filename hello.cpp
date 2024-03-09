#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include <iterator>
#include <cstdlib>
using namespace std;
#define ll long long
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int>>
#define vii vector<pii>
#define vll vector<pll>
#define vvl vector<vector<long long>>
#define loop(x,n) for(int x = 0; x < n; ++x)
#define rep(i,a,b)for(int i=a;i<=b;i++)
#define repr(i,a,b)for(int i=b;i>=a;i--)
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

const ll MOD = 1e9 + 7;
#define endl "\n"
void vin(vi &v){int n=v.size();loop(i,n)cin>>v[i];}
void vout(vi &v){int n=v.size();loop(i,n)cout<<v[i]<<" "; cout<<endl;}
void vin(vl &v){int n=v.size();loop(i,n)cin>>v[i];}
void vin(vii &v){int n=v.size(); loop(i,n){cin>>v[i].first>>v[i].second;}}
void vin(vll &v){int n=v.size(); loop(i,n){cin>>v[i].first>>v[i].second;}}
void vout(vl &v){int n=v.size();loop(i,n)cout<<v[i]<<" "; cout<<endl;}
void solve() {
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //factMaker(100005,MOD);
    //TxtIO;
    int tc = 1;
     cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";

        
        solve();
    }
}