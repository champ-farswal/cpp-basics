#include<bits/stdc++.h>

using namespace std;
int main(){
    float a,b;
    cin >> a >>  b;
    if(a > 0 && b < 0){
        cout << "Q4";
    }else if(a > 0 && b > 0){
        cout << "Q1";
    }else if(a < 0 && b > 0){
        cout << "Q2";
    }else if(a == 0.0 && b == 0.0){
        cout << "Origem";
    }else if(a == 0.0){
        cout << "Eixo Y";
    }else if(b == 0.0){
        cout << "Eixo X";
    }else{
        cout << "Q3";
    }
    
} 