#include <iostream>
#include <vector>

using namespace std;

class MovingAverages {
public:

    vector <int> calculate(vector<string> times, int n) {
        vector<int> total;
        vector<int> sTimes;
        int hours, minutes, seconds, sum;

        for (string str : times) {
            sscanf(str.c_str(), "%d:%d:%d", &hours, &minutes, &seconds);
            sTimes.push_back((hours * 60 * 60) + (minutes * 60) + seconds);
        }

        for (int i = 0; i < sTimes.size(); i++) {
            if (i + n > sTimes.size())
                continue;

            sum = 0;

            for (int j = i; j < i + n; j++)
                sum += sTimes[j];

            total.push_back((int) ((double) sum / (double) n));
        }

        return total;
    }
};
