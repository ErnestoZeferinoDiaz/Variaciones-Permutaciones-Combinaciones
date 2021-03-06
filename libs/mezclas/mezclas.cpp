void almacenando(char* items,char** almacen,int r,int* indexs,int* indice){
    for(int k=0; k<r; k++){   
        almacen[*indice][k] = items[indexs[k]];
    }
    *indice = *indice + 1;
}

void initParams(int r,int** indexs,int** cont){
    int tmp = 0;
    *cont = &tmp;
    *indexs = new int[r];
}

void variacionCR(char* items,char** almacen,int n,int r,int* indexs,int i,int *cont){
    if(i<r){
        if(i==0){
            initParams(r,&indexs,&cont);
        }
        indexs[i] = 0;
        while(indexs[i]<n){
            variacionCR(items,almacen,n,r,indexs,i+1,cont);
            indexs[i] = indexs[i] + 1;
        }
    }else{
        almacenando(items,almacen,r,indexs,cont);
    }
}

bool ifLastExist(int* array, int indexLast){
    bool resp = false;
    for(int x=0; x<indexLast && !resp; x++){
        resp = array[x] == array[indexLast];
    }
    return resp;
}

void variacionSR(char* items,char** almacen,int n,int r,int* indexs,int i,int *cont){
    if(i<r){
        if(i==0){
            initParams(r,&indexs,&cont);
        }
        indexs[i] = 0;
        while(indexs[i]<n){
            if(!ifLastExist(indexs,i)){
                variacionSR(items,almacen,n,r,indexs,i+1,cont);
            }
            indexs[i] = indexs[i] + 1;
        }
    }else{
        almacenando(items,almacen,r,indexs,cont);
    }
}

void permutacionCirc(char* items,char** almacen,int n,int r,int* indexs,int i,int *cont){
    initParams(r,&indexs,&cont);
    indexs[i] = 0;
    variacionSR(items,almacen,n,r,indexs,i+1,cont);
}

void combinacionCR(char* items,char** almacen,int n,int r,int* indexs,int i,int *cont){
    if(i<r){
        if(i==0){
            initParams(r,&indexs,&cont);
            indexs[i] = 0;
        }else{
            indexs[i] = indexs[i-1];
        }
        while(indexs[i]<n){
            combinacionCR(items,almacen,n,r,indexs,i+1,cont);
            indexs[i] = indexs[i] + 1;
        }
    }else{
        almacenando(items,almacen,r,indexs,cont);
    }
}

void combinacionSR(char* items,char** almacen,int n,int r,int* indexs,int i,int *cont){
    if(i<r){
        if(i==0){
            initParams(r,&indexs,&cont);
            indexs[i] = 0;
        }else{
            indexs[i] = indexs[i-1] + 1;
        }
        while(indexs[i]<n){
            combinacionSR(items,almacen,n,r,indexs,i+1,cont);
            indexs[i] = indexs[i] + 1;
        }
    }else{
        almacenando(items,almacen,r,indexs,cont);
    }
}