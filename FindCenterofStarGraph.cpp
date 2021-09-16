#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
void findInAndOutDegree(int *array, int n);
int hashArray[10] = {0};

int main()
{
    vector<int> hashVector = {0};
    int i, j, first, second, center=0,third,fourth;

    // vector<vector<int>> edges{
    //     {1, 2},
    //     {2, 3},
    //     {4, 2}};

    vector<vector<int>> edges{
        {1, 2},
        {5, 1},
        {1, 3},
        {1, 4}};

    first = edges[0][0];
    second = edges[0][1];
    third = edges[1][0];
    fourth = edges[1][1];

    //cout<<"first"<<edges[1][1]<<endl;

    // if (third == first)
    //     center = first;
    // else if (fourth == second)
    //     center = second;

    for (i = 1; i < edges.size(); i++)
    {
        for (j = 0; j < edges[i].size(); j++)
        {
            if (edges[i][j] == first)
                center = first;
            else if (edges[i][j] == second)
                center = second;
        }
    }

    cout <<"number"<<center;
}
