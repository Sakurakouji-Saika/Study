#include <iostream>//cin cout
#include <vector> // vector ����
#include <string> // string �ַ���
#include <fstream>// ifstream ���ļ�����
#include <iomanip>// setw ����һ���������ռ���ٸ��ַ���������㣬���ո�ͨ���Ͷ��� left right ����ʹ��

using namespace std;

//������Ϣ��
class Person
{
public:
    //friend ��ʾ���� operator<< ���Է�����Person����person��˽��private��Ա����
    //output person to cout or ofstream 
    //���������Ϣperson��os�����os������cout������Ҳ������ofstream����
    friend ostream& operator<<(ostream& os, const Person& person);
    //read data from cin or ifstream to person
    //��is���󣨿�����cin,������ifstream�����ж�ȡ��Ϣ��������Ϣ����person��
    friend istream& operator>>(istream& is, Person& person);

public:
    //�����ַ�����Ա����
    string m_id;
    string m_name;
    string m_tel;
};

//store all person read from file
vector<Person> allPersonArray;//global variable

ostream& operator<<(ostream& os, const Person& person)
{
    //left��ʾ����룬setw(5)��ʾ�����person.m_id���ռ5���ַ����������5���ÿո��ں��油�ϣ�����������
    os << left << setw(5) << person.m_id << setw(15) << person.m_name << setw(20) << person.m_tel;
    return os;
}

istream& operator>>(istream& is, Person& person)
{
    //(1) your code 
    
    is >> person.m_id >> person.m_name >> person.m_tel;
    return is;
}

//���ļ�"data.txt"�ж�ȡ���person���ݷŵ�allPersonArray��
bool LoadAllPersonFromFile(string fileName)
{
    ifstream fin(fileName);//fin���󴴽���ʱ�������ΪfileName��ֵ��"data.txt"�����ļ�
    if (!fin.is_open())//������ļ�ʧ��
    {
        //���ļ�ʧ�ܾ����������ʾ�������û�û�гɹ����ļ���������������鶼��������
        cout << "load data failed . file " << fileName << " not exits." << endl;
        return false;
    }

    Person person;
    while (fin >> person)//һ�ζ�ȡ�ļ��е������ַ������ֱ�ֵ���Լ���������Ա����m_id m_name m_tel
    {
        //��ȡ��һ��person�����ݣ���person�ŵ�������
        //(2) your code 
        allPersonArray.push_back(person);

    }
    cout << "load data from file success." << endl;
    return true;
}

void ShowAllPerson(void)
{
    cout << "All Person:" << endl;
    cout << left << setw(5) << "id" << setw(15) << "name" << setw(20) << "tel" << endl;
    for (auto& item : allPersonArray)//��Χforѭ�����������е�ÿһ��person�����item
    {
        cout << item << endl;//��������е�ÿһ��person���󣬲���ӡһ�����з�
    }
}

int main(int argv, char* argc[])
{
    //��ȡ�ļ����ݣ����ļ����ݸ�ֵ��person���󣬲���person����ŵ�����allPersonArray��
    LoadAllPersonFromFile("data.txt");
    //���allPersonArray�е�ÿһ��person���󵽿���̨
    ShowAllPerson();

    return 0;
}