#include<iostream>
#include<queue>
using namespace std;

class Graph{
public:
    int A[100][100], n;
    bool chuaxet[100];
    void Input();
    void vertexVisit(int);
    void BFS(int);
};

void Graph::Input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> A[i][j];
    }
    for(int i = 1; i <= 100; i++) chuaxet[i] = true;
}

void Graph::vertexVisit(int u){
    cout << u << " ";
    chuaxet[u] = false;
}

void Graph::BFS(int u){
    queue<int> q;
    q.push(u);
    vertexVisit(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(chuaxet[i] and A[v][i]){
                q.push(i);
                vertexVisit(i);
            }
        }
    }
}

int main(){
    Graph g;
    g.Input();
    g.BFS(1);
}