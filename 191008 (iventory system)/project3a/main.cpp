#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> item{"tongkat", "shotgun", "batu"}; //pool dari item yg disediakan >> cara input yg mudah
    // vector<string> item{"tongkat", "shotgun", "batu"}; ~> fungsi yang bisa digunakan di compiler lain selain c++

    item.push_back("pisau"); //input item 1 >> cara input utk compiler khusus (c++)
    item.push_back("pedang"); //input item 2

    cout << item [3] << endl; //cara mengakses atau menampilkan item scr sederhana
    cout << item.size() << endl; //menampilkan size pool item
    cout << endl;

    /**
    //menampilkan semua isi pool item dengan Array
    for(int i=0; item.size(); ++i)
    {
        cout << item[i] << endl;
    }
    **/

    //menampilkan semua isi pool item menggunakan fungsi khusus vektor
    vector<string>::iterator penunjuk; //gunanya untuk menunjuk elemen2
    for(penunjuk = item.begin(); penunjuk != item.end(); ++penunjuk)
    {
        cout << *penunjuk << endl; //konsep * (pointer) adl memunculkan apa yang "ditunjuk"/isinya
    }
    cout << endl;

    //untuk menghapus item
    item.erase(item.begin()); //menghapus item yang pertama
    item.erase(item.begin()+2); //untuk menghapus isi yang kedua

    for(penunjuk = item.begin(); penunjuk != item.end(); ++penunjuk)
    {
        cout << *penunjuk << endl; //konsep * (pointer) adl memunculkan apa yang "ditunjuk"/isinya
    }

    return 0;
}
