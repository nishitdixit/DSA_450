#include<bits/stdc++.h>

using namespace std;


long long int inversionCount(long long arr[], long long N)
{

int count=0;

count+=inversionCount()
    
    // int inv_count = 0;
    // for (int i = 0; i < n - 1; i++)
    //     for (int j = i + 1; j < n; j++)
    //         if (arr[i] > arr[j])
    //             inv_count++;
 
    // return inv_count;
}


int count(int arr[],int left, int right){
    int count=0;
    count+= count(arr[],)

}


int mergeSort(int arr[], int temp[], int left, int right){
   int mid, count = 0;
   if (right > left) {
      mid = (right + left)/2; //find mid index of the array
      count = mergeSort(arr, temp, left, mid); //merge sort left sub array
      count += mergeSort(arr, temp, mid+1, right); //merge sort right sub array
      count += merge(arr, temp, left, mid+1, right); //merge two sub arrays
   }
   return count;
}
