#include <iostream>
using namespace std;

auto hello(string s)
{
    
    return [&]() -> int
    {
        cout<<s<<endl;
        return 5;
    };
}
int main()
{
    string s = "ali";
    hello(s)();
    auto r = hello(s);
    r();
    return 0;
}