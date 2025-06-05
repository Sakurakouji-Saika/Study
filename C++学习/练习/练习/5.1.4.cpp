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
    ifstream fin("positions.txt");//�������ļ�����fin���ı��ļ�position.txt������ȡ����
    if (!fin.is_open())//���û���ҵ��ļ��������������Ϣ���˳����򣬷���һ���յĶ�ά����
    {
        std::cout << "error ! can not open file positions.txt!" << std::endl;
        return vector<string>();//����vector��Ĭ�Ϲ��캯��������һ���յ�vector
    }
    char c = 0;
    int row = 0, col = 0;//��������ļ�������������

    fin >> col;//�ȶ������ַ�w=�������ٶ�ÿһ�е�����
    fin >> row;//�ȶ������ַ�h=�������ٶ�������
    //����һ��19�У�ÿ��53���ַ��Ķ�ά���飬ÿ��Ԫ�ص�ֵ���ǿո񣨴�ӡ��ʱ�򿴲�����ӡ�ˣ�
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

        //��ȡһ�����ݣ������꣬�����ֵ꣬��
        //(1) your code
        fin >> x;
        fin >> y;
        fin >> value;

        

        //cout << x << " "  << y << " " << value << endl;


        //����һ���¼���Ͱ�������Ϣ���浽�����Ӧλ��
        matrix[x][y] = static_cast<char>(value);//����ת��
    }
    return matrix;
}

void print_matrix(const vector<string>& matrix)
{
    //���д�ӡ
    for (int row = 0; row < matrix.size(); ++row)
    {
        //string����ֱ�������ӡ
        //(2) your code
        cout << matrix[row] << endl;
        
    }
}
int main(int argc, char* argv[])
{
    //��ȡ���ݵ���ά�ַ�����
    auto matrix = read_position();
    //��ӡ��ά����
    //(3) your code
    print_matrix(matrix);
    return 0;
}