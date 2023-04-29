#include <bits/stdc++.h> 

using namespace std;

int main(){
    long long n, res;
    int pw;

    cin >> n;
    
    if(n%2 == 0){
        res = n / 2;
    }else{
        res = ((n+1)/2)*-1;
    }

    cout << res;
return 0;
}