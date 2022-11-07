
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

// adj list implementation of matrix in c++

bool visit[1000]={0};

class graph{
    public:
    int v;
    list<int>*adjlist;
    graph(int v1)
    {
        v=v1;
        adjlist= new list<int>[v];
    }

    void addedge(int v1,int v2,bool bidir=true)
    {
        adjlist[v1].push_back(v2);
        if(bidir)
        {
            adjlist[v2].push_back(v1);
        }
    }
    void printedge()
    {
        for(int i=0;i<v;i++)
        {
            cout<<i<<"->";
            for(int node:adjlist[i])
            {
                cout<<node<<" ";
            }
            cout<<"\n";
        }
    }

    void bfs(int src)
    {
        queue<int>q;
        bool visited[v]={0};
        q.push(src);
        visited[src]=1;
        while (!q.empty())
        {
            int node =q.front();
            q.pop();
            cout<<node<<"<-> ";
            for(int nebhr:adjlist[node])
            {
                if(!visited[nebhr])
                {
                    q.push(nebhr);
                    visited[nebhr]=1;
                    cout<<nebhr<<"<->";
                }
            }
            //cout<<"\n";
        }
        
    }
    void bfsd(int src)
    {
        queue<int>q;
        bool visited[v]={0};
        int dist[v];
        rep(i,0,v)dist[i]=-1;
        q.push(src);
        visited[src]=1;
        dist[src]=0;
        int i=0;
        while (!q.empty())
        {
            int node =q.front();i++;
            q.pop();
            for(int nebhr:adjlist[node])
            {
                if(!visited[nebhr])
                {
                    q.push(nebhr);
                    visited[nebhr]=1;
                    dist[nebhr]=i;
                }
            }
            //cout<<"\n";
        }
        rep(i,0,v)if(dist[i]!=-1)cout<<dist[i]<<" ";
        
    }
    void dfs(int src)
    {
        cout<<src<<" ";
        visit[src]=1;
        list<int>::iterator i;
        for(auto i= adjlist[src].begin();i!=adjlist[src].end();i++)
        {
            if(visit[*i]!=1)
            {
                dfs(*i);
            }
        }

    }


};



void solve()
{
    IO
    int v,e;cin>>v>>e;
    graph g(v);
    rep(i,0,e)
    {
        int v1,v2;cin>>v1>>v2;
        g.addedge(v1,v2);
    }

    g.printedge();
    cout<<"now length from src in bfs\n";
    g.bfsd(1);
    cout<<"\nnow in bfs\n";
    g.dfs(1);
    
}


int main()
{
    solve();
    return 0;
}


/* 
6 6
1 2
5 3
2 1
3 2
0 1
1 4

//

 */





