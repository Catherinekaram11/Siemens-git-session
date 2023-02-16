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
long getAverage(std::vector<int> num)
{
    long sum = getSum(num);
    return sum / VECTOR_LENGTH;
long getMin (std::vector <int> num)
{
    long min = num[0];
    for( int i=1 ; i<VECTOR_LENGTH ; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
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
    std::cout << "Average is " << getAverage(num) << "\n";
    std::cout << "Min is " << getMin(num) << "\n";
}

