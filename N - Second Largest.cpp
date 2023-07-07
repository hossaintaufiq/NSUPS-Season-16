#include <iostream>
using namespace std;

int findSecondLargest(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
    else
        return c;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        int secondLargest = findSecondLargest(A, B, C);
        cout << secondLargest << endl;
    }

    return 0;
}
