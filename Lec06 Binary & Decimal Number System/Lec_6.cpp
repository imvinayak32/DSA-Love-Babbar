/*
Important Points -
1. Bitwise AND with 1 of number - gives last bit of number
2. For reversing any number - 
    number = (digit*pow(10,i)) + number
3. For reteriving in similar form - 
    number = number*10 + digit
*/
#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int i = 0;
    while(n){
        int bit = n & 1;
        ans = ( bit*pow(10,i) ) + ans; //reverse the number
        n = n>>1;
        i++;
    }
    return ans;
}

// int conversionOfNegatives(int n){
//     int answer = decimalToBinary(-n);
//     answer = (~answer) + 1;
//     return answer;
// }

int binaryToDecimal(int n){
    int ans = 0, i = 0;

    while(n){

        if(n%10 == 1){
            ans = ans + pow(2,i);
        }
        n /= 10;
        i++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    //cout<<decimalToBinary(n)<<endl;
    //cout<<conversionOfNegatives(n)<<endl;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}