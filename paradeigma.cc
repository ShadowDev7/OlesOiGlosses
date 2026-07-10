/* Παράδειγμα προγράμματος σε C++
 *
 * Για μεταγλώττιση σε Ubuntu:
 *  - ο μεταγλωττιστής είναι προεγκατεστημένος
 *  - αν δεν είναι προεγκατεστημένος, εγκατάσταση με
 *      sudo apt install build-essential
 *  - εντολή μεταγλώττισης:
 *      gcc paradeigma.cpp -o paradeigma
 *
 * Για εκτέλεση του προγράμματος:
 *    ./paradeigma
 *
 * Αποτέλεσμα:
 *  Γεια σου, κόσμε!
 *  Εκτέλεση if: Αληθές και όχι ψευδές!
 *  Εκτέλεση βρόγχου: 0 1 2 3 4 5 6 7 8 9
 *  Αυτή είναι μια υπορουτίνα με αριθμό 5.
 */

#include <iostream>

void subroutine(int number)
{
   std::cout << "Αυτή είναι μια υπορουτίνα με αριθμό " << number << ".\n";
}

int main() {
    std::cout << "Γεια σου, κόσμε!\n";

    if (true)
        std::cout << "Εκτέλεση if: Αληθές και όχι ψευδές!\n";

    std::cout << "Εκτέλεση βρόγχου: ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    subroutine(5);

    return 0;
}
