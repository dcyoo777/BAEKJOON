#include "iostream"

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string c;
    int x;

    cin >> n;

    bool number_set[20];

    for (int i = 0; i < 20; i++)
    {
        number_set[i] = false;
    }

    for (int i = 0; i < n; i++)
    {

        cin >> c;

        if (c == "all")
        {
            for (int j = 0; j < 20; j++)
            {
                number_set[j] = true;
            }
            continue;
        }

        if (c == "empty")
        {
            for (int j = 0; j < 20; j++)
            {
                number_set[j] = false;
            }
            continue;
        }

        cin >> x;

        if (c == "add")
        {
            number_set[x - 1] = true;
            continue;
        }

        if (c == "remove")
        {
            number_set[x - 1] = false;
            continue;
        }

        if (c == "toggle")
        {
            number_set[x - 1] = !number_set[x - 1];
            continue;
        }

        if (c == "check")
        {
            cout << (number_set[x - 1] ? "1" : "0") << "\n";
        }
    }

    return 0;
}
