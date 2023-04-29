#include <bits/stdc++.h>

using namespace std;

string generate(int n){
    string st = "", temp;
    for(int i = 1; i <= n; i++){
        temp = to_string(i);
        st = st + temp; 
    }
    return st;
}

int main(){
    int n_tests, n;
    string st;
    
    cin >> n_tests;

    for(int i=0; i<n_tests; i++){
        vector<long> res{0,0,0,0,0,0,0,0,0,0};
        cin >> n;

        st = generate(n);

        for(int j=0; j<st.length(); j++){
            switch (st[j])
            {
                case '0':
                    res[0]++;
                    break;

                case '1':
                    res[1]++;
                    break;

                case '2':
                    res[2]++;
                    break;

                case '3':
                    res[3]++;
                    break;

                case '4':
                    res[4]++;
                    break;

                case '5':
                    res[5]++;
                    break;

                case '6':
                    res[6]++;
                    break;

                case '7':
                    res[7]++;
                    break;

                case '8':
                    res[8]++;
                    break;

                case '9':
                    res[9]++;
                    break;
            }
        }
        cout << res[0];

        for(int i=1; i<10; i++){
            cout << " " << res[i] ;
        }
        cout << "\n";
    }


return 0;
}