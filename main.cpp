#include <iostream>
#include <cmath>
using namespace std;
#include "libs\matriz\matriz.cpp"
#include "libs\mezclas\mezclas.cpp"
#include "libs\util\functions.cpp"
#include "libs\printfs\printfMezclas.cpp"

int main(){
    char items[] = {'a','b','c','d','e','f','g','h','i'};
    int n,r;
    char** matriz;
    int size;

    cout<<"\n N:";
    cin>>n;
    cout<<"\n R:";
    cin>>r;
    
    printfVariacionCR(items,n,r);
    printfCombinacionCR(items,n,r);

    return 0;
}