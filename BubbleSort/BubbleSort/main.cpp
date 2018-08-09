//
//  main.cpp
//  BubbleSort
//
//  Created by kidd on 2018/8/9.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int length){
    //双向起泡排序，交替进行正反两个方向的起泡过程
    
    int low = 0, high = length-1;
    bool flag = true;
    while (low < high && flag) {
        flag = false;
        for (int i = low; i<high; i++) {
            if (arr[i]>arr[i+1]) {
                swap(arr[i], arr[i+1]);
                flag = true;
            }
        }
        high--;
        for (int j = high; j > low; j--) {
            if (arr[j-1]>arr[j]) {
                swap(arr[j-1], arr[j]);
                flag = true;
            }
        }
        low++;
        
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, BidirectinalBubbleSort!\n";
    int arr[] = {3,6,23,5,1,8,10};
    BubbleSort(arr, 7);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
