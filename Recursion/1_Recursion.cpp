#include <stdio.h>
#include <iostream>

// Head Recursion
void HeadRecursion(int n)
{
    if(n>0)
    {
        HeadRecursion(n-1);
        printf("%d ",n);
    }
}

//Tail Recursion
void TailRecursion(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        TailRecursion(n-1);
    }
}

int main()
{
    int x=3;
    std::cout << "Tail Recursion" << std::endl;
    HeadRecursion(x);
    std::cout << "\nHead Recursion" << std::endl;
    TailRecursion(x);
    return 0;
}
