//Fibonacci Series

#include <iostream>
using namespace std;

int main() 
{
    int n;
    int t1 = 0, t2 = 1;
    int  nextTerm = 0;

    cout << "Enter the number of terms: \t";
    cin >> n;
    cout << "Fibonacci Series: "<<endl;

    for (int i = 1; i <= n; ++i) 
    {
        if(i == 1) 
        {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) 
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}