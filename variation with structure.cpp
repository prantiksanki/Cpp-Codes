 #include <iostream>
using namespace std;

struct pointer
{
    int a;
    int b;
};

int main()
{
    struct pointer* w = new pointer;
    // struct pointer*p = &w;



    cin >> (*w).a;
    cin >> w->b;

    cout << w->a << " " << w->b;

    return 0;
}
