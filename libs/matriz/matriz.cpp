char** initMatriz(int rows, int cols){
    char** matriz;
    matriz = new char*[rows];
    for(int x=0; x<rows; x++){
        matriz[x] = new char[cols];
    }
    return matriz;
}

void printMatriz(char** matriz,int rows, int cols){
    cout<<"\n";
    for(int x=0; x<rows; x++){
        cout<<"\n\t";
        for(int y=0; y<cols; y++){
            cout<<matriz[x][y]<<",";
        }
    }
}