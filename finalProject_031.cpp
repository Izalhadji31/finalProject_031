#include <iostream>
using namespace std;


class MataKuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;
public:
    MataKuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

    virtual float hitungNilaiAkhir() { return 0; }
    virtual void cekKelulusan() { return; }
    virtual void input() { return; }

    void setPresensi(float nilai) {
        this->presensi = nilai;
    }
    float getPresensi() {
        return presensi;
    }

    void setActivity(float nilai) {
        this->activity = nilai;
    }
    float getActivity() {
        return activity;
    }

    void setExercise(float nilai) {
        this->exercise = nilai;
    }
    float getExercise() {
        return exercise;
    }

    void setUjianAkhir(float nilai) {
        this->tugasAkhir = nilai;
    }
    float getUjianAkhir() {
        return tugasAkhir;
    }
};


class Pemrograman : public MataKuliah {
public:
    float hitungNilaiAkhir() {
        float nilaiakhir = (getPresensi() * 0.1) + (getActivity() * 0.2) + (getExercise() * 0.3) + (getUjianAkhir() * 0.4);
        return nilaiakhir;
    }

    void cekKelulusan() {
        if (hitungNilaiAkhir() > 75)
        {
            cout << "Selamat anda lulus dengan nilai akhir =" << hitungNilaiAkhir() << endl;
        }
        else
        {
            cout << " Anda tidak lulus dengan nilai akhir =" << hitungNilaiAkhir() << endl;
        }
    }

    void input() {
        float presensi, activity, exercise, tugasAkhir;

        cout << "masukan nilai presensi=";
        cin >> presensi;
        setPresensi(presensi);

        cout << "masukan  nilai activity =";
        cin >> activity;
        setActivity(activity);

        cout << "masukan nilai exercise =";
        cin >> exercise;
        setExercise(exercise);

        cout << "masukan nilai tugas akhir =";
        cin >> tugasAkhir;
        setUjianAkhir(tugasAkhir);

    }
};



int main() {
    bool ulang = true;
    while (ulang) {
        Pemrograman o;
        cout << "program dibuat" << endl;
        o.input();
        o.cekKelulusan();

        char pilihan;
        cout << "apakah anda ingin mengulang program? y/n =";
        cin >> pilihan;
        if ((pilihan) != 'y') {
            ulang = true;
        }
    }
    return 0;
}
