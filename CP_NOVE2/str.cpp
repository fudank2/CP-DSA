
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
        string s,t;cin>>s>>t;
        int n1=s.length(),n2= t.length();
        int g = __gcd(n1,n2);
        int l= (n1*n2)/g;
        
        if(g==1)
        {
            bool c=0;
            rep(i,0,n1)
            {
                if(s[i]!=t[0])c=1;
                if(c)
                {
                    cout<<-1<<"\n";
                    break;
                }
            }
             if(c)continue;
            rep(i,0,n2)
            {
                if(t[i]!=s[0])c=1;
                if(c)
                {
                    cout<<-1<<"\n";
                    break;
                }
            }
            if(c)continue;
            string s1="";
            rep(i,0,l)s1+=s[0];
            cout<<s1<<"\n";
        }
        int s1[26]={0};
        int t1[26]={0};
        rep(i,0,n1)
        {
            s1[s[i]-'a'] = 1;
        }
        rep(i,0,n2)
        {
            t1[t[i]-'a'] = 1;
        }
        bool c=0;
        string ans="";
        float k=s1[0]/t1[0];
        rep(i,0,26)
        {
            if(s1[i]!=t1[i]||k!=s1[i]/t1[i])
            {
                c=1;
                break;
            }
            else{
                ans=ans+(char)(s1[i]+'a');
            }
            k = s1[i]/t1[i];
        }
        if(c)cout<<-1<<"\n";
        else{
            string res="";
            rep(i,0,l)
            {
                res+=ans;
            }
            cout<<ans<<"\n";
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




