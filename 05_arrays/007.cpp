#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = 
    {
        {1,2,3}, // 0
        {4,5,6}, // 1
        {7,8,9} // 2
    };
    
    cout << matrix[1][2] <<endl;

/*
we must intialize multidementional arrays before assigning values
int matrix2[3][3];
matrix2[0] = {1,2,3};
*/




    return 0;
}