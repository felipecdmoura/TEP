#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main(){
    int A,B;
    vector<int> arr {1,2,3};

    cin >> A >>B;

    remove(arr.begin(), arr.end(), A);
    remove(arr.begin(), arr.end(), B);

    
    cout << arr[0];
    
return 0;
}