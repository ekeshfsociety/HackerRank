#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int matrix[3][3] {} ;
    for(int i=0 ; i<3; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin >> matrix[i][j] ;
        }
    }   
    
    int matrix1[3][3] {} ;
    matrix1[0][0] = 8 ;
    matrix1[0][1] = 3 ;
    matrix1[0][2] = 4 ;
    matrix1[1][0] = 1 ;
    matrix1[1][1] = 5 ;
    matrix1[1][2] = 9 ;
    matrix1[2][0] = 6 ;
    matrix1[2][1] = 7 ;
    matrix1[2][2] = 2 ;
        
    int cost1 {} ;
        
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix1[i][j])
                {
                    cost1 = cost1 + abs(matrix[i][j] - matrix1[i][j]) ;
                }
            }
        }
    
    int matrix2[3][3] {} ;
    matrix2[0][0] = 8 ;
    matrix2[0][1] = 1 ;
    matrix2[0][2] = 6 ;
    matrix2[1][0] = 3 ;
    matrix2[1][1] = 5 ;
    matrix2[1][2] = 7 ;
    matrix2[2][0] = 4 ;
    matrix2[2][1] = 9 ;
    matrix2[2][2] = 2 ;
        
    int cost2 {} ;
        
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix2[i][j])
                {
                    cost2 = cost2 + abs(matrix[i][j] - matrix2[i][j]) ;
                }
            }
        }
    int matrix3[3][3] {} ;
    matrix3[0][0] = 6 ;
    matrix3[0][1] = 1 ;
    matrix3[0][2] = 8 ;
    matrix3[1][0] = 7 ;
    matrix3[1][1] = 5 ;
    matrix3[1][2] = 3 ;
    matrix3[2][0] = 2 ;
    matrix3[2][1] = 9 ;
    matrix3[2][2] = 4 ;
        
    int cost3 {} ;
        
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix3[i][j])
                {
                    cost3 = cost3 + abs(matrix[i][j] - matrix3[i][j]) ;
                }
            }
        }
    int matrix4[3][3] {} ;
    matrix4[0][0] = 4 ;
    matrix4[0][1] = 9 ;
    matrix4[0][2] = 2 ;
    matrix4[1][0] = 3 ;
    matrix4[1][1] = 5 ;
    matrix4[1][2] = 7 ;
    matrix4[2][0] = 8 ;
    matrix4[2][1] = 1 ;
    matrix4[2][2] = 6 ;
        
    int cost4 {} ;
    
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix4[i][j])
                {
                    cost4 = cost4 + abs(matrix[i][j] - matrix4[i][j]) ;
                }
            }
        }
    int matrix5[3][3] {} ;
    matrix5[0][0] = 2 ;
    matrix5[0][1] = 9 ;
    matrix5[0][2] = 4 ;
    matrix5[1][0] = 7 ;
    matrix5[1][1] = 5 ;
    matrix5[1][2] = 3 ;
    matrix5[2][0] = 6 ;
    matrix5[2][1] = 1 ;
    matrix5[2][2] = 8 ;
        
    int cost5 {} ;
        
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix5[i][j])
                {
                    cost5 = cost5 + abs(matrix[i][j] - matrix5[i][j]) ;
                }
            }
        }
    int matrix6[3][3] {} ;
    matrix6[0][0] = 4 ;
    matrix6[0][1] = 3 ;
    matrix6[0][2] = 8 ;
    matrix6[1][0] = 9 ;
    matrix6[1][1] = 5 ;
    matrix6[1][2] = 1 ;
    matrix6[2][0] = 2 ;
    matrix6[2][1] = 7 ;
    matrix6[2][2] = 6 ;
        
    int cost6 {} ;
        
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix6[i][j])
                {
                    cost6 = cost6 + abs(matrix[i][j] - matrix6[i][j]) ;
                }
            }
        }
    int matrix7[3][3] {} ;
    matrix7[0][0] = 6 ;
    matrix7[0][1] = 7 ;
    matrix7[0][2] = 2 ;
    matrix7[1][0] = 1 ;
    matrix7[1][1] = 5 ;
    matrix7[1][2] = 9 ;
    matrix7[2][0] = 8 ;
    matrix7[2][1] = 3 ;
    matrix7[2][2] = 4 ;
        
    int cost7 {} ;
        
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix7[i][j])
                {
                    cost7 = cost7 + abs(matrix[i][j] - matrix7[i][j]) ;
                }
            }
        }
    int matrix8[3][3] {} ;
    matrix8[0][0] = 8 ;
    matrix8[0][1] = 3 ;
    matrix8[0][2] = 4 ;
    matrix8[1][0] = 1 ;
    matrix8[1][1] = 5 ;
    matrix8[1][2] = 9 ;
    matrix8[2][0] = 6 ;
    matrix8[2][1] = 7 ;
    matrix8[2][2] = 2 ;
        
    int cost8 {} ;
        
    for (int i=0 ; i<3 ; i++)
        {
            for (int j=0 ; j<3 ; j++)
            {
                if (matrix[i][j] != matrix8[i][j])
                {
                    cost8 = cost8 + abs(matrix[i][j] - matrix8[i][j]) ;
                }
            }
        }
    
    vector <int> leastCost {} ;
    
    leastCost.push_back(cost1);
    leastCost.push_back(cost2);
    leastCost.push_back(cost3);
    leastCost.push_back(cost4);
    leastCost.push_back(cost5);
    leastCost.push_back(cost6);
    leastCost.push_back(cost7);
    leastCost.push_back(cost8);
    
    int lowest {} ;
    lowest = leastCost.at(0) ;
    
    for (int i=0 ; i<8 ; i++)
    {
        if (leastCost.at(i) < lowest)
            lowest = leastCost.at(i) ;
    }
    
    
    
    cout << lowest ;
        
    
    return 0;
}