#include <iostream>
using namespace std;

class Fact {
private:
    int n;
    int factorial;
public:
    Fact(int n1) : n(n1), factorial(1) {}

    void calculateFactorial() {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
    }
    int getFactorial() {
        return factorial;
    }
};

int main() {
    int n1;
    cin >> n1;
    Fact fact(n1);
    fact.calculateFactorial();
    cout << "Factoriel of " << n1 << " is: " << fact.getFactorial() << endl;
    return 0;
}
