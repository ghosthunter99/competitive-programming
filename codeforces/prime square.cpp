#include<bits/stdc++.h>
using namespace std;
map<int,int>primes;
void make(){
     primes[2]=1;
    for(int i=3;i<=200;i+=2){
            bool ok=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                ok=0;
                break;
            }
        }
        if(ok)primes[i]=1;
    }
}
int main(){
int t;
cin>>t;
make();
while(t--){
    int n;
    cin>>n;
    if(n==2 || n==3){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    else{

        int already=n-1;
        for(int k=1;k<=200;k++){
            if(primes[k]==0){
                if(primes[already+k]==1){
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n;j++){
                            if(i<n-1 && j<n-1){
                                cout<<1<<" ";
                            }
                            else if(i<n-1 && j==n-1){
                                cout<<k<<endl;
                            }
                            else if(i==n-1 && j<n-1){
                                cout<<k<<" ";
                            }
                            else if(i==n-1 && j==n-1){
                                cout<<1<<endl;
                                goto here;
                            }
                        }
                    }
                }
            }
        }
    }
    here:
        ;
}
}
