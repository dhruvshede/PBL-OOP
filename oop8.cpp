
#include <iostream>
using namespace std;

class basic_info
{
protected:
    char name[30];
    int emp_id;

public:
    void basicinfo()
    {
        cout << "Enter name of employee: ";
        cin >> ws;
        cin.getline(name, 30);

        cout << "Enter employee ID: ";
        cin >> emp_id;
    }
};

class dept_info
{
protected:
    char dept_name[15];
    char work[50];

public:
    void deptinfo()
    {
        cout << "Enter department name: ";
        cin >> ws;
        cin.getline(dept_name, 15);

        cout << "Enter work: ";
        cin.getline(work, 50);
    }
};

class employeeinfo : public basic_info, public dept_info
{
public:
    void display_info()
    {
        cout << "\nBasic Information" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;

        cout << "\nDepartment Information" << endl;
        cout << "Department: " << dept_name << endl;
        cout << "Work: " << work << endl;
    }
};

int main()
{
    employeeinfo emp[50];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter information for employee " << i + 1 << endl;

        emp[i].basicinfo();
        emp[i].deptinfo();
    }

    cout << "\n===== Employee Information =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].display_info();
    }

    return 0;
}
