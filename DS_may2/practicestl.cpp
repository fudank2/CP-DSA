
/* This code is written by Fudan kumar(Eklavya vikash) */
/*  ******************************           ******            ****** */
/*  ******************************           ******          ****** */
/*  ******************************           ******        ****** */
/*  ******                                   ******      ****** */
/*  ******                                   ******   ****** */
/*  ******                                   ****** ****** */
/*  ****************                         *************/
/*  ****************                         ************ */
/*  ****************                         ************ */
/*  ******                                   ******  ****** */
/*  ******                                   ******   ****** */
/*  ******                                   ******    ****** */
/*  ******                      *****        ******     ****** */
/*  ******                      *****        ******      ****** */
/*  ******                      *****        ******        ******  */
/*  */
/*  */
/*  */



#include<bits/stdc++.h>
using namespace std; 
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll_ll          pair<long long,long long>
#define vi              vector<int>
#define vll            vector<long long>
#define si             set<int>
#define sll             set<ll,ll>
#define msll            multiset<ll,ll>
#define usll             unordered_set<ll>
#define umsll           unordered_multiset<ll,ll>
#define mii             map<int,int>
#define mll_ll           map<long long,long long>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e9
#define n_inf	        -1e9
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define rep(x,a,b)	for(int x = a; x < b; x++) 
#define per(x,a,b)	for(int x = a; x >= b; x--)
#define yes cout << "YES"<<endl 
#define no cout << "NO"<<endl
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool isprime(int x){rep(i,2,sqrt(x)+1){if(x%i==0)return false;}return true;}
int nsum(int x){return(x*(x+1))/2;}
int fact(int x){if(x<=1)return 1;else return x*fact(x-1);}
bool isPalindrome(string s){int n=s.length();rep(i,0,n/2){if(s[i]!=s[n-i-1])return false;}return true;}







void solve()
{
    IO

    map<int,list<pair<int,int>>>m;
    int v1,v2,e;
    int n;cin>>n;
    rep(i,0,n)
    {
        cin>>v1>>v2>>e;
        m.insert({v1,{{v2,e}}});
        m[v1].push_back({v2,e});
    }
    list<pair<int,int>>::iterator i1;
    map<int,list<pair<int,int>>>::iterator i;
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<"->";
        for(auto i1=i->second.begin();i1!=i->second.end();i1++)
        {
            cout<<"("<<i1->first<<" "<<i1->second<<"),";
        }
        cout<<"\n";
    }


    /* list<pair<int,int>>p;
    p.push_back({1,28});
    p.push_back({12,22});
    p.push_back({11,23});
    p.push_back({13,24});
    list<pair<int,int>>::iterator i;

    for(auto i=p.begin();i!=p.end();i++)
    {
        cout<<i->first<<" "<<i->second<<"\n";
    } */



}


int main()
{
    solve();
    return 0;
}


/* 
15
1 2 3
2 3 4
3 4 5
4 5 6
5 6 7
11 2 3
12 3 4
13 4 5
14 5 6
15 6 7
21 2 3
22 3 4
23 4 5
24 5 6
25 6 7


//

 */





