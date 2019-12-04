#include <iostream>
using namespace std;

long long isbn;
void CheckISBN(long long X);

int main(void) {
  cout << "請輸入ISBN：";
  cin >> isbn;
  CheckISBN(isbn);
}

void CheckISBN(long long X) {
    int X10;
    X10= (1*(X/1000000000%10)+2*(X/100000000%10)+3*(X/10000000%10)+4*(X/1000000%10)+5*(X/100000%10)+6*(X/10000%10)+7*(X/1000%10)+8*(X/100%10)+9*(X/10%10));
    if ((X10%11) == (X/1%10)){
        cout << "Yes" ;
    }
    else{
         cout << "no" ;
    }

}
