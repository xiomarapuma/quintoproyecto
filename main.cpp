#include <iostream>

using namespace std;

int main()
{

    EJERCICIO 1
    int a,b,c,d,e,f;
    cout << "Ingrese un número " << endl ;
    cin >> a; //10000
    f= a%10; //0
    a=a/10;//100
    e=a%10;//0
    a=a/10;//10
    d=a%10;//0
    a=a/10;//1
    c=a%10;//0
    a=a/10;//1
    b=a%10;//0
    cout << b << '\t' << c << '\t' ; // 1     0      0       0      0      0
    cout << d << '\t' << e << '\t' ;
    cout << f << endl ;


    // EJERCICIO 2

    int a , n=0 ;
    cout << "INGRESE UN NUMERO : " << endl ;
    cin >> a;
    while (a!=0){
        a=a/10;
        n=n+1;

    }
    cout << "Tiene " << n << "digitos " << endl ;


    //EJERCICIO 3


        int n,a,b,c,d,e ;
        cout << "Ingrese un numero : " << endl ;
        cin >> n;
        a= n%10; // a= 1
        n= n/10; // 1232
        b= n%10; // b =2
        n=n/10; // 123.2 =123
        c= n%10;
        n=n/10 ;
        d=n%10;
        n = n/ 10;
        e= n%10;
        if ((a==e) and (b==d)) {
            cout << "Si es un palindromo " << endl ;

        }
        else
        {
            cout << "No es un palindromo " << endl ;
        }

        //EJERCICIO 4
        int n ,a=0 ,b,c=1 , d=1 ,p;
        cout << "Ingrese un numero : " << endl ;
        cin >> n;
        while (a<n){
            if(a==0){
                cout << "1" << '\t' ;
            }
            if(a>1){
                p=c+d ;
                c=d;
                d=p ;
                cout << p << '\t' ;
            }
            a=a+1;
        }

        //EJERCICIO 5
        char a ;
        cout << "Ingrese un caracter : " << endl ;
        cin >> a ;

        a = static_cast<char>(a) ;
        if (a>=48 and a<=57 ){
            cout << " Si es un numero " << endl ;
        }
         else {
            cout << "No es un numero " << endl ;
         }



        // EJERCICIO 6

        char n;
        cout << " Ingrese un caracter : " << endl ;
        cin >> n;
        n=static_cast<char>(n);
        if(n>=65 and n<=90){
            cout << "Es una letra mayuscula " << endl ;

        }
        else if (n>=97 and n<=122){
                cout << " Es una letra minuscula : " << endl;

        }
        else {
            cout << "No es una letra mayuscula ni minuscula " << endl ;
        }
    return 0;
}
