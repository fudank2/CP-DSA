
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
    w(x)
    {
        int n;cin>>n;
        int a[n];rep(i,0,n)cin>>a[i];
        sort(a,a+n);
        int count=1;
        int num =a[0];
        rep(i,0,n-1)
        {
            if(a[i]==a[i+1])count++;
            else count =1;
            num=a[i];
            if(count>2)break;
        }
        if(count>2)cout<<num<<"\n";
        else cout<<-1<<"\n";

    }
}


int main()
{
    solve();
    return 0;
}




/*
-1
2
2
4
3
-1
4  */
/*  */
/*  */
/*  */
/*  */
/*  */




