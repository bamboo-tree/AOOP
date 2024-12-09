#include <iostream>
#include "Grupa.h"

int main(){

    Grupa gr = Grupa();

    gr.studenci.insert({1001,  {"Jan", "Kowalski"}});
    gr.studenci.insert({1002,  {"Jan", "Niezbędny"}});
    gr.studenci.insert({1003,  {"Anna", "Zaradna"}});
    gr.studenci.insert({1101,  {"Magda", "Nowak"}});
    gr.studenci.insert({1102,  {"Tadeusz", "Zieliński"}});
    gr.studenci.insert({1010,  {"Wojciech", "Nowak"}});

    gr.szukaj_po_indeksie(1001);
    gr.szukaj_po_nazwisku("Nowak");
    

    return 0;
}