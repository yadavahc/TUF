#include <bits/stdc++.h>
using namespace std;

int dataType(const string& type) {
    static const unordered_map<string, int> sizes = {
        {"Character", 1},
        {"Integer",   4},
        {"Long",      8},
        {"Float",     4},
        {"Double",    8}
    };
    auto it = sizes.find(type);
    return (it == sizes.end()) ? -1 : it->second; // -1 for unknown types (shouldn't occur in the canonical problem)
}

int main() {
    vector<string> samples1 = {"Character", "Integer", "Long", "Float", "Double"};
    for (const auto& s : samples1) {
        cout << s << " -> " << dataType(s) << "\n";
    }

    // Extra sample: unknown type handling (not part of the canonical judge, just demonstration)
    cout << "Boolean -> " << dataType("Boolean") << "\n";

    // Another sample with mixed order
    vector<string> samples2 = {"Double", "Character", "Long"};
    for (const auto& s : samples2) {
        cout << s << " -> " << dataType(s) << "\n";
    }

    return 0;
}
