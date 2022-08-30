#include <iostream>
 
using namespace std;
int main(){
    int a,b,c,min,max;
    cin >>a>>b>>c;
    //Min
    if (a<b &a<c){
        min = a;
    }
    else if (b<c){
        min = b;
    }
    else{
        min = c;
    }
    cout<<min<<" ";
    
    //Max
    if (a>b & a>c){
        max = a;
    }
    else if (b>c){
        max = b;
    }
    else{
        max = c;
    };
    cout<<max;
    return 0;
}
