#include <iostream>

int main()
{
    unsigned int n;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            std::cout << k << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
