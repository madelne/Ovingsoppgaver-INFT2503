#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
    for (auto &e : table)
        out << e << " ";
    return out;
}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    vector<int> v2 = {2, 3, 12, 14, 24};
    cout << "v2: " << v2 << endl;

    //a)
    auto it = find_if(v1.begin(), v1.end(), [](int x) { return x > 15; });
    if (it != v1.end()) {
        cout << "Første element større enn 15: " << *it << endl;
    }

    //b)
    bool like1 = equal(v1.begin(), v1.begin() + 5, v2.begin(),
                       [](int a, int b) { return abs(a - b) <= 2; });
    cout << "v1[0..5) og v2 er omtrent like: " << (like1 ? "ja" : "nei") << endl;

    bool like2 = equal(v1.begin(), v1.begin() + 4, v2.begin(),
                       [](int a, int b) { return abs(a - b) <= 2; });
    cout << "v1[0..4) og v2 er omtrent like: " << (like2 ? "ja" : "nei") << endl;

    //c)
    vector<int> v1_kopi;
    v1_kopi.resize(v1.size());
    replace_copy_if(v1.begin(), v1.end(), v1_kopi.begin(),
                    [](int x) { return x % 2 != 0; }, 100);
    cout << "v1 med oddetall erstattet med 100: " << v1_kopi << endl;
}
