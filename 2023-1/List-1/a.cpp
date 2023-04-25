#include <iostream>

using namespace std;

int main(){
    int A, B, C, D;
    int flag1 = 0, flag2 = 0, flag3 = 0;

    cin >> A >> B >> C >> D;
    
    if(abs(A-B) <= D){
        flag1 = 1;
    }

    if(abs(B-C) <= D){
        flag2 = 1;
    }

    if(abs(A-C) <= D){
        flag3 = 1;
    }

    if (flag3 == 1)
    {
        cout << "Yes";
    }else if (flag1 == 1 and flag2 == 1)
    {
        cout << "Yes";
    }else{
        cout << "No";
    }
    


return 0;
}