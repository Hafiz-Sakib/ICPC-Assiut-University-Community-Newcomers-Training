#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b;
    cin >> a>>b;
    cout << "floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<"\n";
    cout << "ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<"\n"; 
    cout << "round "<<a<<" / "<<b<<" = "<<round(a/b)<<"\n";
    return 0;
}
