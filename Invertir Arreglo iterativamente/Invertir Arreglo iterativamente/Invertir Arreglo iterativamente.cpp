#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void invIter(int a) {
    const size_t tam{ a.size() };
    array<int, tam > n{};
    n = a;
    for (int i{ 0 }; i < n.size; i++, n.size--) {
        a[i] = n[n.size() - 1];
        cout << a[i] << endl;
    }
}
int main()
{
    array<int, 7>zap{ 8,7,6,5,4,3,2 };
    invIter(zap);
}
