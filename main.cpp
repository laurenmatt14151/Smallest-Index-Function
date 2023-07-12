#include <iostream>
using namespace std;

int smallestIndex (int numbers[], int size){
    int index = 0;
    int smallest = numbers[0];
    for (int i = 0; i < size; i++){
        if (smallest > numbers[i]){
            smallest = numbers[i];
            index = i;
        }
    }
    return index;
}

int main() {
    int grade[5] = {90, 20, 50, 80, 12};
    cout << "Index is " << smallestIndex(grade, 5);
}
