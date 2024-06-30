#include <iostream> //用于输入输出的iostream类库
#include <vector>
#include <array>
using namespace std;

#define PLACE_SIZE 9

//
class number_place
{
private:
    int c;

public:
    int a;
    number_place(int val);
    ~number_place() { cout << "~number_place\n"
                           << endl; }
};

number_place::number_place(int val) : c(5)
{
    cout << "number_place\n"
         << endl;
    cout << c
         << endl;
}

// number_place::~number_place()
// {
//     cout << "~number_place\n"
//          << endl;
// }

std::vector<std::vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

class number_place2
{
private:
    std::array<std::array<int, PLACE_SIZE>, PLACE_SIZE> matrix_data; // 数独数据
    std::array<std::array<int, PLACE_SIZE>, PLACE_SIZE> matrix_mod;  // 数独数据可修改？

public:
    //修改某格数字函数
    // 生成数独函数
    // 展示函数
    void print_matrix_data()
    {
        cout << "hello world\n"
             << endl;
    }
};

int main()
{
    cout << "hello world\n"
         << endl;

    // 不加using namespace std;要加上命名空间std::才可以使用
    //  std::cout << "hello world\n"
    //       << std::endl;

    int b = 30;
    number_place exam1(b);

    number_place2 exam2;
    return 0;
}
