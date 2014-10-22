
#include<iostream>
/* Author : Pranav
BITS PILANI Hyderabad Campus */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
//#include <sstream>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define pop pop_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 10005
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;


int main(){
    string s;
    vector<ll> v;
    ll i;
    ll n;
    cin>>n;
    cin>>s;
    double b,f;
    cin>>b>>f;
    int th=f/b;
    if((int)(f/b)!=f/b)
        th++;
    if(th==0){cout<<"NO";return 0;}
    int a[2]={0};
    for(i=0;i<s.size();i++){

        if(s[i]=='L')
            v.pb(0);
        else
            v.pb(1);
    }
     for(i=0;i<s.size();i++){
        if(v[i]){
            a[1]++;
            a[0]=0;
            if(a[1]>=th){cout<<"NO";return 0;}
        }
        else{
            a[0]++;
            a[1]=0;
             if(a[0]>th){cout<<"NO";return 0;}
        }
    }
    cout<<"YES";return 0;


return 0;
}


