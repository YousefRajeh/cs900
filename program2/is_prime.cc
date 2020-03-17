#include <iostream>
using namespace std;
bool is_prime (int Number) {
bool check = true;
for (int i = 2; i <= Number /2; i++) { //I have googled the Number /2 part as I was stuck and everyone else I asked told me they couldn't figure it out on their. But I only used it after I understood what it meant and why it was used and if an explanation is needed just ask me. Thanks! (it's because its a loop that runs from 2 till the number divided by two which is the highest number you can divide by to find if prime or not.)
  if (Number % i == 0) {
    check = false;    
}
}
return check;
}

int main() {
int Number = 0;
bool check = true;  
cout << "Enter a positive integer to check if prime or not" << endl;
cin >> Number;
while (Number < 0) {
cout << "Please use a positive integer instead.";
cin >> Number;   
}
check = is_prime(Number);
if (check == true) {
cout << Number << " is a prime number." <<endl;  
}
if (check == false) {
cout << Number << " isn't a prime number." <<endl;  
}

  return 0;
}
