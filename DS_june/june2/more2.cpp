
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







void printF(int n)
{
    IO
    //now printing F
    //int n;cin>>n;
    if(n%2!=0)n++;if(n<8)n=8;
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(i<2||j<2)cout<<"* ";
            else if((i==n/2||i==(n/2)-1)&&j<=n/2)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}
void printU(int n)
{
    IO
    //int n;cin>>n;
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(j==0||j==n-1)cout<<"* ";
            else if(i==n-1)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}
void printD(int n)
{
    IO
    //int n;cin>>n;
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(i==0||i==n-1)cout<<"* ";
            else if(j==n-1||j==n/2)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}
void printA(int n)
{
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(j==0||j==n-1||i==0||i==n/2)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}
void PrintN(int n)
{
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(j==0||j==n-1||i==j)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}

int main()
{
    printF(7);cout<<"\n";
    printU(7);cout<<"\n";
    printD(7);cout<<"\n";
    printA(7);cout<<"\n";
    PrintN(7);
    return 0;
}


/* 


//

 */