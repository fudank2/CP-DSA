
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
int is_search(int a[],int k,int l,int r){if(l<=r){int mid=(l+r)/2;if(a[mid]==k)return mid;
        if(a[mid]<k)return is_search(a,k,mid+1,r);else return is_search(a,k,l,mid-1);}else{return -1;}
}






void solve()
{
    IO
    int n;cin>>n;int a[3*n];rep(i,0,3*n)cin>>a[i];
    multimap<int,int>m1,m2;
    int s1=0,s2=0;
    int a1[n+1],b1[n+1];
    rep(i,0,n)
    {
        m1.insert({a[i],1});
        s1+=a[i];
    }
    rep(i,2*n,3*n)
    {
        m2.insert({a[i],1});
        s2+=a[i];
    }
    multimap<int,int>::iterator it;
    int j=1;
    a1[0]=s1;
    rep(i,n,2*n)
    {
        
        it=m1.begin();
        if(a[i]>it->first)
        {
            s1=s1-it->first;
            s1+=a[i];
            m1.insert({a[i],1});
            m1.erase(m1.begin());
        }
        a1[j]=s1;
        j++;

    }
    multimap<int,int>::iterator it2;
    j=1;
    b1[0]=s2;
    for(int i=2*n-1;i>=n;i--)
    {
        
        it2=m2.begin();
        if(a[i]<it2->first)
        {
            s2=s2-it2->first;
            s2+=a[i];
            m2.insert({a[i],1});
            m2.erase(m2.begin());
        }
        b1[j]=s2;
        j++;
    }
    int ans= INT_MIN;
    for(int i=0;i<n+1;i++)
    {
        ans=max(ans,a1[i]-b1[n-i]);
    }
    cout<<ans<<"\n";
}

int main()
{
    solve();
    /* multimap<int,int>m3;
    m3.insert({1,1});
    m3.insert({1,1});
    m3.insert({9,1});
    m3.insert({1,1});
    m3.insert({2,1});
    m3.insert({2,1});
    cout<<m3.size()<<" ";
    m3.erase(m3.begin());
    cout<<m3.size()<<" "; */
    
    return 0;
}


/* 


//

 */

///////////////////////////////////////////
//                                       //
//          CODE BY  @Advik              //
//          NickName->Fudan              //
///////////////////////////////////////////



