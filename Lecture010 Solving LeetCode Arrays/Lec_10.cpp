/* Problems i faced : 
    1. two pointer approach solution - cylic j increment

*/
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Question - 1
void swapAlternate(int arr[], int size){
    
    for(int i = 0; i< size; i += 2){

        if(i + 1 < size ){
            //When we aren't using in-Built swap function
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printArray(arr, size);
}

//Question - 2
// size = 2m+1
int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

//Question - 3
int findDuplicate(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    for(int i = 1; i<size; i++){
        ans = ans^i;
    }
    return ans;
}

//Question - 4
void intersectionArray1(int a[], int b[], int c[], int n, int m, int o){
    int element;

    for(int i = 0; i<n; i++){
        element = a[i];

        for(int j =0; j<m; j++){

            if(element < b[j]){
                break;
            }
            
            if(element == b[j]){
                cout<<element<<endl;
                c[i] = element;
                b[j] = -1;
                break;
            }
        }

    }
    cout<<endl;
}

//Using Two Pointer Approach - 
void intersectionArray2(int a[], int b[], int n, int m){
    int i = 0, j = 0;

    while( i<n && j<m){

        if(a[i] == b[j]){
            cout<<a[i]<<endl;
            i++;
            //j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

//Question - 5
/*   Pair sum : should be equal to any given number 'K'
     Not able to understand the working of Vectors (STL)
*/

/* Question - 6
    triplet sum 
*/

void sort01(int arr[], int size){
    int i = 0;
    int j = size - 1;

    while(i<j){
        if(arr[i] == 0) i++;
        if(arr[j] == 1) j--;
        else if( arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
        }
        
    }
    printArray(arr,size);
}
// need to watch bhaiya's approach 

/* Question - 8
    Sort 0, 1, 2
*/

int main(){

    int even[10] = { 20, 1, 3, 23, 34, 45, 6, 7, 5, 10};
    int odd[7] = {3, 7, 6, 5, 7, 20, 3};

    int sample[8] = {1, 3, 4, 5, 2, 6, 5, 7};

    //int store[10];

    swapAlternate(even, 10);
    swapAlternate(odd, 7);

    // cout<<"Unique element : "<<findUnique(sample,7)<<endl;
    //cout<<"Duplicate Element : "<<findDuplicate(sample,8)<<endl;

    //intersectionArray1(even, odd, store, 10, 7, 10);
    // cout<<"Printing new stored array = ";
    // printArray(store, 10);

    // printArray(even, 10);
    // printArray(odd, 7);
    // intersectionArray2(even, odd, 10, 7);

    // int array[10] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 0};
    // sort01(array, 10);

    return 0;
}