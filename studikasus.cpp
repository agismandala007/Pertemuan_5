#include <iostream>
#include <string>

using namespace std;
class Sks {
  public:
    void input();
    void hitung();
    void output();
    void loop(int a, int b);
  private:
    int biaya, nim, matkul[5], banyak, hargasks, sks;
    string nama;
};


void Sks::loop(int a, int b){
  if(a>b){
    hargasks-=(hargasks*0.1);
    hargasks-=(hargasks*0.05);
  }else{ 
    if(matkul[a]==1 || matkul[a]==3){
        sks=2+sks;
        hargasks=(biaya*sks)+hargasks;	
    }
    else if(matkul[a]==2){
        sks=1+sks;
        hargasks=(biaya*sks)+hargasks;
    } 
    loop(a+1, b);
  }
}

void Sks::input() {
  cout<<"+-------------------+"<<endl;	
  cout<<"| Daftar Matakuliah |"<<endl;
  cout<<"|-------------------|"<<endl;
  cout<<"| 1. AlPRO  | 2 sks |"<<endl;
  cout<<"| 2. Matdis | 1 sks |"<<endl;
  cout<<"| 3. PWEB   | 2 sks |"<<endl;
  cout<<"+-------------------+"<<endl;cout<<endl;
  cout<<"Nama   : ";getline(cin, nama);
  cout<<"NIM    : ";cin>>nim;
  cout<<"\nMasukkan banyak matakuliah yang di ambil :";cin>>banyak;
  for(int i=0; i<banyak; i++){
    cout<<"Masukkan kode matakuliah yang di ambil   :";cin>>matkul[i];
  }
}


void Sks::hitung(){
	biaya=120000; hargasks=0; sks=0; int i=0;
    loop(i, banyak);
}

  
void Sks::output(){
  cout<<"Nama        : "<<nama<<endl;
  cout<<"NIM         : "<<nim<<endl;
  cout<<"Total SKS   : "<<sks<<endl;
  cout<<"Pembayaran  : Rp. "<<hargasks;
  
}
int main(){
  Sks n;
  n.input();
  n.hitung();
  n.output();
}