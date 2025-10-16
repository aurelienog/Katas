/* Create a function that receives a (square) matrix and calculates the sum of both diagonals (main and secondary).
[   // 3x3 matrix
  [ 1, 2, 3 ],
  [ 4, 5, 6 ],
  [ 7, 8, 9 ]
]

// Should return 30: (1 + 5 + 9) + (3 + 5 + 7)
*/

#include <stddef.h>

int sum_diagonals(size_t n, const int matrix[n][n]) {

    size_t i = 0;
    size_t j = n - 1;
    int sum = 0;
  
    while(i < n) 
    {
      sum += matrix[i][i];
      sum += matrix[i][j];
      i++;
      j--;
    }
    return sum;
}

/* better solution :
int sum_diagonals(size_t n, const int matrix[n][n]) {
  int sum = 0;
  for (size_t i = 0; i < n; i++) {
    sum += matrix[i][i] + matrix[i][n - 1 - i];
  }
  return sum;
}
*/
