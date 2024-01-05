#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>

using namespace std;

int N, M;
vector<int> items;
vector<vector<int>> g;
vector<int> color;

bool dfs(int x, int c) {  // dfs for coloring the graph
    color[x] = c;
    for (int j : g[x]) {
        if (color[j] == 0) {
            if (!dfs(j, 3 - c)) {    // alternates between 1/2 as color value using recursion
                return false;
            }
        } else if (color[j] == color[x]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> N;
    map<int, string> m;
    map<string, int> m1;
    string s;
    for (int i = 0; i < N; ++i) {
        cin >> s;
        m[i] = s;
        m1[s] = i;
        items.push_back(i);
    }

    cin >> M;

    g.resize(N);

    string s1, s2;
    for (int i = 0; i < M; ++i) {
        cin >> s1 >> s2;
        int id1 = m1[s1], id2 = m1[s2];
        g[id1].push_back(id2);
        g[id2].push_back(id1);
    }


    color.resize(N, 0);

    for (int i = 0; i < N; ++i) {
        if (color[i] == 0) {
            if (!dfs(i, 1)) {
                cout << "impossible" << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        if (color[i] == 1) {
            cout << m[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < N; ++i) {
        if (color[i] == 2) {
            cout << m[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
