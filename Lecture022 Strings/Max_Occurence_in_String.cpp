#include<bits/stdc++.h>
using namespace std;

char maxOccurenceInString(string s){
    //making a array for all alphabets
    int arr[26] = {0};
    int number = 0;

    for(int i = 0; i<s.length(); i++){
        char ch = s[i];

        //lowercase
        if( ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        //uppercase
        else if(ch >= 'A' && ch <= 'Z'){
            number = ch - 'A';

        }
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = ans + 'a';
    return finalAns;
}

int main(){
    string s;
    cin>>s;
    cout<<"Max Occuring char : "<<maxOccurenceInString(s)<<endl;

    return 0;
}