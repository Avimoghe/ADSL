#include <iostream>
using namespace std;

#define V 10
int arr[V][V];
int size;

void initialize(int n) {
    size = n;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = 0;
        }
    }
}

void addEdge(int s, int d) {
    arr[s][d] = 1;
    arr[d][s] = 1;
}

void print() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    initialize(5);

    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    print();

    return 0;
}
