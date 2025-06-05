#include <iostream>
#include <vector> //���ѧ���Ŀγ̺�ѧ��
#include <string> //���ѧ��������
#include <iomanip> //��ʽ���ƣ�С������2λС��
#include <map> //���ѧ�����ݣ���������
using namespace std;

struct Student
{
    double get_GPA(void) const { return GPA; }
    void set_GPA(void);//����ѧ����GPA��ֵ���浽ѧ����GPA��Ա������

    int id;//ѧ��
    vector<int> score_list;//�޵����пγ̵ĳɼ��б�
    vector<int> credit_hour_list;//�޵����пγ̶�Ӧ��ѧ���б�
    double GPA;
    string name;//����
};
void Student::set_GPA(void)
{
    //�ۼӿγ�ѧ�ּ���=�γ�ѧ�ּ���1+�γ�ѧ�ּ���2+...+�γ�ѧ�ּ���n
    double total_credit_hour_point = 0;

    for (int i = 0; i < score_list.size(); i++)
    {
        //�γ̼���=�γ̳ɼ�/10 -5
        double grade_point = score_list[i] / 10.0 - 5;//ע����������ͨ�����Ը��������ת�����˸�����
        //�γ�ѧ�ּ���
        double credit_hour_point = credit_hour_list[i] * grade_point;
        //�ۼӿγ�ѧ�ּ���
        total_credit_hour_point += credit_hour_point;
    }

    //ƽ��ѧ�ּ���
    //���ſ�ѧ��֮��sum_credit_hour 
    int sum_credit_hour = 0;
    for (int i = 0; i < score_list.size(); i++)
    {
        sum_credit_hour += credit_hour_list[i];//�ۼ�
    }

    //ƽ��ѧ�ּ���= �ۼӿγ�ѧ�ּ���/���ſ�ѧ��֮��
    GPA = total_credit_hour_point / sum_credit_hour;
}
void init_student_data(map<int, Student>& student_map)
{
    student_map[111] = Student{ 111, { 88, 86, 87, 82, 82, 86, 83, 86, 80, 89 }, { 3, 3, 1, 1, 2, 1, 3, 2, 3, 3 } , 0.0, "���ض���" };
    student_map[112] = Student{ 112, { 92, 80, 81, 75, 93, 80, 81, 89, 84, 85 }, { 3, 2, 3, 1, 2, 2, 2, 1, 1, 1 } , 0.0, "������" };
    student_map[113] = Student{ 113, { 88, 92, 93, 86, 84, 81, 81, 80, 81, 89 }, { 3, 2, 1, 2, 1, 3, 3, 3, 2, 3 } , 0.0, "����" };
    student_map[114] = Student{ 114, { 94, 81, 89, 89, 80, 71, 88, 89, 89, 88 }, { 1, 3, 3, 2, 1, 1, 3, 1, 3, 3 } , 0.0, "��ϣ" };
    student_map[115] = Student{ 115, { 83, 85, 84, 82, 63, 81, 83, 64, 81, 83 }, { 1, 2, 1, 3, 1, 3, 1, 1, 1, 2 } , 0.0, "�Ÿ���" };
    student_map[116] = Student{ 116, { 90, 81, 84, 91, 85, 88, 84, 72, 94, 87 }, { 2, 2, 2, 1, 2, 2, 1, 1, 2, 3 } , 0.0, "¬�����" };
    student_map[117] = Student{ 117, { 89, 81, 86, 88, 81, 91, 84, 75, 90, 88 }, { 2, 2, 2, 2, 1, 3, 3, 2, 2, 3 } , 0.0, "�����" };
    student_map[118] = Student{ 118, { 82, 80, 82, 94, 87, 80, 94, 80, 71, 92 }, { 1, 2, 3, 3, 1, 2, 3, 3, 2, 1 } , 0.0, "������" };
    student_map[119] = Student{ 119, { 89, 91, 80, 90, 85, 87, 87, 94, 81, 70 }, { 2, 3, 3, 2, 3, 2, 2, 3, 1, 3 } , 0.0, "Ĭ�˶�" };
    student_map[120] = Student{ 120, { 88, 95, 84, 89, 92, 79, 80, 96, 83, 80 }, { 3, 4, 1, 3, 3, 2, 2, 4, 3, 3 } , 0.0, "������" };
}
void set_student_gpa(map<int, Student>& student_map, map<double, int>& gpa_order)
{
    for (auto& student : student_map)
    {
        student.second.set_GPA();
        double gpa = student.second.get_GPA();
        //(1) your code. ���<gpa,id>���ݵ� gpa_order��
        gpa_order[gpa] = student.second.id;
    }
}
void print_student_research_quota(map<double, int>& gpa_order, map<int, Student>& student_map)
{
    int pass_count = 3;
    int i = 0;
    //�Ӻ���ǰ���������������������ΪmapĬ���Ǵ�С����������С��Ԫ�ط����ʼ��λ��
    for (auto itr = gpa_order.rbegin(); itr != gpa_order.rend(); ++itr)
    {
        auto& student = student_map[itr->second];
        cout << "GPA="
            //fixedʹ��С��������(�����ǿ�ѧ������)��ʾ������
            << fixed
            //setprecision(2) С�����ֱ���2λ�����һλ��������
            << setprecision(2) << student.get_GPA()
            << ", id=" << student.id;
        if (i < pass_count)
        {
            cout << ", ����";
        }
        else
        {
            cout << ", ����";
        }
        //(2) your code
        i++;
        cout << ", name=" << student.name << endl;
    }
}
int main()
{
    map<int, Student> student_map;
    init_student_data(student_map);

    map<double, int> gpa_order;
    //����ѧ����GPA������ŵ�gpa_order��
    set_student_gpa(student_map, gpa_order);

    //�����Щѧ���������ˣ���Щû��
    print_student_research_quota(gpa_order, student_map);

    return 0;
}