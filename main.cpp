#include <iostream>

using namespace std;


void chances()
{
    string surname, name;
    int age, expect;
    cin >> surname >> name >> age >> expect;
    cout << "����� ������� " << expect <<
    " ������ � " << surname << " "  << name << " ࠢ�� " << abs(age-100) << "%";
}


void Acalc()
{
    float sequence[100];
    int counter = 0;
    float sum = 0;
    while (counter == 0 || cin.get() != '\n')
    {
        cin >> sequence[counter];
        sum += sequence[counter];
        counter++;
    }
    sum = sum/counter;
    cout << sum;
}

void Bcalc()
{
    float sequence[100];
    int counter = 0, subcounter = 0;
    float sum = 0;
    int step = 0;
    while (counter == 0 || cin.get() != '\n')
    {
        if (counter == 0)
        {
            cin >> step;
        }
        cin >> sequence[counter];
        if ((counter+1)%step == 0)
        {
            sum += sequence[counter];
            subcounter++;
        }
        counter++;
    }
    sum = sum/subcounter;
    cout << sum;
}

void swap()
{
    // ����� ���祭�� � ����
    int a,b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    cout << &a << " " << &b << endl;

    // ����� ���祭�� �� �����
    int *c = &a;
    int *d = &b;

    int t = *c;
    *c = *d;
    *d= t;
    cout << a << " " << b << endl;
    cout << &a << " " << &b;
}

long long factrec(int m, long long sum)
{
    if (m==1)
    {
        return sum;
    }
    else
    {
        sum*=m;
        return factrec(m-1, sum);
    }
}

long long factiter(int m)
{
    long long sum = 1;
    for (int i = 1; i<=m; i++)
    {
        sum*=i;
    }
    return sum;
}

void fact()
{
    int a;
    cin >> a;

    cout << factrec(a, 1) << endl;
    cout << factiter(a);
}
void matrix()
{
    // ��ࢠ� �����
    int a,b;
    cin >> a >> b;
    int A[a][b];
    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            cin >> A[i][j];
        }
    }

    // ���� �����
    int c, d;
    cin >> c >> d;
    int B[c][d];
    for (int i = 0; i<c; i++)
    {
        for (int j = 0; j<d; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "����� A" << endl;
    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "����� B" << endl;
    for (int i = 0; i<c; i++)
    {
        for (int j = 0; j<d; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "��������� �� �᫮: 2" << endl;

    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            A[i][j] = A[i][j] * 2;
        }
    }

    for (int i = 0; i<c; i++)
    {
        for (int j = 0; j<d; j++)
        {
            B[i][j] = B[i][j] * 2;
        }
    }

    cout << "����� A" << endl;
    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "����� B" << endl;
    for (int i = 0; i<c; i++)
    {
        for (int j = 0; j<d; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }


    if (c==b)
    {
        cout << "��६������� �����" << endl;
        for (int i = 0; i<a; i++)
        {
            for (int j = 0; j<d; j++)
            {
                int sum = 0;
                for (int k = 0; k<c; k++)
                {
                    sum += A[i][k] * B[k][j];
                }
                cout << sum << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "��६������� ����������" << endl;
    }

    if (a == c && b == d)
    {
        cout << "�㬬� �����" << endl;
        for (int i = 0; i<a; i++)
        {
            for (int j = 0; j<b; j++)
            {
                cout << A[i][j] + B[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "�㬬� ����������" << endl;
    }

    cout << "�࠭ᯮ��஢���� �����" << endl;
    cout << "����� A" << endl;
    for (int i = 0; i<b; i++)
    {
        for (int j = 0; j<a; j++)
        {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

    cout << "����� B" << endl;
    for (int i = 0; i<d; i++)
    {
        for (int j = 0; j<c; j++)
        {
            cout << B[j][i] << " ";
        }
        cout << endl;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    // 1 task
    //chances();
    // 2 task
    //Acalc();
    //Bcalc();
    // 3 task
    //swap();
    // 4 task
    //fact();
    // 5 task
    //matrix();
}
