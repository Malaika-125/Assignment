#include<iostream>
//Namespaces
namespace shapes
{
    // program to print the square with "*"
    void sqruare(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
              std::cout<<"*";
            std::cout<<std::endl;
        }
    }
    // program to print rectange height, weidth
    void rectangle(int height,int weidth)
    {
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < weidth; ++j)
            std::cout << "* ";
            std::cout << "\n";
        }
    }
}
// Function
// print right angle triange
    void rtangle(int side1,int side2)
{
    for(int i=0;i<=side1;i++)
    {
        for(int j=0;j<=i;j++)
            std::cout<<"*";
        if(i==side1-1)
            break;
        else
            std::cout<<"\n";
    }
}
// 