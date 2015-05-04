#include <iostream>
#include <vector>

using namespace std;

class ValueAddedTax {
public:

    double calculateFinalPrice(string product, int price, vector<string> food) {

        for (string f : food)
            if (product == f)
                return (double) price + ((10.0 * (double) price) / 100.0);

        return (double) price + ((18.0 * (double) price) / 100.0);
    }
};
