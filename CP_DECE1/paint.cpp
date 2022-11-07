
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







void solve()
{
    IO
    w(x)
    {
        ll n;cin>>n;
        ll a[n];rep(i,0,n)cin>>a[i];
        
        ll gcd1=a[0],gcd2=a[1];
        bool ch=0;
        rep(i,0,n)
        {
            if(i%2==0) gcd1 =__gcd(gcd1,a[i]);
            else gcd2 =__gcd(gcd2,a[i]);
            
        }
        bool k=0;
        if(gcd1!=gcd2&&!ch)
        {
            ll x= max(gcd1,gcd2);
            int l;
            if(x==gcd2)l=0;
            else l=1;
            
                for(int i=l;i<n;i+=2)
                {
                    if(a[i]%x==0)
                    {
                        k=1;
                        break;
                    }
                }
                if(min(gcd1,gcd2)!=1)
                {
                    int f = min(gcd1,gcd2);
                    if(l==0)l==1;
                    else l=0;
                    for(int i=l;i<n;i+=2)
                {
                    if(a[i]%f==0)
                    {
                        k=1;
                        break;
                    }
                }

                }
            
            if(k)cout<<0<<"\n";
            else cout<<x<<"\n";
        }
        //else cout<<0<<"\n";
        //cout<<gcd1<<gcd2<<"\n";
    }
}


int main()
{
    solve();
    return 0;
}




/*  */
/*  */
/*  */
/*  */
/*  */
/*  */




