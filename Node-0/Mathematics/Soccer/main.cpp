#include <vector>

using namespace std;

class Soccer {
public:

    int maxPoints(vector<int> wins, vector<int> ties) {
        int points = 0, team;

        for (int i = 0; i <= wins.size(); i++) {
            team = (wins[i] * 3) + ties[i];
            points = (team > points) ? team : points;
		}

        return points;
    }
};
