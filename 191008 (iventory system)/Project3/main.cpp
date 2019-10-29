#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> item{"permata", "pisau", "pedang", "tongkat sihir", "potion"};
    vector<string>::iterator penunjuk;
    int pilih;
    int hapus;
    char lagi = 'y';

    cout << "Item yang tersedia: ";
    cout << item.size() << endl;
    cout << "Kapasitas inventory: 5" << endl;

    while(lagi == 'y')
    {
        cout << endl;
        cout << "Menu pilihan:" << endl;
        cout << "1. Tampilkan inventory" << endl;
        cout << "2. Tambah inventory" << endl;
        cout << "3. Hapus inventory" << endl;
        cout << endl;

        cout << "Input pilihan: ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                for(penunjuk = item.begin(); penunjuk != item.end(); ++penunjuk)
                {
                    cout << *penunjuk << endl;
                }
            break;
            case 2: cout << "belum jadi hehehee.." << endl;
            break;
            case 3:
                cout << "(urutan item dari 0-4)" << endl;
                cout << "Item keberapa yang ingin di hapus? ";
                cin >> hapus;

                item.erase(item.begin()+hapus);

                cout << endl;
                for(penunjuk = item.begin(); penunjuk != item.end(); ++penunjuk)
                {
                    cout << *penunjuk << endl;
                }
            break;
        }

        cout << endl;
        cout << "Cek inventory lagi? [y/n] ";
        cin >> lagi;
    }

    return 0;
}
