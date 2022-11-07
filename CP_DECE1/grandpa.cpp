
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
bool ispalindrome(string s){int n=s.length();rep(i,0,n/2){if(s[i]!=s[n-i-1])return false;}return true;}





void solve()
{
    IO
    w(x)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        char a,b;
        bool j1 = 1;;
        rep(i,0,n)
        {
            if(s[i]!=s[n-i-1])
            {
                a = s[i];
                b=s[n-i-1];
                j1=0;
                break;
            }
        }
        if(j1){
            cout<<0<<"\n";
            continue;
            }
        string s1 = s;
        string s2 = s;
       s1.erase(remove(s1.begin(),s1.end(),a));
       s2.erase(remove(s2.begin(),s2.end(),b));
       /* rep(i,0,n)
       {
           if(s[i]!=a)s1+=s[i];
           if(s[i]!=b)s2+=s[i];
       } */
      // bool a1=1,a2=1;
       bool a1 =ispalindrome(s1);
       bool a2 =ispalindrome(s2);
       if(!a1&&!a2)
       {
           cout<<-1<<"\n";
           /* cout<<s1<<"\n";
           cout<<s2<<"\n"; */
           continue;
       }
       bool aa =1;
       char A ;
       if(a1)A=a;
       else A=b;
       int i=0,j=n-1;
       int del=0;
       while(i<j)
       {
           if(s[i]==s[j])
           {
               i++;j--;
           }
           else if(s[i]==A&&s[j]!=A)
           {
               del++;
               i++;
           }
           else{
               del++;
               j--;
           }
       }
       cout<<del<<"\n";
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




