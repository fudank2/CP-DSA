
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
        string s;cin>>s;
        int n = s.length();
        bool check =false;
        if(n<3)
        {
            cout<<(int)s[0]+int(s[1])<<"\n";
            check=true;
        }
        else{
            for(int i=n-1;i>0;i--)
            {
                int num=(int)s[i]+(int)s[i-1];
                if(num>9)
                {
                    s[i-1]=(char)(num/10);
                    s[i]=(char)(num%10);
                    check=true;
                    cout<<"kjl"<<s.length()<<s<<"\n";
                    break;
                }
            }
        }
        if(!check)
            {
                int num = (int)s[n-1]+(int)s[n-2];
                s.erase(n-1);
                s[n-2]=(char)num;
                cout<<s<<"jh"<<"\n";
            }
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




