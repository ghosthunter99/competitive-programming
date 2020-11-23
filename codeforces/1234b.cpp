#include<bits/stdc++.h>
using namespace std;
int main(){
long long int X;
    cin >> X;
    int answer = 0;

    for (long long  n = 1; n * (n + 1) / 2 <= X; n = 2 * n + 1) {
        X -= n * (n + 1) / 2;
        answer++;
    }

    cout << answer << '\n';
}
