//
// Created by 吴银雷 on 2017/11/23.
//

#ifndef ALGORITHMSTUDY4C_SORTHELPER_H
#define ALGORITHMSTUDY4C_SORTHELPER_H

using namespace std;

#include <iostream>
#include <ctime>
#include <cassert>

namespace SortHelper {

    //生成有n个元素的随机数组   每个元素的随机范围为[rangeL,rangeR]
    int *generateRandomArray(int n, int rangeL, int rangeR) {

        assert(rangeL <= rangeR);

        int *arr = new int[n];

        srand(time(NULL));  //随机种子的设置
        for (int i = 0; i < n; ++i) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }

        return arr;

    }

    template<typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

};


#endif //ALGORITHMSTUDY4C_SORTHELPER_H
