#include <iostream>
#include <iomanip>
using namespace std;

long double fib[100000]; int n;

int main()
{
    cout << "Ile liczb Fibonacciego mam wyznaczyc: ";
    cin>>n;

    fib[0]=1;
    fib[1]=1;

    for (int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

cout<<setprecision(10000);

cout<<endl<<"wyraz nr "<<n<<":"<<fib[n-1];


    return 0;
}