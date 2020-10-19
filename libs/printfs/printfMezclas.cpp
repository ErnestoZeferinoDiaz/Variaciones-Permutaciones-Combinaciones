void plantilla(char* items,int n,int r,int size,const char* title,void(*typeMezcla)(char*,char**,int,int,int*,int,int*)){
    char** matriz;
    matriz = initMatriz(size,r);
    typeMezcla(items,matriz,n,r,NULL,0,NULL);
    printf("\n\n *********** %s ************* ",title);
    printf("\n Total de mezclas: %d",size);
    printf("\n Lista de mezclas:");
    printMatriz(matriz,size,r);
}


void printfVariacionCR(char* items,int n,int r){
    plantilla(
        items,n,r,
        pow(n,r),
        "Variacion con repticion",
        variacionCR
    );
}

void printfVariacionSR(char* items,int n,int r){
    plantilla(
        items,n,r,
        fact(n)/fact(n-r),
        "Variacion sin repticion",
        variacionSR
    );
}

void printfPermutacionCirc(char* items,int n,int r){
    plantilla(
        items,n,n,
        fact(n-1),
        "Permutacion circular",
        permutacionCirc
    );
}

void printfCombinacionCR(char* items,int n,int r){
    plantilla(
        items,n,r,
        fact(n+r-1)/fact(r)/fact(n-1),
        "Combinacion con repeticion",
        combinacionCR
    );
}

void printfCombinacionSR(char* items,int n,int r){
    plantilla(
        items,n,r,
        fact(n)/fact(r)/fact(n-r),
        "Combinacion sin repeticion",
        combinacionSR
    );
}