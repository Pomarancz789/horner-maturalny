#include <iostream>
using namespace std;

float horner_pod_a(int tab[], int stopien, int x)
{
    //f(x)=4*x^4+0x^3-3*x^2+x-6
    //f(x)=x(4*x^3+0x^2-3*x+1)-6
    //f(x)=x*(x*(4*x^2+0x-3)+1)-6
    //f(x)=x*(x*(x*(4*x+0)-3)+1)-6
    //f(x)=x*(x*(x*((4*x)+0)-3)+1)-6
    
    
    int temp=tab[0];
        for(int i=0; i<stopien; i++)
        {
            temp*=x;
            temp+=tab[i+1];
        }
    return temp;
}


float horner_pod_b(int tab[], int stopien, int x)
{
    float temp=tab[0];
    for(int i=0; i<=stopien; i++)
    {
        temp*=x;
        temp+=tab[i+1];
    }
    return temp;
}



int main() {
    
    float x=2;
    int tab[]={4,0,-3,1,-6};
    int stopien=4;
    cout << horner_pod_a(tab, stopien, x) << endl;
    
    
    return 0;
}
