#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main(){
    long long s1,s2,s3,s4;
    int count = 0;

    cin >> s1 >> s2 >> s3 >> s4;
    
    array<long long,4> arr {s1,s2,s3,s4};

    for(int i = 0; i <arr.size(); i++){
        for(int j= i+1; j <arr.size(); j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }

    cout << count;
return 0;
}