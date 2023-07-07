#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;

        std::vector<int> sequence(N);
        for (int i = 0; i < N; i++) {
            std::cin >> sequence[i];
        }

        std::sort(sequence.begin(), sequence.end());

        int smallestSum = sequence[0] + sequence[1];
        std::cout << smallestSum << std::endl;
    }

    return 0;
}
