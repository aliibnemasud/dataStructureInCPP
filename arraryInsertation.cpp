#include <iostream>
using namespace std;

int main () {


    int a[25],n,i,newData, position;


    cout << "How many data do you want to insert: ";
    cin >> n;


    // Inserting Array

    for (i=1; i<=n; i++){
        cout << "Number: [" << i << "]: ";
        cin >> a[i];
    }

    // Getting new data to set on the array

    cout << "Which data do you want to insert: ";
    cin >> newData;

    // Setting position

    cout << "Set the Position: ";
    cin >> position;

    // Inserting data to the position

    for (i=n; i>=(position); i--){
        a[i+1]=a[i];
    }

    a[position] = newData;

    // Printing Array

    for (i=1; i<=(n+1); i++){
        cout << "Number: [" << i << "]: " << a[i] << endl;
    }


return 0;
}
