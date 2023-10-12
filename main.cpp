#include <iostream>
using namespace std;
// Method 1
//string doctorRemark(string partnerX, string partnerY);
//
//int main() {
//
//    string partnerX;
//    string partnerY;
//
//    cout <<"Input the genotype of partner X: "<<endl;
//    cin >>partnerX;
//
//    cout <<"Input the genotype of partner Y: "<<endl;
//    cin >>partnerY;
//
//    doctorRemark(partnerX, partnerY);
//
//    return 0;
//}
//
//string doctorRemark(string partnerX, string partnerY) {
//
//    if (partnerX == "AA" && partnerY == "AA") {
//        cout<< "AA" << " " << "AA" << " " << "AA" << " " << "AA" << endl;
//        cout<<"Can Marry";
//    } else if (partnerX == "AA" && partnerY =="AS") {
//        cout << "AA" << " " << "AS" << " " << "AA" << " " << "AS" << endl;
//        cout << "Can Marry";
//    } else if (partnerX == "AS" && partnerY =="AS") {
//        cout << "AA" << " " << "AS" << " " << "AS" << " " << "SS" << endl;
//        cout << "Not to Marry";
//    } else if (partnerX == "SS" && partnerY =="AA") {
//        cout << "AS" << " " << "AS" << " " << "AS" << " " << "AS" << endl;
//        cout << "Can Marry";
//    } else if (partnerX == "SS" && partnerY =="SS") {
//        cout << "SS" << " " << "SS" << " " << "SS" << " " << "SS" << endl;
//        cout << "Not to Marry";
//    } else if (partnerX == "AS" && partnerY =="SC") {
//        cout << "SS" << " " << "AS" << " " << "AC" << " " << "SC" << endl;
//        cout << "Not to Marry";
//    } else if (partnerX == "AS" && partnerY =="CC") {
//        cout << "AC" << " " << "AC" << " " << "SC" << " " << "SC" << endl;
//        cout << "Not to Marry";
//    } else if (partnerX == "AA" && partnerY =="SC") {
//        cout << "AS" << " " << "AC" << " " << "AS" << " " << "AC" << endl;
//        cout << "Can Marry";
//    } else if (partnerX == "AA" && partnerY =="CC") {
//        cout << "AC" << " " << "AC" << " " << "AC" << " " << "AC" << endl;
//        cout << "Can Marry";
//    } else
//        cout << "Invalid Details";
//
//    return 0 ;
//}


// Method 2
string doctorRemark(string partnerX, string partnerY);
int main() {

    string partnerX;
    string partnerY;

    cout <<"ALL INPUT MUST BE IN CAPSLOCK"<<endl;

    cout <<"Input the genotype of partner X: "<<endl;
    cin >>partnerX;

    cout <<"Input the genotype of partner Y: "<<endl;
    cin >>partnerY;

    doctorRemark(partnerX, partnerY);

    return 0;
}

string doctorRemark(string partnerX, string partnerY) {
    if ((partnerX == "AA" && partnerY == "AA") ||
    (partnerX == "AA" && partnerY =="AS") ||
    (partnerX == "AA" && partnerY =="AC") ||
    (partnerX == "AA" && partnerY =="SS") ||
    (partnerX == "AA" && partnerY =="SC") ||
    (partnerX == "AA" && partnerY =="CC") ||

    (partnerX == "AS" && partnerY =="AA") ||
    (partnerX == "SS" && partnerY =="AA") ||
    (partnerX == "SC" && partnerY =="AA") ||
    (partnerX == "CC" && partnerY =="AA") ||
    (partnerX == "AC" && partnerY =="AA")) {
        cout<<"Can Marry";
    } else if ((partnerX == "AS" && partnerY =="AS") ||
        (partnerX == "AS" && partnerY =="SC") ||
        (partnerX == "AS" && partnerY =="CC") ||
        (partnerX == "AS" && partnerY =="AC") ||
        (partnerX == "AS" && partnerY =="SS") ||

        (partnerX == "SS" && partnerY =="AS") ||
        (partnerX == "SS" && partnerY =="SS") ||
        (partnerX == "SS" && partnerY =="SC") ||
        (partnerX == "SS" && partnerY =="CC") ||
        (partnerX == "SS" && partnerY =="AS") ||

        (partnerX == "SC" && partnerY =="AS") ||
        (partnerX == "SC" && partnerY =="SS") ||
        (partnerX == "SC" && partnerY =="SC") ||
        (partnerX == "SC" && partnerY =="CC") ||
        (partnerX == "SC" && partnerY =="AC") ||

        (partnerX == "CC" && partnerY =="AS") ||
        (partnerX == "CC" && partnerY =="SS") ||
        (partnerX == "CC" && partnerY =="SC") ||
        (partnerX == "CC" && partnerY =="CC") ||
        (partnerX == "CC" && partnerY =="AC") ||

        (partnerX == "AC" && partnerY =="AS") ||
        (partnerX == "AC" && partnerY =="SS") ||
        (partnerX == "AC" && partnerY =="SC") ||
        (partnerX == "AC" && partnerY =="CC") ||
        (partnerX == "AC" && partnerY =="AC")) {
        cout<<"Not to Marry";
    } else
        cout<<"Invalid Details";
    return 0;
}
