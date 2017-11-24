#include <iostream>
#include <string>
#include <algorithm>

#include "select/SortHelper.h"


using namespace std;

template<typename T>
void selecttionSort(T arr[], int n) {

    for (int i = 0; i < n; ++i) {

        //寻找[i,n) 区间里的最小值
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }

        swap(arr[i], arr[minIndex]);
    }

}

int main() {

    int n = 10000;

    int *arr = SortHelper::generateRandomArray(n, 0, n);

    selecttionSort(arr, n);

    SortHelper::printArray(arr, n);

    delete[] arr;
    return 0;


}