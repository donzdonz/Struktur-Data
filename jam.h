#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED

#include <iostream>
using namespace std;

struct tJam {
    int hh;
    int mm;
    int ss;

    void setJam() {
    cout << "Jam: ";
    cin >> hh;}

    void setMenit() {
    cout << "Menit: ";
    cin >> mm;}

    void setDetik() {
    cout << "Detik: ";
    cin >> ss;}

    int getJam() {
    return hh;}

    int getMenit() {
    return mm;}

    int getDetik() {
    return ss;}

    bool isValid(){
    if(hh < 0 or hh > 23) {
    return false;}

    if(mm < 0 or mm > 59) {
    return false;}

    if(ss < 0 or ss > 59) {
    return false;}
    return true;}

void cetakJam() {

    	if(isValid()) {
        	cout << "Jam sekarang " << getJam() << ":" << getMenit() << ":" << getDetik() << endl;
		} else {
			cout << "Jam Invalid" << endl;
		}
    }
};

/*    void setJam(int jam, int menit, int detik) {
        hh = jam;
        mm = menit;
        ss = detik;*/

#endif // JAM_H_INCLUDED
