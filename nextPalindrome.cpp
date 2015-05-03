#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(long n);
long findNext(long n);

bool isPalindrome(long n) {
		  /* flip the parameter to see*/
		  if(n <10) {
					 return true;
		  }

		  std::string origin = std::to_string(n);
		  std::string flip="";

		  for(long i = origin.length(); i >0;i--) {
					 flip += origin[i-1];
		  }

		  return (origin.compare(flip) == 0);
}

long findNext(long n) {
		  if(isPalindrome(n))
					 return n;
		  else
					 return findNext(n+1);
}

int main() {
		  long index;
		  cin >> index;

		  long arr[index];
		  long temp;

		  for(long i =0; i < index; i++) {
					 cin >> temp;
					 arr[i] = temp;
		  }

		  for(long i = 0; i < index; i++) {
					 cout << findNext(arr[i]+1) << "\n";
		  }

		  return 0;
}
