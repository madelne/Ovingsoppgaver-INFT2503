#include <cmath>
class Template {
    template <typename Type>

    bool equal(Type a, Type b) {
        if (a == b) {
            return true;
        }
        return false;
    }

    bool equal(double a, double b) {
        if (abs(a - b) < 0.00001) {
            return true;
        }
        return false;
    }
};

int main() {
    return 0;
}