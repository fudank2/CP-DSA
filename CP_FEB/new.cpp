
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
        int n;cin>>n;
        int a[n];rep(i,0,n)cin>>a[i];
        int countrevert =0;
        int b[]={1,2,3,4};
        while(1)
        {
            if(is_sorted(a,a+n))break;
            int count =1;
            int bidx=0;
            rep(i,0,n)
            {
                if(a[i]>a[i+1]&&i<n)count++;
                else if(count>1)
                {
                    reverse(a+bidx,a+i+1);
                    bidx=i+1;
                    count=1;
                    countrevert++;
                }
            }
            
           // cout<<"gjvj";break;
        }
        cout<<countrevert<<"\n";
        rep(i,0,n)cout<<a[i]<<" ";
    }

}


int main()
{
    /* int a[]={1,2,3,4};
    //reverse(a+1,a+3);
    if(is_sorted(a,a+4))cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<"\n"; */
    solve();
    return 0;
}




/*  */
/*  */
/*  */
/*  */
/*  */
/*  */




