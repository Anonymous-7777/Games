//if the number is prime or not

#include<iostream>
using namespace std;

int main()
{
    int a;
    int j=1;
    int i=2;
    cout << "enter the number : "<< endl;
    cin >> a;

    while (j<=a)
    {
        
        if(a==1)
        {
            cout<<"not appplicable"<< endl;

            break;
        }
        
                
        if(i<=a-1)
        {
            if((a%i)==0)
            {
                cout<<"its not a prime number"<< endl;
            
                break;
            }


            else
            {
                i++;
            }

        }

        else
        {
            cout<<"it is a prime number"<< endl;
            break;
        }
        
        j++;

    }

    return 0;
    

}