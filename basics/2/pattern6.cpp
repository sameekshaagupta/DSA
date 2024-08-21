void nNumberTriangle(int n) {
    int s=n;
    for(int i=n; i>0; i--){
        for(int j=1; j<=s; j++){
            cout << j << " ";
        }
        cout << "\n";
        s--;
    }
}