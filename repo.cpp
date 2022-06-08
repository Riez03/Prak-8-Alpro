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
