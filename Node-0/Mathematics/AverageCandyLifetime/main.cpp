#include <vector>

using namespace std;

class AverageCandyLifetime {
public:

    double getAverage(vector <int> eatenCandies) {

        vector<int> daysInTheMonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int eatCandies = 0, lifeTime = 0, life;

        for (int i = 0; i < eatenCandies.size(); i++) {

            if (eatenCandies[i] == 0)
                continue;

            eatCandies += eatenCandies[i];

            life = 0;

            for (int j = 0; j <= i; j++)
                life += daysInTheMonths[j];

            lifeTime += life * eatenCandies[i];

        }

        return (double) lifeTime / eatCandies;

    }
};
