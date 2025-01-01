/*Maximum and minimum of an array using minimum number of comparisons
Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

Examples
Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9


Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35
*/
#include <iostream>
using namespace std;

int main(){
    int arr[] = {22 , 14 , 8 , 17 , 35 , 3};
    int min = INT_MAX , max = INT_MIN;
    for(int i = 0 ; i<sizeof(arr)/sizeof(arr[i]) ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Minimum : " << min <<" Maximum : "<<max;
    return 0;
}

//Time Complexity : O(n)
