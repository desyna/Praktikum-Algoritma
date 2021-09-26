#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int pengajar[100], siswa[100], anggaranp[10], anggarans[10];

    cout << "\tProgram Anggaran Kuota PJJ\n\n";
    
    char option;
    cout << "Pilih jenis:"<<endl;
    cout << setfill('\xc4') 
         << "\xda" << setw(4) << "\xc2"<< setw(20) << "\xbf" << endl;
    cout << ("\xb3No \xb3 Jenis             \xb3\n");
    cout << "\xc3" << setw(4) << "\xc5"<< setw(20) << "\xb4" << endl;
    cout << ("\xb3 1 \xb3 Pengajar          \xb3\n")
         << ("\xb3 2 \xb3 Siswa             \xb3\n");
    cout << "\xc0" <<setw(4) << "\xc1"<< setw(20) << "\xd9" << endl;
    cout << "Masukkan Pilihan Anda = ";
    cin >> option;

    //option 1
    if (option=='1')
    {
        char option1;
        cout << "\nDaftar Pilihan"<<endl;
        cout << setfill('\xc4')
             << "\xda" << setw(4) << "\xc2"<< setw(20) << "\xbf" << endl;
        cout << ("\xb3No \xb3 Pengajar          \xb3\n");
        cout << "\xc3" << setw(4) << "\xc5"<< setw(20) << "\xb4" << endl;
        cout << ("\xb3 1 \xb3 PAUD              \xb3\n")
             << ("\xb3 2 \xb3 SD                \xb3\n")
             << ("\xb3 3 \xb3 SMP               \xb3\n")
             << ("\xb3 4 \xb3 SMA               \xb3\n")
             << ("\xb3 5 \xb3 Perguruan Tinggi  \xb3\n");
        cout << "\xc0" <<setw(4) << "\xc1"<< setw(20) << "\xd9" << endl;
        cout << setfill(' ');
        cout << "Masukkan pilihan anda" << setw(11) << "= ";
        cin>>option1;
        
        if (option1=='1')
        {
            cout << "Masukkan jumlah pengajar PAUD" << setw(3) << "= ";
            cin>>pengajar[0];

            anggaranp[0] = pengajar[0] * 42 * 6000;
            cout << "Anggaran" << setw(24) << "= " << anggaranp[0] << endl;
        }
        else if (option1=='2')
        {
            cout << "Masukkan jumlah pengajar SD" << setw(5) << "= ";
            cin>>pengajar[1];

            anggaranp[1] = pengajar[1] * 42 * 6000;
            cout << "Anggaran" << setw(24) << "= " << anggaranp[1] << endl;
        }
        else if (option1=='3')
        {
            cout << "Masukkan jumlah pengajar SMP" << setw(4) << "= ";
            cin >> pengajar[2];

            anggaranp[2] = pengajar[2] * 42 * 6000;
            cout << "Anggaran" << setw(24) << "= " << anggaranp[2] << endl;
        }
        else if (option1=='4')
        {
            cout << "Masukkan jumlah pengajar SMA" << setw(4) << "= ";
            cin >> pengajar[3];

            anggaranp[3] = pengajar[3] * 42 * 6000;
            cout << "Anggaran" << setw(24) << "= " << anggaranp[3] << endl;
        }
        else if (option1=='5')
        {
            cout << "Masukkan jumlah pengajar Perguruan Tinggi" << setw(1) << "= ";
            cin >> pengajar[4];

            anggaranp[4] = pengajar[4] * 50 * 6000;
            cout << "Anggaran" << setw(24) << "= " << anggaranp[4] << endl;
        }
        else
        {
            cout << "input salah" << endl;
        }
    }
    else if (option=='2')
    {
        char option2;
        cout << "\nDaftar Pilihan"<<endl;
        cout << setfill('\xc4')
             << "\xda" << setw(4) << "\xc2"<< setw(17) << "\xbf" << endl;
        cout << ("\xb3No \xb3 Siswa          \xb3\n");
        cout << "\xc3" << setw(4) << "\xc5"<< setw(17) << "\xb4" << endl;
        cout << ("\xb3 1 \xb3 PAUD           \xb3\n")
             << ("\xb3 2 \xb3 SD             \xb3\n")
             << ("\xb3 3 \xb3 SMP            \xb3\n")
             << ("\xb3 4 \xb3 SMA            \xb3\n")
             << ("\xb3 5 \xb3 Mahasiswa      \xb3\n");
        cout << "\xc0" <<setw(4) << "\xc1"<< setw(17) << "\xd9" << endl;
        cout << setfill(' ');
        cout << "Masukkan pilihan anda"<< setw(8) << "= ";
        cin >> option2;
        if (option2=='1')
        {
            cout << "Masukkan jumlah siswa PAUD" << setw(3) << "= ";
            cin >> siswa[0];

            anggarans[0] = siswa[0] * 20 * 6000;
            cout << "Anggaran" << setw(21) << "= "  << anggarans[0] << endl;
        }
        else if (option2=='2')
        {
            cout << "Masukkan jumlah pengajar SD" << setw(5) << "= ";
            cin >> siswa[1];

            anggarans[1] = siswa[1] * 35 * 6000;
            cout << "Anggaran" << setw(21) << "= " << anggarans[1] << endl;
        }
        else if (option2=='3')
        {
            cout << "Masukkan jumlah pengajar SMP" << setw(4) << "= ";
            cin >> siswa[2];

            anggarans[2] = siswa[2] * 35 * 6000;
            cout << "Anggaran" << setw(21) << "= "  << anggarans[2] << endl;
        }
        else if (option2=='4')
        {
            cout << "Masukkan jumlah pengajar SMA" << setw(4) << "= ";
            cin >> siswa[3];

            anggarans[3] = siswa[3] * 35 * 6000;
            cout << "Anggaran" << setw(21) << "= "  << anggarans[3] << endl;
        }
        else if (option2=='5')
        {
            cout << "Masukkan jumlah Mahasiswa" << setw(4) << "= ";
            cin >> siswa[4];

            anggarans[4] = siswa[4] * 50 * 6000;
            cout << "Anggaran" << setw(21) << "= "  << anggarans[4] << endl;
        }
        else
        {
            cout << "input salah" << endl;
        }
    }
    else
    {
        cout << "input salah" << endl;
    }

    cout << setfill('\xc4') << setw(40) <<"\n";
    cout << "\tThank You :>" <<endl;

return 0;
}