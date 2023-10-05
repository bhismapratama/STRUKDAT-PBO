#include <iostream>
#include <map>
#include <ctime>

using namespace std;

map<string, map<string, string> > dataAkun;

string generateSalt() {
    string salt = "";
    const string karakter = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        salt += karakter[rand() % karakter.length()];
    }
    return salt;
}

string hashFunction(string password, string salt) {
    // gabungan password dan salt untuk hash lebih aman
    return password + salt; 
}

string iterativeHashFunction(string password) {
    for (int i = 0; i < 1000; i++) {
        password = hashFunction(password, generateSalt());
    }
    return password; 
}

void registerAkun()
{
    string username, password, fullname;
    cout << "Masukkan Username: " << endl;
    cin >> username;
    cout << "Masukkan Password: " << endl;
    cin >> password;
    cout << "Masukkan Nama Lengkap: " << endl;
    cin >> fullname;

    string hashedPassword = iterativeHashFunction(password);

    string hash_key = to_string(hashedPassword[0]);

    map<string, string> dataDetail;
    dataDetail["username"] = username;
    dataDetail["fullname"] = fullname;

    dataAkun[hash_key] = dataDetail;
}

void loginAkun()
{
    string username, password;
    cout << "Masukkan Username: " << endl;
    cin >> username;
    cout << "Masukkan Password: " << endl;
    cin >> password;

    string hashedPassword = iterativeHashFunction(password);
    string hash_key = to_string(hashedPassword[0]);

    cout << endl;
    if (dataAkun.find(hash_key) != dataAkun.end())
    {
        cout << "Login berhasil!" << endl << endl;
        cout << "==== Account Details ====" << endl;
        cout << "Username: " << dataAkun[hash_key]["username"] << endl;
        cout << "Fullname: " << dataAkun[hash_key]["fullname"] << endl;
    } else {
        cout << "Login gagal!" << endl << endl;
    }
}

void printAkun()
{
    cout << endl;
    for (auto i = dataAkun.begin(); i != dataAkun.end(); i++)
    {
        cout << "Key: " << i->first << "\t"
            << " Username: " << i->second["username"] << " Fullname: " << i->second["fullname"] << endl;
    }
}

void menu()
{
    while (true)
    {
        int input_user;

        cout << endl;
        cout << "==== MENU ====" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;

        cout << endl;
        cout << "Pilih Menu: " << endl;
        cin >> input_user;

        if (input_user == 1)
        {
            registerAkun();
        }
        else if (input_user == 2)
        {
            loginAkun();
        }
        else if (input_user == 3)
        {
            printAkun();
            break;
        }
        else
        {
            cout << "Invalid!" << endl;
        }
    }
}

int main()
{
    menu();
    return 0;
}
