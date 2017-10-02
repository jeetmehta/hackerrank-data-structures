#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, num_queries;
    cin >> n >> num_queries;
    vector <vector <int>> seqList(n);
    int lastAnswer = 0;
    
    for (int i = 0; i < num_queries; i++)
    {
        int type, x, y;
        cin >> type >> x >> y;
        
        if (type == 1)
        {
            int index = (x ^ lastAnswer)%n;
            seqList[index].push_back(y);
        }
        else if (type == 2)
        {
            int index = (x ^ lastAnswer)%n;
            vector <int> seq = seqList[index];
            lastAnswer = seq[y % seq.size()];
            cout << lastAnswer << endl;
        }
    }
    return 0;
}