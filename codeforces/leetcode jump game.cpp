#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
pair<int,int>interval{0,0};
 int jump=0;
while(true){
  jump++;
  int can_reach=-1;
  for(int i=interval.first;i<=interval.second;i++){
    can_reach=max(can_reach,i+v[i]);
  }
  if(can_reach>=n-1)cout<<"yes"<<endl;

  interval={interval.second+1,can_reach};
}
return 0;
}
