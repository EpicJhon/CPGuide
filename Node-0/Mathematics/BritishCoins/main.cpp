#include <vector>

using namespace std;

class BritishCoins {
public:

    vector<int> coins(int pence) {
        vector<int> total;
        int shillings, pounds, pences, penceOld;

        penceOld = pence;

        pounds = (int) ((double) pence / (12.0 * 20.0));

        pence = pence - (pounds * 20 * 12);

        shillings = (int) ((double) pence / 12.0);

        pences = penceOld - ((pounds * 20 * 12) + (shillings * 12));

        total.push_back(pounds);
        total.push_back(shillings);
        total.push_back(pences);

        return total;
    }
};
