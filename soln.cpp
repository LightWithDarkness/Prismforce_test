#include <iostream>
#include <vector>

using namespace std;

bool canCrossChakravyuh(int p, vector<int> k, int a, int b) {
    bool regenerated_k3 = false;  // Track if the third enemy regenerates
    bool regenerated_k7 = false;  // Track if the seventh enemy regenerates
    int power = p;

    for (int i = 0; i < 11; ++i) {
        // Check if the third and seventh enemies need to regenerate
        if (i == 3 && !regenerated_k3) {
            k[i] += k[2] / 2;  // The third enemy attacks again
            regenerated_k3 = true;
        }
        if (i == 7 && !regenerated_k7) {
            k[i] += k[6] / 2;  // The seventh enemy attacks again
            regenerated_k7 = true;
        }

        // Recharge Abhimanyu's power if needed
        if (b > 0 && power < k[i]) {
            b--;
            power = p;  // Recharge power to the initial value
        }
        
        // If Abhimanyu's power is less than the enemy's power
        if (power < k[i]) {
            // Check if Abhimanyu can skip this battle
            if (a > 0) {
                a--;
                continue;
            } else {
                return false;
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

    return true;  // Abhimanyu successfully crosses all circles
}

int main() {
    // Test case 1
    int p1 = 50;
    vector<int> k1 = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};
    int a1 = 2;
    int b1 = 1;
    if (canCrossChakravyuh(p1, k1, a1, b1)) {
        cout << "Abhimanyu successfully crosses Chakravyuh in test case 1." << endl;
    } else {
        cout << "Abhimanyu fails to cross Chakravyuh in test case 1." << endl;
    }

    // Test case 2
    int p2 = 50;
    vector<int> k2 = {10, 15, 20, 25, 5, 25, 40, 10, 55, 10, 60};
    int a2 = 2;
    int b2 = 4;
    if (canCrossChakravyuh(p2, k2, a2, b2)) {
        cout << "Abhimanyu successfully crosses Chakravyuh in test case 2." << endl;
    } else {
        cout << "Abhimanyu fails to cross Chakravyuh in test case 2." << endl;
    }

    return 0;
}
