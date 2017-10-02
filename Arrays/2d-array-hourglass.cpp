#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void sum_hour_glasses(vector <vector <int>> arr)
{
    int max_hourglass_sum = -63;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if ((i+2 <= arr.size() - 1) && (j+2 <= arr[i].size() - 1))
            {
                int top = arr[i][j] + arr[i][j+1] + arr[i][j+2];
                int middle = arr[i+1][j+1];
                int bottom = arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                
                int hourglass_sum = top + middle + bottom;
                if (hourglass_sum > max_hourglass_sum)
                    max_hourglass_sum = hourglass_sum;   
            }
        }
    }
    cout << max_hourglass_sum << endl;
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    sum_hour_glasses(arr);
    return 0;
}