#include <iostream>
using namespace std;
class Student {
private:
    string name;
    string birthday;
    string sport_compet;
public:
    void SetData() {
        cout << "\nInput name: "; cin >> name;
        cout << "Input birthday: "; cin >> birthday;
        cout << "Input sport competition: "; cin >> sport_compet;
        }

    void GetData() {
        cout << "\n\nname: " << name;
        cout << "\nbirthday: " << birthday;
        cout << "\nCompetition: " << sport_compet;
    }

    string Comp() {
        return sport_compet;

    }

    bool GetCompet(string a) {
        if (sport_compet == a)
        {
            return true;
        }
        else
            return false;
    }
};


int main()
{
    const int n = 4;
    Student* student = new Student[n];
    
    while (true) {
        char number;
        cout << "\n\n\nfunctions: \n 1 - enter student's data\n 2 - recieve student's data(please at first enter data)\n 3 - compare competitions\n q - quit program \nyour choise:  ";
        cin >> number;
        cin.ignore();

        switch (number)
        {
        case'1':
        {
            for (int i = 0; i < n; i++)
            {
                cout << "\n\nenter student's info ";
                student[i].SetData();
            }

            break;
        }

        case'2':
        {
            for (int i = 0; i < n; i++)
            {
                student[i].GetData();
            }

            break;
        }

        case'3':
        {
            string c_name;
            cout << "enter competititon name: ";
            cin >> c_name;
            cin.ignore();

            for (int i = 0; i < n; ++i)
            {
                //if (student[i].GetCompet(c_name))
                if(student[i].Comp() == c_name)
                {
                    student[i].GetData();
                }
            }
            break;
        }

        case'q':
        {
            cout << "exitting the program...";
            return 0;
        }

        default:
        {
            cerr << "wrong value";
            return 0;
        }
        }
    }
}
