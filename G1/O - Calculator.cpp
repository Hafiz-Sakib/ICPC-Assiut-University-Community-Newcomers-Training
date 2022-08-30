#include <iostream>
 
using namespace std;
int main(){
    int a,b;
    char s;
    cin >>a>>s>>b;
    if (int(s) == 43){
        cout<<a+b;
    }
    if (int(s) == 45){
        cout<<a-b;
    }
    if (int(s) == 42){
        cout<<a*b;
    }
    if (int(s) == 47){
        cout<<a/b;
    }
    return 0;
}
