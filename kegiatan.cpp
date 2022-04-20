#include<iostream>
using namespace std;

class Perulangan{
    public:
        perulangan(){return n=4;}
        void ulang_for(int);
        void ulang_rekursif(int);
    private:
        int n;
};

void Perulangan::ulang_for(int n){
    for (int i=1; i<=n; i++){
        cout<<i<<" ";
    }
}

void Perulangan::ulang_rekursif(int n){
    if(n<=0){}
    else{
        cout<<n<<" ";
        return ulang_rekursif(n-1);
    }
}

int main(){
    Perulangan x;
    cout<<"Menggunakan Iteratif"<<endl;x.ulang_for(4);cout<<endl;
    cout<<"Menggunakan Rekursif"<<endl;x.ulang_rekursif(4);
}