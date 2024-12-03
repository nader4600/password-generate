#include<iostream>
using namespace std;
string generatePassword(int length)
{
	string password;
	srand(time(0));
	char  alphabet[] = { '0','1','2','3','4','5','6','7','8','9','a','b' ,'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' ,'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int randomindex;
	for (int i = 1; i <= length; i++)
	{
		randomindex = (rand() % (sizeof(alphabet) - 1));
		password = password + alphabet[randomindex];
	}
	return password;

}
int getlength()
{
	int length = 0;
	cout << "Enter the Length of Password : " << endl;
	cin >> length;
	return length;
}
int main()
{
	
	cout << "Your Password is : " << generatePassword(getlength());
	
	
}