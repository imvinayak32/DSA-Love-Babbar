#include <bits/stdc++.h>
using namespace std;

/*  Note 1 -
    int size;
    cin>>size;
    int arr[size]

    it's a bad practice we should avoid it.
*/

/*  Note 2 -
    var_name = max(var_name, array[i]);
    var_1 = max(var_1, var_2);
*/

/*  Note 3 -
    Use of in-built functions
    swap()
    min(), max()
*/

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getMin(int arr[], int size)
{
    int minimum = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        minimum = min(minimum, arr[i]);
    }
    return minimum;
}

int getMax(int arr[], int size)
{
    int maximum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}

// Question - 1
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// Question - 2
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
// Question - 3
void reverseArray1(int arr[], int size)
{
    //int temp;
    int mid = size/2;
    for (int i = 0; i < mid; i++){

        // temp = arr[size - i - 1];
        // arr[size - i - 1] = arr[i];
        // arr[i] = temp;

        swap(arr[i], arr[size - i - 1]);
    }
}

void reverseArray2(int arr[], int size){

    int start = 0;
    int end = size - 1;

    while(end>start){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;
    cin >> size;
    int num[100];
    int key;

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout<<"Minimum value = "<<getMin(num,size)<<endl;
    cout<<"Maximum value = "<<getMax(num,size)<<endl;
    cout<<"Sum of Array elements = "<<sumArray(num, size)<<endl;

    cout<<"What element you want to search"<<endl;
    cin>>key;

    int result = linearSearch(num, size, key);

    if( result >= 0) cout<<"Element "<<key<<" found out at index "<<result<<endl;
    else cout<<"Element "<<key<<" not found out !! "<<endl;

    cout<<"Printing original array - "<<endl;
    printArray(num, size);
    //reverseArray1(num, size);
    reverseArray2(num, size);
    cout<<"Reversed array - "<<endl;
    printArray(num,size);


    return 0;
}