#include <iostream>
#include <vector>

const int MINE_LABEL = -1;

// a list of all possible (x,y) shifts in a field from a mine cell
const std::vector<std::vector<int>> SHIFTS = {
    {-1, -1},
    {-1, 0},
    {-1, 1},
    {0, 1},
    {1, 1},
    {1, 0},
    {1, -1},
    {0, -1},
};

int main()
{
    size_t rows, columns, mines;
    std::cin >> rows >> columns >> mines;

    // create a field adding 2 extra rows and columns to avoid checking for out of bounds
    std::vector<std::vector<int>> field(rows + 2, std::vector<int>(columns + 2));

    // place mines and mark neighbouring cells
    for (size_t i = 0; i != mines; ++i)
    {
        int row, column;
        std::cin >> row >> column;

        field[row][column] = MINE_LABEL;

        for (auto shift : SHIFTS)
        {
            // get the pointer to the cell and increment it if it's not a mine
            auto &cell = field[row + shift[0]][column + shift[1]];
            if (cell != MINE_LABEL)
            {
                ++cell;
            }
        }
    }

    // print the mined field
    for (size_t row = 1; row <= rows; ++row)
    {
        for (size_t column = 1; column <= columns; ++column)
        {
            if (column > 1)
                std::cout << " ";
            if (field[row][column] == MINE_LABEL)
                std::cout << "*";
            else
                std::cout << field[row][column];
        }
        std::cout << std::endl;
    }
}
