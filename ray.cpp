#include<iostream>

using namespace std;

class matrix {
    public:
    int a[3][3];
    int b[3][3];
    int c[3][3];
    void accept();
    void display();
    void add();
    void substract();
    void multiply();
    void transpose();
};

void matrix::accept() {
    int i,j;
    
    cout << "Enter the first matrix(3x3)" << endl;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << "Enter the second matrix(3x3):" << endl;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) { 
            cin >> b[i][j];
        }
    }
}

void matrix::display() {
    int m,n;
    cout << "Answer:" << endl << endl;
    for(m = 0; m < 3; m++) {
        
        cout << "\n";
        
        for(n = 0; n < 3; n++) { 
            cout << c[m][n] << "\t";
        }
    }
    cout << endl << "\t" << "-\n" << endl;
}

void matrix::add() {
    int k,l;
    for(k = 0; k < 3; k++) {
        for(l = 0; l < 3; l++) {
            c[k][l] = a[k][l] + b[k][l];
        }
    }
}

void matrix::substract() {
    int k,l;
    for(k = 0; k < 3; k++) {
        for(l = 0; l < 3; l++) {
            c[k][l] = a[k][l] - b[k][l];
        }
    }
}

void matrix::multiply() {
    int k,l,g;
    for(k = 0; k < 3; k++) {
        for(l = 0; l < 3; l++) {
            c[k][l] = 0;
            for(g = 0; g < 3; g++) {
                c[k][k] += a[k][g]*b[g][l];
            }
        }
    }
}

void matrix::transpose() {
    int k,l;
    for(k = 0; k < 3; k++) {
        for(l = 0; l < 3; l++) {
            c[k][l] = a[l][k];
        }
    }
}

int main() {
    int ch;
    matrix m;
    m.accept();
    
    cout << "-> Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Transpose" << endl;
    cout << "Enter your choice: ";
    cin >> ch;
    
    switch (ch) {
        case 1:
            m.add();
            m.display();
            break;
            
        case 2:
            m.substract();
            m.display();
            break;
            
        case 3:
            m.multiply();
            m.display();
            break;
            
        case 4:
            m.transpose();
            m.display(); 
            break;
    }
    return 0;
}