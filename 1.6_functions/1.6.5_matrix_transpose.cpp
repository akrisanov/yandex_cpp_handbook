#include <vector>
#include <cassert>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>> &matrix)
{
    size_t rows = matrix[0].size();
    size_t columns = matrix.size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(columns));

    for (size_t i = 0; i != rows; ++i)
        for (size_t j = 0; j != columns; ++j)
            result[i][j] = matrix[j][i];

    return result;
}

int main()
{
    std::vector<std::vector<int>> matrix = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<std::vector<int>> result = Transpose(matrix);
    assert(result[0][0] == 1);
    assert(result[1][0] == 2);
}
