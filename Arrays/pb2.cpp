/*
You are given an array of integers arr[]. Your task is to reverse the given array.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are 1 4 3 2 6 5. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is 5 6 2 3 4 1.
*/
#include <iostream>
#include <vector>
using namespace std;

void printarr(int arr[] , int size){
    for(int i = 0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

//Method 1 : Using a temporary Array
void method1(int arr[] , int size){
    int temp[size];
    for(int i = 0 ; i<size ; i++){
        temp[i] = arr[size-i-1];
    }
    for(int i = 0 ; i<size ; i++){
        arr[i] = temp[i];
    }
    printarr(arr , size);
}

//Method 2 : Using 2 Pointer 
void method2(int arr[] , int size){
    int left = 0;
    int right = size-1;
    while(left < right){
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }
    printarr(arr , size);
}

//Method 3 : Swapping elements
void method3(int arr[] , int size){
    for(int i = 0 ; i<size/2 ; i++){
        swap(arr[i] , arr[size-i-1]);
    }
    printarr(arr , size);
}

//Method 4 : Using Recurssion
void method4(int arr[] , int l , int r){
    if(l>=r){
        return;
    }
    swap(arr[l] , arr[r]);
    method4(arr, l+1 , r-1);
}

//Method 5 : Using In-built reverse
void method5(int arr[] , int size){
    vector<int> temp;
    for(int i = 0 ; i<size ; i++){
        temp.push_back(arr[i]);
    }
    reverse(temp.begin() , temp.end());
}
int main(){
    int arr[] = {1 , 4 , 3 , 2 , 6  , 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    return 0;
}