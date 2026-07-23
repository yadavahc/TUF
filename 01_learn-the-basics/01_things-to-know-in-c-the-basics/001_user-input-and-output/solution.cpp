#include <bits/stdc++.h>
using namespace std;

// Simulates the standard "User Input/Output" task:
// Read a full-line string (may contain spaces) and an integer, then print them on separate lines.
string solveFromStream(istream &in) {
    string text;
    if (!getline(in, text)) return ""; // read full line (e.g., a name or sentence)
    int x = 0;
    if (!(in >> x)) x = 0;             // read an integer
    string discard;
    getline(in, discard);              // consume remainder of the line if any

    ostringstream out;
    out << text << "\n" << x;
    return out.str();
}

int main() {
    // Hardcoded sample "inputs" to demonstrate functionality (no stdin per instructions).
    vector<string> samples = {
        "Alice Wonderland\n23\n",
        "John Q Public\n0\n",
        "Ada Lovelace\n1815\n"
    };

    for (int i = 0; i < (int)samples.size(); ++i) {
        istringstream iss(samples[i]);
        string res = solveFromStream(iss);
        cout << "Sample " << (i + 1) << " Output:\n" << res << "\n\n";
    }
    return 0;
}
