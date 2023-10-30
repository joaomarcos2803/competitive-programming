// https://www.beecrowd.com.br/judge/en/problems/view/1583

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

char mat[60][60];

void BFS(int x,int y,int n,int m){
    queue<pair<int,int>> fila;
    fila.push(make_pair(x,y));
    while(!fila.empty()){
        if(fila.front().first>0){
            if(mat[fila.front().first-1][fila.front().second]=='A'){
                mat[fila.front().first-1][fila.front().second]='T';
                fila.push(make_pair(fila.front().first-1,fila.front().second));
            }
        }
        if(fila.front().first<n-1){
            if(mat[fila.front().first+1][fila.front().second]=='A'){
                mat[fila.front().first+1][fila.front().second]='T';
                fila.push(make_pair(fila.front().first+1,fila.front().second));
            }
        }
        if(fila.front().second>0){
            if(mat[fila.front().first][fila.front().second-1]=='A'){
                mat[fila.front().first][fila.front().second-1]='T';
                fila.push(make_pair(fila.front().first,fila.front().second-1));
            }
        }
        if(fila.front().second<m-1){
            if(mat[fila.front().first][fila.front().second+1]=='A'){
                mat[fila.front().first][fila.front().second+1]='T';
                fila.push(make_pair(fila.front().first,fila.front().second+1));
            }
        }
        fila.pop();
    }
    return;
}

int main(){
    int n,m,i,j;
    vector<pair<int,int>> ini;
    vector<pair<int,int>>::iterator it;
    cin>>n>>m;
    while(n||m){
        ini.clear();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>mat[i][j];
                if(mat[i][j]=='T') ini.push_back(make_pair(i,j));
            }
        }
        for(it=ini.begin();it<ini.end();it++){
            BFS(it->first,it->second,n,m);
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<mat[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>n>>m;
    }
    return 0;
}