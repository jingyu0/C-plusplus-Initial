//十进制转R进制 
#include<iostream>
#include<string>
using namespace std;

//int n,num[15],r,count;
int n,r,count;

/*void print( int x )
{
     if( x <= 9 )
         printf( "%d",x );
     else
         printf( "%c",x - 10 + 'A' );
 }
*/
void change( int n,int r )
{
     if( n )
     {
         change( n / r, r );
         cout<<(n % r);
     }
 }

int main( )
{
    while(cin>>n>>r)
    {
        //if( n < 0 )
        //    printf( "-" ),n = -n;
        change( n,r );
        }
    return 0;
}

