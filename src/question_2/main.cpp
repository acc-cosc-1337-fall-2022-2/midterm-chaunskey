#include "question2.h"

int main()
{
    string dna;
    cout << "DNA to RNA Convertor!\n\n"
            "Please enter a DNA sequence: ";
    cin >> dna;
    cout << dna << " sequenced into RNA is: "
    << transcribe_dna_into_rna(dna) << "\nGoodbye!";
    return 0;
}