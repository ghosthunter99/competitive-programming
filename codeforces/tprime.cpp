#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==b){
                cout<<"NO"<<endl;
        continue;}
        else if(a==2*b || b==a*2){
            cout<<"YES"<<endl;
            continue;
        }
        int diff=abs(a-b);
        if(diff%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
