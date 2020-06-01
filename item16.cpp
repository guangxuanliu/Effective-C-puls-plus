//
// Created by guang on 2020/5/31.
//

#include <iostream>
using namespace std;

int main()
{
    //single object
    int *pObj = new int(10);
    delete pObj;

    //array
    int *pArr = new int[10];
    delete[] pArr;

    return 0;
}