//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    int count, marks, total = 0;

    cout << "Enter the number of subjects: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int n;
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> n;

        if (n <= 100 && n >= 0)
            total += n;

        else
            cout << "Invalid marks \n";

    }

    marks = total / count;
    if (marks >= 95)
        cout << "Grade O";

    else if (marks >= 85 && marks < 95)
        cout << "GRADE A";

    else if (marks >= 65 && marks < 85)
        cout << "GRADE B";

    else if (marks >= 50 && marks < 65)
        cout << "GRADE C";

    else
        cout << "GRADE FAIL";

    return 0;
}