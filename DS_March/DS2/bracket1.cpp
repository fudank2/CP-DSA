
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
bool isragular(string s){int n=s.length();rep(i,0,n/2){if(s[i]==')'&&s[n-i-1]=='('&&s[i]==s[n-i-1])return false;}return true;}







void solve()
{
    IO
    w(x)
    {
        int n;cin>>n;
        string s;cin>>s;
        int c1=0,r=0;
        bool check = true;
        int bb=0;
        while(s.length()>1&&check)
        {
            int sn= s.length();
            for(int i=sn;i>1;i--)
            {
                //if(s.length()<2)break;
                if(isPalindrome(s.substr(0,i))||(i%2!=1&&isragular(s.substr(0,i))))
                {
                    s.erase(0,i);
                    c1++;
                    check=true;
                    bb=i;
                    break;
                }
                
                check=false;
            }
            //check=false;
            if(s.length()<2)break;
            
        }
        cout<<c1<<" "<<s.length()<<"\n";
        //cout<<bb;

    }
}


int main()
{
    solve();
    /* string s="jgf";
    for(int i=3;i>1;i--)
    {
        if(i==2)
        {
            s.erase(0,i);
            break;
        }
    }
    
    cout<<s; */
    return 0;
}




/*  */
/*  */
/*  */
/*  */
/*  */
/*  */




