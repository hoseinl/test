#include <iostream>
using namespace std;
int x = 10;

void test()
{
    cout<<x<<endl;
}

void test2()
{
    int x = 20;
    test();

}
int main()
{

    int arr[10][10];
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            arr[i][j]=0;
        }
        cout<<endl;
    }
    arr[0][0]=1;
    int number = 1;
    int sum = 1;
    while (true)
    {
    number++;
    for (size_t i = 0; i < 10; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            if(arr[i][j]==number-1)
            {
                if(arr[i][j+1] == 0 && j+1 <10 )
                {
                    arr[i][j+1] =number;
                    sum++;
                }
                if(arr[i][j-1] ==0 && j-1 >= 0 )
                {
                    sum++;
                    arr[i][j-1] =number;
                }
                if(arr[i+1][j] == 0 && i+1 < 10 )
                {
                    sum++;
                    arr[i+1][j] =number;
                }
                if(arr[i-1][j] == 0 && i-1 >= 0 )
                {
                    sum++;
                    arr[i-1][j] =number;
                }
            }
        }
     }
     
       if(sum > 14)
       {
            for (size_t i = 0; i < 10; i++)
            {
                for (size_t j = 0; j < 10; j++)
                {
                    cout<<arr[i][j]<< " ";
                }
                cout<<endl;
            }
        cout<<number<<"  "<<sum<<endl;
        return 0;
       }

    }
    
     
    return 0;
    
}