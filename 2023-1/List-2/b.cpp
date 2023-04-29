#include <bits/stdc++.h> 

using namespace std;

queue<int> q;

int main(){
    int n,j;

    for(int i=0; i<4; i++){
        cin >> n;
        q.push(n);
    } 

    for(int i=0; i<4; i++){
        j = q.front();
        cout << j;
        q.pop();
    } 
return 0;
}