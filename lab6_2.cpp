//Dialog of the first example is given below.
#include <iostream>
#include <string>

using namespace std;

int main () {
    string name,movie,time,text;
    int id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl << name << ": ";
    cin >> id; 
    cout << "Fahsai: I think you may be GEAR " << (id / int(1e7))-12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?" << endl << name << ": ";
    cin.ignore();
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl << name << ": ";
    getline(cin,time);
    cout << "Fahsai: " << time << "....that is OK!!! I'm looking forward to watching" << endl << movie << " with you." << endl << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << time << ". Bye Bye \(^ ^)/";
}
/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
