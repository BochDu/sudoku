#include <iostream>
#include <array>
#include <Windows.h>

using namespace std;

#define PLACE_SIZE 9 // 数独表大小

class number_place
{
private:
    std::array<std::array<int, PLACE_SIZE>, PLACE_SIZE> place_data; // 数独表数据
    std::array<std::array<int, PLACE_SIZE>, PLACE_SIZE> place_mod;  // 数独表用户修改权限

    void place_clear()
    {
        for (auto &row : place_data)
        {
            for (auto &col : row)
            {
                col = 0;
            }
        }
    }

public:
    number_place()
    {
        cout << "number_place\n"
             << endl;
        place_clear();
    }
    ~number_place()
    {
        cout << "~number_place\n"
             << endl;
    }
    //  检车正确函数
    //  获取提示函数
    //  修改数独表函数
    //  数独表生成函数
    //  数独表打印函数
    void print_place()
    {
        for (int i = 0; i < PLACE_SIZE; ++i)
        {
            if (i == 0)
            {
                std::cout << "+ - - - + - - - + - - - +" << std::endl;
            }
            for (int j = 0; j < PLACE_SIZE; ++j)
            {
                if (j == 0)
                {
                    std::cout << "|";
                }

                std::cout << " " << place_data[i][j];

                if ((j + 1) % 3 == 0)
                {
                    std::cout << " |";
                }
            }
            std::cout << std::endl;

            if ((i + 1) % 3 == 0 && i <= PLACE_SIZE - 1)
            {
                std::cout << "+ - - - + - - - + - - - +" << std::endl;
            }
        }
    }
};

int main()
{
    number_place place;
    place.print_place();

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 25;     // 设置光标大小为 25
    cursorInfo.bVisible = TRUE; // 设置光标可见

    SetConsoleCursorInfo(hConsole, &cursorInfo);
    return 0;
}