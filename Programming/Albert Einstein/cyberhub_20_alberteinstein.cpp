#include<iostream>
using namespace std;
int main()
{
int y, key;
char a[100], b;

cout << "Enter the encrypted flag: ";
cin>>a;
cout << "Enter key value: ";
cin >>key;
for(y = 0; a[y] != '\0'; ++y)
{
b =a[y]+y;
if(b >= 'a' && b <= 'z')
{
b = b - key;
if(b < 'a')
{
b = b+'z'-'a'+1;
}
a[y] = b;
}
else if(b >= 'A' && b <= 'Z')
{
b =b-key;
if(b > 'a')
{
b = b+'Z'-'A'+1;
}
a[y] = b;
}
}

cout << "CYBERHUB{"<< a<<"}";
return 0;
}