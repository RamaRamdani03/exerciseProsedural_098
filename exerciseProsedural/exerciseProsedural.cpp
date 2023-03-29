#include <iostream>
#include <string>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double c) {
	if (c >= 70)
		return "diterima";
	else
		return "ditolak";
}

string status2(double r, double n) {
	if (r >= 70 && n >= 80)
		return "diterima";
	else
		return "ditolak";
}

string status3 (double r, double n, double m){
    if (r >=70 || n >= 80 )
    return "diterima";
    else
    return "ditolak";
}

int main(){
    double nilM,nilB;

    cout << "masukan nilai matematika = ";
    cin >> nilM;
    cout << "masukan nilai bahasa Inggris = ";
    cin >> nilB;
	cout<< "Status kelulusan  : " << status(rerata(nilM,nilB));
    cout<< "\nStatus kelulusan ke2 : " << status2(rerata(nilM,nilB),nilM);
    cout<< "\nStatus kelulusan ke 3: " << status3(rerata(nilM,nilB), nilM,nilB);
   
}


int main() {
    const int jumlahKandidat = 20;
    string nama[jumlahKandidat];
    string status[jumlahKandidat];

    for (int i = 0; i < jumlahKandidat; i++) {
        cout << "Masukkan nama kandidat " << i + 1 << ": ";
        cin >> nama[i];

        double nilaiMatematika, nilaibahasa_inggris;

        cout << "Masukan nilai Matematika: ";
        cin >> nilaiMatematika;

        cout << "Masukan nilai bahasa inggris: ";
        cin >> nilaibahasa_inggris;

        double rataRata = (nilaiMatematika + nilaibahasa_inggris) / 2.0;
        if (rataRata >= 70.0 && nilaiMatematika > 80.0) {
            status[i] = "diterima";
        }
        else {
            status[i] = "tidak diterima";
        }
    }

    cout << "Daftar kandidat:" << endl;
    for (int i = 0; i < jumlahKandidat; i++) {
        cout << nama[i] << " " << status[i] << endl;
    }

    return 0;
}