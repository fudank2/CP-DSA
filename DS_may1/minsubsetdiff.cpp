
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


int dp[100][100];

int minsubset(int arr[],int totalsum,int n)
{
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<totalsum+1;j++)
        {
            
            if(totalsum>=arr[i-1])
            {
                dp[i][j]=arr[i-1]+dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    int mn[(totalsum+1)/2];

    rep(i,0,(totalsum+1)/2)
    {
        if(dp[n][i]==1)
        {
            mn[i]=i+1;
        }
    }

    int ans=INT16_MAX;
    for(int i=0;i<(totalsum+1)/2;i++)
    { 
        ans = min(ans,abs(totalsum-(2*mn[i])));
    }
    return ans;
}





void solve()
{
    IO
    int n;cin>>n;int arr[n];rep(i,0,n)cin>>arr[i];
    int totalsum=0;rep(i,0,n)totalsum+=arr[i];
    rep(i,0,totalsum+1)dp[0][i]=0;
    rep(i,0,n+1)dp[i][0]=1;
    cout<<minsubset(arr,totalsum,n);

    cout<<endl;
    cout<<totalsum<<"\n";
    rep(i,0,n+1)
    {
        rep(j,0,totalsum+1)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}


int main()
{
    rep(i,0,100)
    {
        rep(j,0,100)
        {
            dp[i][j]=-1;
        }
    }
    solve();
    return 0;
}


/* 


//

 */





