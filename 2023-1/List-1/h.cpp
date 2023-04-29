#include <bits/stdc++.h> 

using namespace std;


int main(){
    string str;
    int unique = 0;
    vector<char> letters(101);    


    cin >> str;

    for(int i =0; i < str.length(); i++){
        if(find(letters.begin(), letters.end(), str.at(i)) == letters.end()){
            unique++;
            letters.push_back(str.at(i));
        }
    }

    if(unique % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{ 
        cout << "IGNORE HIM!";
    }

    return 0;
}