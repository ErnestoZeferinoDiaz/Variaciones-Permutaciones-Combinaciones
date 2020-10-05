int fact(int n){
    int resp=1;
    for(int x=1; x<=n; x++){
        resp = resp * x;
    }
    return resp;
}

int factR(int n){
    if(n==0){
        return 1;
    }else{
        return n*factR(n-1);
    }
}