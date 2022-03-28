#include <iostream>

void isPrime(unsigned number) {

    for (int i = 2; i <= number; ++i) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; ++j) {

            int result = i % j;
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << i << " ";
        }
    }
}

int main()
{
    unsigned length = 0;
    std::cout << "Enter a positive number: " << std::endl;
    std::cin >> length;

    isPrime(length);

    return 0;
}