#include <vector>
#include <math.h>

using namespace std;

class TournamentJudging {
public:

    int getPoints(vector <int> rawScores, vector <int> conversionFactor) {
        int total = 0;

        for (int i = 0; i < rawScores.size(); i++)
            total += round((double) rawScores[i] / (double) conversionFactor[i]);

        return total;
    }
};
