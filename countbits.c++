#include <iostream>
#include <vector>

std::vector<int> countBits(int n) {
    std::vector<int> bitCount(n + 1, 0);
    
    // Initialize the pattern for the first range [0-7]
    int offset = 1;
    for (int i = 1; i <= n; ++i) {
        // Update the current count based on previous count
        bitCount[i] = bitCount[i & (i - 1)] + 1;
    }
    
    return bitCount;
}
int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    std::vector<int> result = countBits(n);
    // we need to store the output in result for output fexibility
    std::cout << "Number of set bits from 0 to " << n << ":\n";
    for (int i = 0; i <= n; ++i) {
        std::cout << "Number " << i << " has " << result[i] << " set bits.\n";
    }

    return 0;
}