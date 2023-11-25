#include<iostream>
namespace series
{
    // fabonacci seris 
    void fabonacci(int n) {
        int a = 0, b = 1;
        for (int i = 1; i <= n; ++i) 
        {
            std::cout << a << " ";
            int c = a + b;
            a = b;
            b = c;
        }
        std::cout <<std::endl;
}
}
//function to returnthe factorial of a number
int fact(int n)
{
        if(n==0 || n == 1) return 1;
    else 
        return n * fact(n-1);
}