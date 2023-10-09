#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n) {
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }
    public:

    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int size) 
    {
        stack<int> s;
        
        for(int i=0; i<size; i++) {    //step1: push all element in stack
            s.push(i);
        }   
        
        while(s.size() > 1) {   //step2: get 2 elements and compare them, for who knowns whom
            
            int firstElement = s.top();
            s.pop();
            int secondElement = s.top();
            s.pop();
            
            if(knows(M,firstElement ,secondElement ,size)){
                s.push(secondElement);
            }
            else
            {
                s.push(firstElement);
            }
        }

        int ans = s.top(); //step3: single element in stack is potential celebrity
        
        //step4: so verify it, for true
        // it's row should contain all 0's
        // it's column should contain all 1's execpt for itself
        
        // Row check
        int zeroCount = 0;
        
        for(int i = 0; i < size; i++) {
            if(M[ans][i] == 0)
                zeroCount++;
        }
        if(zeroCount != size) return -1;
        

        // Column check
        int oneCount = 0;
        
        for(int i = 0; i < size; i++) {
            if(M[i][ans] == 1)
                oneCount++;
        }
        if(oneCount != size-1) return -1;
        

        return ans;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}