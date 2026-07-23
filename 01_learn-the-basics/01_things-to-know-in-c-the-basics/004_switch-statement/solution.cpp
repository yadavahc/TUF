#include <bits/stdc++.h>
using namespace std;

double computeBySwitch(int choice, double a, double b = 0.0) {
    const double PI = 3.14159265358979323846;
    switch (choice) {
        case 1: // Area of circle with radius a
            return PI * a * a;
        case 2: // Area of rectangle with sides a and b
            return a * b;
        default:
            return -1.0; // invalid choice
    }
}

int main() {
    cout.setf(ios::fixed);
    cout << setprecision(2);

    // Sample 1: Circle, radius = 5
    {
        int choice = 1;
        double r = 5.0;
        double ans = computeBySwitch(choice, r);
        cout << "Choice=" << choice << ", r=" << r << " -> " << ans << "\n";
    }

    // Sample 2: Rectangle, 4 x 5
    {
        int choice = 2;
        double l = 4.0, b = 5.0;
        double ans = computeBySwitch(choice, l, b);
        cout << "Choice=" << choice << ", l=" << l << ", b=" << b << " -> " << ans << "\n";
    }

    // Sample 3: Invalid choice
    {
        int choice = 3;
        double a = 10.0, b = 2.0;
        double ans = computeBySwitch(choice, a, b);
        cout << "Choice=" << choice << " -> " << ans << " (invalid)\n";
    }

    return 0;
}
