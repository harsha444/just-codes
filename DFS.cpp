#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(a,b) (a+b)>>1
#define all(p) p.begin(),p.end()
#define F first
#define S second
#define mp make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rloop(i,a,b) for(int i=a; i>b; i--)
#define PB push_back
#define F first
#define S second

class Graph
{
	vvi Edge;
	vector<unsigned char> visited;

public:
	Graph(int V){
		Edge.resize(V);
		visited.resize(V);
	}

	void add_edge(int v, int w){
		Edge[v].push_back(w);
	}

	void DFSUtil(int u){
		visited[u] = true;
		cout << u << " ";
		for(auto i : Edge[u]){
			if(visited[i] == false){
				DFSUtil(i);
			}
		}
	}

	void DFS(int s){
		for(auto i:visited){
			i = false;
		}
		for(int u=0; u<visited.size(); u++){
			if(visited[u] == false){
				DFSUtil(u);
			}
		}
	}
	
	
};

int main(){
	Graph g(6);
	g.add_edge(0,1);
	g.add_edge(0,2);
	g.add_edge(1,2);
	g.add_edge(2,0);
	int v;
    cout << "Enter vertex from where to perform DFS: ";
    cin >> v;
    g.DFS(2);
	return 0;
}