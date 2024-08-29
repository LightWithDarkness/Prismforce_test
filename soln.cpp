#include <iostream>

#include <vector>

using namespace std;

bool canEscapeChakravyuh(int p, vector < int > k, int a, int b) {
    bool k3_revived = false; // Track if the third enemy regenerates
    bool k7_revived = false; // Track if the seventh enemy regenerates
    int power = p;
    //"a" is no of times it can skip the battle
    //"b" is no of times it can recharge its power

    for (int i = 0; i < 11; ++i) {
        // Check if the third and seventh enemies need to regenerate
        if (i == 3 && !k3_revived) {
            k[i] += k[2] / 2; // The third enemy will attacks again
            k3_revived = true;
        }
        if (i == 7 && !k7_revived) {
            k[i] += k[6] / 2; // The seventh enemy will attacks again
            k7_revived = true;
        }

        // Recharge Abhimanyu's power if needed
        if (b > 0 && power < k[i]) {
            b--;
            power = p; // Recharge power to the initial value
        }

        // If Abhimanyu's power is less than the enemy's power
        if (power < k[i]) {
            // Check if Abhimanyu can skip this battle
            if (a > 0) {
                a--;
                continue;
            } else {
                return false; // Abhimanu will lose the battle
            }
        }

        // Engage in battle if Abhimanyu has enough power
        if (power >= k[i]) {
            power -= k[i];
        }

        // If Abhimanyu's power goes below 0, he loses
        if (p < 0) {
            return false;
        }
    }

    return true; // Abhimanyu successfully crosses all circles
}

int main() {
    // Test case 1
    int pow1 = 50;
    vector < int > k1 = {
        10,
        15,
        20,
        25,
        30,
        35,
        40,
        45,
        50,
        55,
        60
    };
    int a1 = 2;
    int b1 = 1;
    if (canEscapeChakravyuh(pow1, k1, a1, b1)) {
        cout << "Test Case 1: Abhimanyu successfully crosses Chakravyuh" << endl;
    } else {
        cout << "Test Case 1: Abhimanyu was not bable to cross Chakravyuh." << endl;
    }

    // Test case 2
    int pow2 = 50;
    vector < int > k2 = {
        10,
        15,
        20,
        25,
        5,
        25,
        40,
        10,
        55,
        10,
        60
    };
    int a2 = 2;
    int b2 = 4;
    if (canEscapeChakravyuh(pow2, k2, a2, b2)) {
        cout << "Test Case 2: Abhimanyu successfully crosses Chakravyuh" << endl;
    } else {
        cout << "Test Case 2: Abhimanyu was not bable to cross Chakravyuh." << endl;
    }

    return 0;
}
