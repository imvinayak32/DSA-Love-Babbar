#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1); // pushed -1 initially

    vector<int> ans(n);
    
    for(int i=n-1; i>=0 ; i--) { // loop for taversing all the elements from last

        int curr = arr[i];

        while(s.top() >= curr) // loop will run untill i find element smaller than the array element
        {
            s.pop();
        }
        
        ans[i] = s.top(); // ans will contain next smaller element
        s.push(curr);
    }
    return ans;
}

int main(){

    vector<int> arr = {2, 1, 4, 3};
    int size = arr.size();

    vector<int> ans = nextSmallerElement(arr, size);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}