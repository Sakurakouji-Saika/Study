#include <iostream>
using namespace std;

int main()
{
    //10�ſ�
    int course_number = 10;
    //10�ſεĿ��Է���
    int* score_list = new int[course_number] { 88, 95, 84, 89, 92, 79, 80, 96, 83, 80 };

    //10�ſε�ѧ��
    int* credit_hour_list = new int[course_number] { 3, 4, 1, 3, 3, 2, 2, 4, 3, 3 };

    //�ۼӿγ�ѧ�ּ���=�γ�ѧ�ּ���1+�γ�ѧ�ּ���2+...+�γ�ѧ�ּ���n
    double total_credit_hour_point = 0;

    for (int i = 0; i < course_number; ++i)
    {
        //�γ̼���=�γ̳ɼ�/10 -5
        double grade_point = score_list[i] / 10.0 - 5;//ע����������ͨ�����Ը��������ת�����˸�����
        //�γ�ѧ�ּ���
        double credit_hour_point = credit_hour_list[i] * grade_point;
        //�ۼӿγ�ѧ�ּ���
        //(1) your code
        total_credit_hour_point += credit_hour_point;
    }

    //ƽ��ѧ�ּ���
    //���ſ�ѧ��֮�� sum_credit_hour 
    int sum_credit_hour = 0;
    for (int i = 0; i < course_number; ++i)
    {
        //(2) your code  //�ۼ�
        sum_credit_hour += credit_hour_list[i];
    }

    //ƽ��ѧ�ּ���= �ۼӿγ�ѧ�ּ���/���ſ�ѧ��֮��
    double GPA = total_credit_hour_point / sum_credit_hour;

    cout << "��׵�GPA = " << GPA << endl;

    //�ͷŶ�̬�ڴ�
    delete[] score_list;
    delete[] credit_hour_list;

    return 0;
}