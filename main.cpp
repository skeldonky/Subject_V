#include <iostream>
#include <vector>
#include <string>
//��� ����
#include "SimpleVector.h"


using namespace std;

int main() {
    
    int chk;
    int input;

    while (true)
    {
        int check;
        ::cout << "Data�� ���� �����ϱ�" << endl;
        ::cout << "1. �⺻ ��Ͽ� �����ϱ�(10��)" << endl;
        ::cout << "2. ������ ������ ��Ͽ� �����ϱ�" << endl;
        ::cin >> check;

        if (check == 1)
        {
            ::cout << "�⺻ ��Ͽ� �����ϱ⸦ �����ϼ̽��ϴ�." << endl;
            chk = check;
            break;
        }
        else if (check == 2)
        {
            ::cout << "������ ������ ��Ͽ� �����ϱ⸦ �����ϼ̽��ϴ�." << endl;
            ::cout << "���ڸ� �Է����ּ��� : ";
            ::cin >> input;
            chk = check;
            break;
        }
        else
        {
            // �߸��� �Է� ó��
            // �޴��� ���� ��ȣ�� �Է����� ��� ��� �޽����� ����մϴ�.
            ::cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
        }
    }


    //�⺻���϶�
    if (chk == 1)
    {
        SimpleVector<int> T;

        while (true)
        {
            ::cout << "\n���" << endl;
            ::cout << "1. ���� ��Ͽ� �߰�" << endl;
            ::cout << "2. ���� ��Ͽ��� ����" << endl;
            ::cout << "3. ���� ��� ���� ���" << endl;
            ::cout << "4. ��� �ִ� ���� ���" << endl;
            ::cout << "5. ����" << endl;
            ::cout << "����: ";

            int choice; // ������� �޴� ������ ����
            ::cin >> choice;

            if (choice == 1) {
                // 1�� ����: ���� �߰�
                // ����ڷκ��� ���ڸ� �Է¹޾� data�� �߰��մϴ�.
                int num;
                ::cout << "���ڸ� �Է����ּ��� : ";
                ::cin.ignore(); // ���� �Է��� �ܿ� ���۸� ����
                ::cin >> num; // ���� �Է�
                T.push_back(num);// �Է¹��� ���� ������ �߰�
            }
            else if (choice == 2) {
                // 2�� ����: ���� ���� (���ڿ��� ���� ����)
                // ���� data�� ����� ������ �� �ڿ��ִ°ͺ��� ����
                T.pop_back();
            }
            else if (choice == 3)
            {
                // 3�� ���� : ���� ��� ���� ���
                // ���� BookManager�� ����� å ��Ͽ��� �������� å�� �ִ��� �˻��մϴ�.
                int size = T.size();
                ::cout << "�迭�� ���� ũ��� : " << size << endl;
            }
            else if (choice == 4)
            {
                // 4�� ���� : ��� �ִ� ���� ���
                // ���� BookManager�� ����� å ��Ͽ��� ���ڷ� å�� �ִ��� �˻��մϴ�.
                int capacity = T.capacity();
                ::cout << "�迭�� �ִ� ũ��� : " << capacity << endl;
            }
            else if (choice == 5) {
                // 5�� ����: ����
                // ���α׷��� �����ϰ� ����ڿ��� �޽����� ����մϴ�.
                ::cout << "���α׷��� �����մϴ�." << endl;
                break; // while ���� ����
            }
            else {
                // �߸��� �Է� ó��
                // �޴��� ���� ��ȣ�� �Է����� ��� ��� �޽����� ����մϴ�.
                ::cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
            }
        }//while ���κ�
    }
    else
    {
        SimpleVector<int> T(input);

        while (true)
        {
            ::cout << "\n���" << endl;
            ::cout << "1. ���� ��Ͽ� �߰�" << endl;
            ::cout << "2. ���� ��Ͽ��� ����" << endl;
            ::cout << "3. ���� ��� ���� ���" << endl;
            ::cout << "4. ��� �ִ� ���� ���" << endl;
            ::cout << "5. ����" << endl;
            ::cout << "����: ";

            int choice; // ������� �޴� ������ ����
            ::cin >> choice;

            if (choice == 1) {
                // 1�� ����: ���� �߰�
                // ����ڷκ��� ���ڸ� �Է¹޾� data�� �߰��մϴ�.
                int num;
                ::cout << "���ڸ� �Է����ּ��� : ";
                ::cin.ignore(); // ���� �Է��� �ܿ� ���۸� ����
                ::cin >> num; // ���� �Է�
                T.push_back(num);// �Է¹��� ���� ������ �߰�
            }
            else if (choice == 2) {
                // 2�� ����: ���� ���� (���ڿ��� ���� ����)
                // ���� data�� ����� ������ �� �ڿ��ִ°ͺ��� ����
                T.pop_back();
            }
            else if (choice == 3)
            {
                // 3�� ���� : ���� ��� ���� ���
                // ���� BookManager�� ����� å ��Ͽ��� �������� å�� �ִ��� �˻��մϴ�.
                int size = T.size();
                ::cout << "�迭�� ���� ũ��� : " << size << endl;
            }
            else if (choice == 4)
            {
                // 4�� ���� : ��� �ִ� ���� ���
                // ���� BookManager�� ����� å ��Ͽ��� ���ڷ� å�� �ִ��� �˻��մϴ�.
                int capacity = T.capacity();
                ::cout << "�迭�� �ִ� ũ��� : " << capacity << endl;
            }
            else if (choice == 5) {
                // 5�� ����: ����
                // ���α׷��� �����ϰ� ����ڿ��� �޽����� ����մϴ�.
                ::cout << "���α׷��� �����մϴ�." << endl;
                break; // while ���� ����
            }
            else {
                // �߸��� �Է� ó��
                // �޴��� ���� ��ȣ�� �Է����� ��� ��� �޽����� ����մϴ�.
                ::cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
            }
        }//while ���κ�
    }

    return 0;
}

