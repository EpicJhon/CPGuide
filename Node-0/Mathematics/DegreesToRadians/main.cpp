#include <math.h>

using namespace std;

class DegreesToRadians {
public:

    double convertToRadians(int degrees, int minutes, int seconds) {
        double ddegrees;

        ddegrees = (double) degrees + ((double) minutes / 60.0) + ((double) seconds / (60.0 * 60.0));

        return (ddegrees * M_PI) / 180.0;
    }
};
