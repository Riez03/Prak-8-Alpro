#include <iostream>
using namespace std;
class data{
  public:
    void input();
    void proses();
    void output();
  private:
    string nama[5] = {"Logitech" , "Microsoft", "Apple", "Philips", "Dell   "};
    int total=0;
    int stok[5] = {5, 18, 17, 2, 1};
    int harga[5]={130000, 200000, 231000, 190000, 141000};
    float nilai[10][10];
};
void data::input(){
	nilai[0][0]= 5;
    nilai[0][1]= 130000;
    nilai[1][0]= 8;
    nilai[1][1]= 200000;
    nilai[2][0]= 17;
    nilai[2][1]= 231000;
    nilai[3][0]= 2;
    nilai[3][1]= 190000;
    nilai[4][0]= 1;
    nilai[4][1]= 141000;
}
void data::proses(){
    cout<<"|=======================================|" <<endl;
    cout<<"|Nama\t\t|Stok\t | Harga\t|"<<endl;
    cout<<"|=======================================|" <<endl;
    for(int i=0; i<5; i++ )
    {
         cout <<"|" <<i+1 <<"."<<nama[i] <<"\t|"<<stok[i]<<"\t | "<<harga[i] <<"\t|" <<endl;
    }
    cout<<"|=======================================|" <<endl;
}
void data::output(){
  for(int i=0; i<5; i++){
    		total=total+nilai[i][0]*nilai[i][1];
		}
  cout<<endl;
  cout<<"Total penjualan : " <<total;
}
int main()
{
    data run;
    run.input();
    run.proses();
    run.output();
}
