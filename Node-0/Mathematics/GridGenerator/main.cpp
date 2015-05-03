#include <vector>

using namespace std;

class GridGenerator {
public:

    int generate(vector <int> row, vector <int> col) {
        int f = 0, c = 0;
        int grid[row.size()][col.size()];

        for (int i = 0; i <= row.size(); i++)
            grid[0][i] = row[i];

        for (int i = 0; i <= col.size(); i++)
            grid[i][0] = col[i];

        for (auto &kv : grid) {
            for (auto &v : kv) {

                if (f > 0 && c > 0)
                    v = grid[f][c - 1] + grid[f - 1 ][c] + grid[f - 1][c - 1];

                c++;
            }
            f++;
            c = 0;
        }

        return grid[row.size() - 1][col.size() - 1];
    }
};
