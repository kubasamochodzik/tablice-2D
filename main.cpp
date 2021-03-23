#include <iostream>
#include <ctime>

using namespace std;

int t[10][10];

int losuj()
{
    return rand()%4 + 1;
}

int main()
{
    srand(time(0));
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            t[i][j] = losuj();
            sum += t[i][j];
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << t[i][j];
        }
        cout << endl;
    }
    cout << "Suma: " << sum << endl;

    return 0;
}
