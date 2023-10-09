#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector <int> a){
    
    int start = 0;
	int end = a.size() - 1;

	while(start<=end){
		swap(a[start], a[end]);
        start++;
        end--;
	}
    return a;
}

void print(vector<int> b){
    for(int i = 0; i< b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(1);
    v.push_back(23);
    v.push_back(34);
    v.push_back(67);
    v.push_back(8);

    print(reverseArray(v));

    return 0;
}