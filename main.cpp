#include <iostream>
#include <vector>
#include <cstdlib>
#define VECTOR_LENGTH 10
long getSum(std::vector<int> num)
{
    long sum = 0;
    for (int i = 0; i < VECTOR_LENGTH; i++)
    {
        sum += num[i];
    }
    return sum;
}

int main()
{
    std::cout << "Vector of Numbers: ";
    std::vector <int> num;
    for (int i = 0; i < VECTOR_LENGTH; i++)
    {
        num.push_back(rand() % 1000);
        std::cout << num[i] << " ";
    }
    std::cout << "\nCalculating sum ........\n";
    std::cout << "Sum is " << getSum(num) << "\n";
}
