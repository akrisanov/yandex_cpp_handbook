#include <iostream>
#include <vector>
#include <utility>

// Returns the index of the maximum element in the matrix.
// If there are multiple maximum elements, returns the smallest index.
std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>> &matrix)
{
    std::pair<size_t, size_t> argMax;
    int max = matrix[0][0];

    for (size_t row = 0; row != matrix.size(); ++row)
    {
        for (size_t column = 0; column != matrix[row].size(); ++column)
        {
            if (matrix[row][column] > max)
            {
                max = matrix[row][column];
                argMax = {row, column};
            };
        }
    }

    return argMax;
}

int main()
{
    size_t rows, columns;
    std::cin >> rows >> columns;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns));

    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    auto [row, column] = MatrixArgMax(matrix);

    std::cout << row << " " << column << std::endl;
}
