#include <iostream>

using namespace std;

int main() {
  // Imprime les resultats des operations arithmetiques
  int m;
  int n;
  cout << "Saisissez deux valeurs m et n : " << endl;
  cin >> m;
  cin >> n;
  cout << "\n";
  cout << "Les deux valeurs sont : " << m << " et " << n << "." << endl;
  cout << "La somme est egale a : " << (m + n) << endl;
  cout << "La difference est egale a : " << (m - n) << endl;
  cout << "Le produit est egal a : " << (m * n) << endl;
  cout << "La division est egale a : " << (m / n) << endl;
  cout << "Le reste des deux entiers est : " << (m % n) << endl;
  return 0;
}