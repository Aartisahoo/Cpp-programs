//32.	Consider a scenario where it is required to design a class named matrix for storing matrix elements.The size of the matrix is specified at run time on the basis of which class constructor reserves memory space using dynamic memory allocation technique.
#include <iostream>
using namespace std;\
class matrix{
    int **p;
    int row,col;
    public:
    
