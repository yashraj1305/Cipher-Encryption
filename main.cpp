#include <iostream>
using namespace std;

void HillCipher(string, string);
string generateKey(string , string );
string cipherText(string , string );
void encrypt(string, int);
void affine(string);

int main()
{
  int n;
  cout<<"Select the cipher : "<<endl<<"1.Hill Cipher"<<endl<<"2.Vignere Cipher"<<endl<<"3.Caesar Cipher"<<endl<<"4.Affine Cipher"<<endl;
  
  cin>>n;
  
  switch(n)
  {
    case 1:
    {
      string message1;
      string key1;

      cout<<"Enter Message : ";
      cin>>message1;

      cout<<"Enter Key : ";
      cin>>key1;
      
      HillCipher(message1, key1);
      break;
    }
    
    case 2:
    {
      string message2;
    	string key2;

      cout<<"Enter Message : ";
      cin>>message2;

      cout<<"Enter Keyword : ";
      cin>>key2;
    
    	string keyt = generateKey(message2, key2);
    	string cipher_text = cipherText(message2, keyt);
    
    	cout << "Ciphertext : "<< cipher_text << endl;

      break;
    }

    case 3:
    {
      string message3;
    	int key3;

      cout<<"Enter Message : ";
      cin>>message3;

      cout<<"Enter Shift : ";
      cin>>key3;

      encrypt(message3,key3);
      break;
    }

    case 4:
    {
      string message4; 
      cout << "Enter the message: ";
      cin >> message4;
      affine(message4);   
      break;
    }
  
    default :
    {
      cout << "Invalid grade" << endl;
    }
  }
	return 0;
}
