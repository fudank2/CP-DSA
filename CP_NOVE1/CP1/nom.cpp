
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
        ll n,k;cin>>n>>k;
        ll n1= log10(n)+1;
        ll a[n1];
        ll i=0;
        while(n)
        {
            ll s=n%10;
            n/=10;
            if(s==0&&k>0)
            {
                s++;
                k--;

            }
            a[i] = s;
            i++;
        }
        
        sort(a,a+n1);
        ll z=0;
        int ss=0;
        rep(i,0,n1)
        {
            ss+=a[i];
            if(a[i]==0)z++;
            else break;
        }
        if((n1*9)-ss<=k)
        {
            cout<<pow(9,n1)<<" j"<<"\n";
            continue;
        }
        if(z>k){
            cout<<0<<"\n";
            continue;
        }
        k = k-z;
        rep(i,0,n1)
        {
            if(a[i]==0)a[i]=1;
            /* if(k>0)
            {
                a[i]++;
                k--;
            } */
        }
        int j=0;
        int nn=0;
        while (k)
        {
           if(a[j]<9)
           {
               a[j]++;
               k--;
           }

           j++;
           if(j>=n1-1)
           {
               j=0;
               nn=0;
           }
           if(a[i]==9)nn++;
           if(nn==n1)break;
        }
        
        //a[0]=a[0]+k;
        ll ans =1;
        rep(i,0,n1)
        {
            ans*=a[i];
        }
        //rep(i,0,n1)cout<<a[i]<<" ";
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




