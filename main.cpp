#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int N;
    cout << "Введите n элементов массива = ";
    cin >> N;
    int a[N];
    int i;
    srand(time(0));
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 41 - 20;
        cout << setw(5) <<  a[i];
    }
    cout << "Перетворення" <<endl ;
    int minIndex = 0, maxIndex = 0;
    for (int i = 0; i < N; ++i)
    {
        if (abs(a[i]) < abs(a[minIndex])) minIndex = i;
        if (abs(a[i]) > abs(a[maxIndex])) maxIndex = i;
    }
    int temp = (abs(a[maxIndex]) >= abs(a[minIndex])+10 ? abs(a[maxIndex]) : -1*abs(a[maxIndex]));
    for (int i = N-1; i >= 0; --i)
        a[i] += temp;
    for (int i = 0; i < N; ++i)
        cout << " " << a[i];

    return 0;
}
