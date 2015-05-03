#include <vector>

using namespace std;

class MedianOfNumbers {
public:

    int findMedian(vector <int> numbers) {

        int greater, smaller;

        if (numbers.size() == 1)
            return numbers[0];

        if ((numbers.size() - 1) % 2 != 0)
            return -1;

        for (int i = 0; i < numbers.size(); i++) {
            greater = 0;
            smaller = 0;

            for (int j = 0; j < numbers.size(); j++)
                if (i != j) {
                    if (numbers[j] > numbers[i])
                        greater++;
                    else
                        smaller++;
                }

            if (greater == smaller)
                return numbers[i];
        }

        return -1;

    }
