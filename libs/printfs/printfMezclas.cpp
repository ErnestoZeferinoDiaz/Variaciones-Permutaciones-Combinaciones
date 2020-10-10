void printfVariacionCR(char* items,int n,int r){
    char** matriz;
    int size;
    size = pow(n,r);
    matriz = initMatriz(size,r);
    variacionCR(items,matriz,n,r,NULL,0,NULL);
    printMatriz(matriz,size,r);
}

void printfCombinacionCR(char* items,int n,int r){
    char** matriz;
    int size;
    size = fact(n+r-1)/fact(r)/fact(n-1);
    matriz = initMatriz(size,r);
    combinacionCR(items,matriz,n,r,NULL,0,NULL);
    printMatriz(matriz,size,r);
}

void printfCombinacionSR(char* items,int n,int r){
    char** matriz;
    int size;
    size = fact(n)/fact(r)/fact(n-r);
    matriz = initMatriz(size,r);
    combinacionSR(items,matriz,n,r,NULL,0,NULL);
    printMatriz(matriz,size,r);
}