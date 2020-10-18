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

    cout<<"\n Elementos disponibles: "<<n<<" => [";
    for(int x=0; x<n; x++){
        cout<<items[x];
        if(x<n-1){
            cout<<", ";
        }else{
            cout<<"]";
        }
    }
    
    printfVariacionCR(items,n,r);
    printfVariacionSR(items,n,r);
    printfPermutacionCirc(items,n,r);
    printfCombinacionCR(items,n,r);
    printfCombinacionSR(items,n,r);

    return 0;
}