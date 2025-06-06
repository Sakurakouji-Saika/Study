#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*read position data from text file positions.txt
* in vector<string>
*/
vector<string> read_position()
{
    ifstream fin("positions.txt");//用输入文件对象fin打开文本文件position.txt用来读取数据
    if (!fin.is_open())//如果没有找到文件，则输出错误信息并退出程序，返回一个空的二维数组
    {
        std::cout << "error ! can not open file positions.txt!" << std::endl;
        return vector<string>();//调用vector的默认构造函数，返回一个空的vector
    }
    char c = 0;
    int row = 0, col = 0;//用来存放文件中行数和列数

    fin >> col;//先读两个字符w=跳过，再读每一行的列数
    fin >> row;//先读两个字符h=跳过，再读行数。
    //创建一个19行，每行53个字符的二维数组，每个元素的值都是空格（打印的时候看不出打印了）
    vector<string> matrix(row, string(col, ' '));

    while (!fin.eof())
    {
        int x = 0, y = 0, value = 0;
        /*convert int value of char to char
        * for example: int 32  => char ' '
        *              int 61  => char '='
        *              int 124 => char '|'
        *              int 30  => char '$'
        */

        //读取一组数据（横坐标，纵坐标，值）
        //(1) your code
        fin >> x;
        fin >> y;
        fin >> value;

        

        //cout << x << " "  << y << " " << value << endl;


        //读到一组记录，就把数据信息保存到数组对应位置
        matrix[x][y] = static_cast<char>(value);//类型转换
    }
    return matrix;
}

void print_matrix(const vector<string>& matrix)
{
    //逐行打印
    for (int row = 0; row < matrix.size(); ++row)
    {
        //string可以直接整体打印
        //(2) your code
        cout << matrix[row] << endl;
        
    }
}
int main(int argc, char* argv[])
{
    //读取数据到二维字符数组
    auto matrix = read_position();
    //打印二维数组
    //(3) your code
    print_matrix(matrix);
    return 0;
}