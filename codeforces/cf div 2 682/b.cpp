#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main(){
int t;
sc(t);
while(t--){
    int n,m;
    sc2(n,m);
    int a[n+1][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sc(a[i][j]);
        }
    }
    if(n==1){
        if(m==1){
            cout<<a[0][0]<<endl;
            goto here;
        }
        else{
            for(int j=0;j<m;j++){
                if(j==0){
                    if(a[0][j]==a[0][j+1])a[0][j]+=1;
                }
                else if(j==m-1){
                    if(a[0][j]==a[0][j-1])a[0][j]+=1;
                }
                else {
                        if( (a[0][j]==a[0][j-1] || a[0][j]==a[0][j+1] )&& ((a[0][j]+1) !=a[0][j+1] || (a[0][j]+1) !=a[0][j-1]))a[0][j]+=1;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
            goto here;
        }
    }
    else if(m==1){
        for(int i=0;i<n;i++){
            if(i==0){
                if(a[i][0]==a[i+1][0])a[i][0]+=1;
            }
            else if(i==n-1){
                if(a[i][0]==a[i-1][0])a[i][0]+=1;
            }
            else {
                if((a[i][0]==a[i+1][0] || a[i][0]==a[i-1][0]) && (a[i][0]+1 !=a[i+1][0] || a[i][0]+1 !=a[i-1][0]))a[i][0]+=1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        goto here;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0){
                if(j==0){
                    if((a[i][j]==a[i][j+1] || a[i][j]==a[i+1][j]) && (a[i][j]+1 !=a[i][j+1] || a[i][j]+1 !=a[i+1][j])){
                        a[i][j]+=1;
                    }
                }
                else if(j==m-1){
                    if((a[i][j]==a[i+1][j] || a[i][j]==a[i][j-1]) && (a[i][j]+1 !=a[i+1][j] || a[i][j]+1 !=a[i][j-1])){
                        a[i][j]+=1;
                    }
                }
                else {
                    if((a[i][j]==a[i][j+1] || a[i][j]==a[i+1][j] || a[i][j]==a[i][j-1]) && (a[i][j]+1 != (a[i][j+1] || a[i+1][j] || a[i][j-1]))){
                        a[i][j]+=1;
                    }
                }
            }
            else if(i==n-1){
                if(j==0){
                    if((a[i][j]==a[i-1][j] || a[i][j]==a[i][j+1]) && (a[i][j]+1 !=a[i-1][j] || a[i][j]+1 !=a[i][j+1])){
                        a[i][j]+=1;
                    }
                }
                else if(j==m-1){
                    if((a[i][j]==a[i-1][j] || a[i][j]==a[i][j-1]) && (a[i][j]+1 !=a[i-1][j] || a[i][j]+1 !=a[i][j-1])){
                        a[i][j]+=1;
                    }
                }
                else {
                    if((a[i][j]==a[i][j+1] || a[i][j]==a[i-1][j] || a[i][j]==a[i][j-1]) && (a[i][j]+1 != a[i][j+1] || a[i][j]+1 !=a[i-1][j] || a[i][j]+1 !=a[i][j-1])){
                        a[i][j]+=1;
                    }
            }
        }
        else{
            if((a[i][j]==a[i+1][j] || a[i][j]==a[i-1][j] || a[i][j]==a[i][j+1] || a[i][j]==a[i][j-1]) && (a[i][j]+1 !=(a[i+1][j] || a[i-1][j] || a[i][j+1] || a[i][j-1]))){
                a[i][j]+=1;
            }
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;

}
here:
    ;
}
}
