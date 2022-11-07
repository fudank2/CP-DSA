
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
        int n;cin>>n;double a[n];rep(i,0,n)cin>>a[i];
        sort(a,a+n);
        double k=0;
        rep(i,0,n)k+=a[i];
        k/=n;
        double  sm = k*2;
        int ans=0;
        int left =0,right=n-1;
        double currsm=0;
        vector<int>v;
        while(left<right)

        
        {
            if(a[left]+a[right]==sm)
            {
                ans++;
                v.push_back(a[left]);
                left++;
            }
            else if(a[left]+a[right]<sm)left++;
            else if(a[left]+a[right]>sm)right--;
        }
        int j=0;
        rep(i,0,3)cout<<v[i]<<" ";
        rep(i,0,v.size()-1)
        {
            if(v[i]==v[i+1]&&i<v.size())j++;
        }
        cout<<ans<<"\n";
    }
}


int main()
{
    solve();
    return 0;
}




/* 
4
8 8 8 8

 */
/*  */
/*  */
/*  */
/*  */
/*  */




