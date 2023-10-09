#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) return 1;
    else return 0;
}
char toLowerCase(char s){
    if((s >= 'a' && s <= 'z') || (s >= '0' && s <= '9'))  return s;
    else{
        return (s - 'A' + 'a');
    }
}
bool checkPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;
    while(i <= j){
        if (s[i] != s[j]) return 0;
        else{ i++; j--; }
    }
    return 1;
}


int main(){
    string s = "A man, a plan, a canal: @! Panama";
    cout<<s<<endl;

    //Remove all the faltu character
    string temp = "";
    for(int j = 0; j<s.length(); j++){
        if(isValid(s[j])) { temp.push_back(s[j]); }
        //cout<<temp<<endl;
    }
    cout<<temp<<endl;

    //change all to lowercase
    for(int j = 0; j< temp.length(); j++){
        temp[j] = toLowerCase(temp[j]);
        //cout<<temp<<endl;
    }
    cout<<temp<<endl;

    // check for palindrome
    if(checkPalindrome(temp)){
        cout<<"Palidrome or not = Yes Palindrome !!"<<endl;
    }
    else{
        cout<<"Palidrome or not = Not Palindrome !!"<<endl;
    }

}
