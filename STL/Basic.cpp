// #include<iostream>
// #include<string.h>
// #include<math.h>
#include <bits/stdc++.h> //it includes all the library
using namespace std;
/*
void explainpair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first;
    pair<int, int> arr[] = {{1, 2}, {5, 9}, {3, 7}};
}*/

void explainvector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(1);

    vector<pair<int, int>> vec;

    vector<int> v;
    v.push_back({1, 2});
    v.emplace_back(1, 2);

    vector<int> v(5, 100);
    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);
}
int main()
{
}
/*

Algoriths
Functions
COntainers
Iterators

*/