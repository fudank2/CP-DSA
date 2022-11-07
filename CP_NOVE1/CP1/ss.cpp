
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
int checkdiv(int a)
{
    if(a%16==0) return 4;   
    else if(a%8==0)return 3;    
    else if(a%4==0)return 2;      
    else if(a%2==0)return 1;
    else return 0;
            
}
void solve()
{
    IO
    w(x)
    {
        ll n;cin>>n;
        ll a[n];
        rep(i,0,n)cin>>a[i];
        sort(a,a+n);
        ll tw =0;
       
        ll b[n];

        rep(i,0,n)
        {
            b[i]=a[i];
            if(a[i]%16==0)
            {
                tw+=4;
                a[i]=a[i]/16;
            }
            else if(a[i]%8==0)
            {
                tw+=3;
                a[i]=a[i]/8;
            }
            else if(a[i]%4==0)
            {
                tw+=2;
                a[i]=a[i]/4;
            }
            else if(a[i]%2==0)
            {
                tw+=1;
                a[i]=a[i]/2;
            }
        }
        ll zz=0;rep(i,0,n)zz+=a[i];
        ll k=0;
        ll ans=INT16_MIN;
        rep(i,0,n)
        {
            k= pow(2,tw-checkdiv(b[i]));
            k=(k*b[i])-a[i]+zz;
            ans = max(k,ans);
        }
        //rep(i,0,n)cout<<a[i]<<" ";
        cout<<ans<<"\n";

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




