#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v{ 1, 2, 3, 4 };
    for (int elem : v)
    {
        std::cout << elem;
    }
}