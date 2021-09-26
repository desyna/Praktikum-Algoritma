#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int surv[2], dead, odp;
    string zona, nama;

    cout << "\tProgram Zonasi Covid-19\n" << endl;  
   
    //input data
    cout << "Nama Kelurahan" << setw(17) << ": ";
    cin >> nama;
    cout << "Input jumlah kasus pertama" << setw(5) << ": ";
    cin >> surv[0];
    cout << "Input jumlah kasus kedua" << setw(7) << ": ";
    cin >> surv [1];
    cout << "Input jumlah kasus kematian" << setw(4) << ": ";
    cin >> dead;
    cout << "Input jumlah ODP" << setw(15) << ": ";
    cin >> odp;
    cout << "Indikator" << setw(27) << ": zona ";

    //output
    if(surv[0] > 0)
    {
        if(surv[1] > surv[0])
        {
            if (dead > 0)
            {
                if (odp>0)
                   {
                    zona="hitam";
                    cout << zona;
                   }
                else
                   {
                    zona = "-";
                    cout << zona;
                   }
                   
            }

            else if (dead == 0)
            {
                if (odp>0)
                   {
                    zona = "merah";
                    cout << zona;
                   }
                else
                   {
                    zona = "-";
                    cout << zona;
                   }
            }   
            else
            {
                zona = "-";
                cout << zona;
            }
        }
        else
        {
            zona = "-";
            cout << zona;
        }
    }
    else if(surv[0]==0)
    {
        if(surv[1]==0)
        {
            if(dead == 0)
            {
                if(odp > 0)
                {
                    zona = "orange";
                    cout << zona;
                }
                else if(odp==0)
                {
                    zona = "hijau";
                    cout << zona;
                }
                else
                {
                    zona = "-";
                    cout << zona;
                }
            }
            else
            {
                zona = "-";
                cout << zona;
            }
        }
        else
        {
            zona = "-";
            cout << zona;
        }
    }
    else
    {
        zona = "-";
        cout << zona;
    }
    
    //table
    //first
    cout << "\n\nKelurahan " << nama << endl;
    cout << setfill('\xc4') 
         << "\xda" << setw(15) << "\xc2"<< setw(15) 
         << "\xc2" <<setw(11) << "\xc2"<< setw(6) 
         << "\xc2" << setw(12) << "\xbf" << endl;
    cout << ("\xb3Kasus Pertama \xb3 Kasus Kedua  \xb3 Kematian \xb3 ODP \xb3 Indikator \xb3\n");
    cout << ("\xc3") << setw(15) << "\xc5"<< setw(15) 
         << "\xc5" <<setw(11) << "\xc5"<< setw(6) 
         << "\xc5" << setw(12) << "\xb4" << endl;
    //main
    cout << setfill(' ') 
         << "\xb3" << setw(8) << surv[0] << setw(7) 
         << "\xb3" << setw(8) << surv[1] << setw(7) 
         << "\xb3" << setw(6) << dead << setw(5)
         << "\xb3"<< setw(3) << odp << setw(3)
         << "\xb3" << setw(6) << zona << setw(6) << "\xb3" << endl;
    //last
    cout << "\xc0" << setfill('\xc4')<<setw(15) 
         << "\xc1"<< setw(15) << "\xc1" <<setw(11) 
         << "\xc1"<< setw(6) << "\xc1" << setw(12) << "\xd9" << endl;

    cout << "\t\t\tTerima Kasih :>";
    
return 0;
}