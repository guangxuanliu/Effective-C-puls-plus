//
// Created by guang on 2020/6/1.
//
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct Day {
    explicit Day(int d)
            : val(d) {}

    int val;
};

struct Month {
    explicit Month(int m)
            : val(m) {}

    int val;
};

struct Year {
    explicit Year(int y)
            : val(y) {}

    int val;
};

class Date
{
public:
    Date(const Month &m,const Day &d,const Year &y)
    {

    }
};

int main()
{

    //get the size of vector
//    vector<int> ivec;
//    for(int i =0;i < 10;i++)
//    {
//        ivec.push_back(i);
//    }
//
//    cout << ivec.size() << endl;


    map<int,string> strMap;
    for(int i = 0;i < 10;i++)
    {
        strMap[i] = to_string(i);
    }

    cout << strMap.size() << endl;
}
