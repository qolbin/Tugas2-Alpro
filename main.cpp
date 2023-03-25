#include <iostream>

using namespace std;

// fungsi untuk mencari nilai maksimum dari suatu array
int cariMax(int arr[], int array_size) {
    int max_val = arr[0]; // asumsikan nilai maksimum pertama adalah elemen pertama array

    // iterasi melalui array untuk mencari nilai maksimum
    for (int i = 1; i < array_size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    return max_val;
}

// fungsi untuk mencari nilai mainimum dari suatu array
int CariMin(int x[], int n) {
    int min_val = x[0];
    for (int i = 1; i < n; i++) {
        if (x[i] < min_val) {
            min_val = x[i];
        }
    }
    return min_val;
}

//fungsi untuk mencari min dan max array
int find_min(int y[], int angka) {
    int ml_val = y[0];
    for (int i = 1; i < angka; i++) {
        if (y[i] < ml_val) {
            ml_val = y[i];
        }
    }
    return ml_val;
}

int find_max(int y[], int angka) {
    int mm_val = y[0];
    for (int i = 1; i < angka; i++) {
        if (y[i] > mm_val) {
            mm_val = y[i];
        }
    }
    return mm_val;
}

//funsgi isEven
bool isEven(int num) {
    return num % 2 == 0;
}

//fungsi isOdd
bool isOdd(int num) {
    return num % 2 != 0;
}

//fungsi isFactor
bool isFactor(int nomor, int factor) {
    return factor != 0 && nomor % factor == 0;
}

//fungsi isFound
bool isFound(int a[], int f, int number) {
    for (int i = 0; i < f; i++) {
        if (a[i] == number) {
            return true;
        }
    }
    return false;
}

//fungsi SumEven
int SumEven(int a[], int f) {
    int sum = 0;
    for (int i = 0; i < f; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}

//fungsi SumOdd
int SumOdd(int a[], int f) {
    int sum = 0;
    for (int i = 0; i < f; i++) {
       if (a[i] % 2 != 0) {
               sum += a[i];
        }
    }
    return sum;
}

int main() {
    //Funsgi max
    const int array_size = 5; // ukuran array
    int arr[array_size] = {1, 3, 5, 7, 11}; // inisialisasi array

    int max_val = cariMax(arr, array_size); // panggil fungsi untuk mencari nilai maksimum dari array

    cout << "Nilai maksimum dari array adalah: " << max_val << endl;

    //fungsi min
int x[] = {2, 4, 12, 18, 20};
    int n = sizeof(x) / sizeof(x[0]);

    int min_val = find_min(x, n);

    cout << "Nilai minimum dari array adalah: " << min_val << endl;

    //fungsi max array dan min array
    int y[] = {3, 8, 13, 34, 45};
    int angka = sizeof(y) / sizeof(y[0]);

    int ml_val = find_min(y, angka);
    int mm_val = find_max(y, angka);

    cout << "Nilai minimum dari array adalah: " << ml_val << endl;
    cout << "Nilai maksimum dari array adalah: " << mm_val << endl;

    //fungsi isEven
    int num = 25;

    if (isEven(num)) {
        cout << num << " adalah bilangan genap" << endl;
    } else {
        cout << num << " adalah bilangan ganjil" << endl;
    }

    //fungsi isOdd
    num = 100;

    if (isOdd(num)) {
        cout << num << " adalah bilangan ganjil" << endl;
    } else {
        cout << num << " adalah bilangan genap" << endl;
    }

    //fungsi isFactor
    int nomor = 21;
    int factor = 3;
    if (isFactor(nomor, factor)) {
        cout << factor << " adalah faktor dari " << nomor << endl;
    } else {
        cout << factor << " bukan faktor dari " << nomor << endl;
    }

    //isFound
    int a[] = {12, 15, 18, 21, 24};
    int f = sizeof(a) / sizeof(a[0]);
    int search_num = 30;
    if (isFound(a, f, search_num)) {
        cout << search_num << " terdapat pada array" << endl;
    } else {
        cout << search_num << " tidak terdapat pada array" << endl;
    }

    //SumEven
    int sum_even = SumEven(a, f);
    cout << "Jumlah bilangan genap dalam array adalah: " << sum_even << endl;

    //SumOdd
    int sum_odd = SumOdd(a, f);
    cout << "Jumlah bilangan ganjil dalam array adalah: " << sum_odd << endl;
    return 0;
}
