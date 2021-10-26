#include <iostream>
using namespace std;

int main()
{
    int penting, mendesak, kegiatan;
    string kesimpulan;
    
    cout<<"ketik 1 jika ya, ketik 0 jika tidak"<<endl;
    cout<<endl;
    cout<<"Apakah kegiatan itu penting? ";
    cin>>penting;
    cout<<"Apakah kegiatan itu mendesak? ";
    cin>>mendesak;
    cout<<"----------------------------------------"<<endl;
    
        if(penting==1)
        {
            cout<<"Kegiatan itu penting"<<endl;
            if(mendesak==1)
            {
                cout<<"Kegiatan itu juga mendesak";
                kesimpulan = "KERJAKAN SEKARANG JUGA!!!";
            }
            else
            {
                cout<<"Tapi kegiatan itu tidak mendesak";
                kesimpulan = "mengatur jadwal untuk mengerjakannya";
            }
        }
        else
        {
            cout<<"Kegiatan itu tidak penting"<<endl;
            if(mendesak==1)
            {
                cout<<"Tapi kegiatan itu mendesak";
                kesimpulan = "meminta bantuan pada teman";
            }
            else
            {
                cout<<"Kegiatan itu juga tidak mendesak"<<endl;
                cout<<endl;
                cout<<"Jenis kegiatan lain : "<<endl;
                cout<<"1. Istirahat (ketik 2)\n2. Mencari uang (ketik 1)\n3. Melakukan hobi (ketik 0)"<<endl;
                cout<<"Jenis kegiatan apa yang kamu pilih? ";
                cin>>kegiatan;
                if(kegiatan==2)
                {
                    cout<<"Silahkan beristirahat";
                }
                else if(kegiatan==1)
                {
                    cout<<"Ayo cari uang!! gimana caranya?"<<endl;
                    cout<<"1. Jualan\n2. Barista\n3. Jadi guru les";
                }
                else
                {
                    cout<<"Ada beberapa pilihan hobi buat kamu"<<endl;
                    cout<<"1. Nonton film\n2. Main Game\n3. Hangout";
                }
                kesimpulan = "melakukan kegiatan lain";
                
            }
        }
        
        cout<<endl;
        cout<<"Jadi kamu bisa : "<<kesimpulan<<endl;
        
    return 0;
}
