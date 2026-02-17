#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int position = 1;
    int inverse = 0;

    while(n > 0)

    {
        int digit = n % 10;
        cout<<digit;

        int place = 1;
        for(int i = 1; i < digit; i++)
            place = place* 10;
            cout<<place;
             cout<<endl;

        inverse =inverse + (position * place);
        cout<<inverse;
  cout<<endl;
        n =n/ 10;
        position++;
        cout<<position;
         cout<<endl;
    }

    cout << inverse;

    return 0;
}

    
