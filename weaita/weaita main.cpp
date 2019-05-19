#include <cstdlib>
#include <iostream>
#include <string>
using std::cout;
using std::endl;

class libro
{
private:
    string autor;
    string titulo;
    int paginas;
public:
    libro();
    libro(string, string, int);
    string getautor();
    void setautor(string);
    string gettitulo();
    void settitulo(string);
    int getpaginas();
    void setpaginas(int);

};
libro::libro()
{

}
void libro::setautor(string a)
{
    this->autor= a;
}
string libro::getautor()
{
    return this->autor;
}
void libro::settitulo(string b)
{
    this->titulo= b;
}
string libro::gettitulo()
{
    return this->titulo;
}

void libro::setpaginas(int c)
{
    this->paginas= c;
}
int libro::getpaginas()
{
    return this->paginas;
}
class toma
{
private:
    int top;
    libro a[5];
public:
    toma();
    toma(libro);
    virtual ~toma();
    void push(libro);
    libro pop();
    bool empty();
    void oredena();
};

toma::toma()
{
    top= -1;
}
void toma::push(libro c)
{
    top++;
       this->a[top]= c;
}

libro toma::pop()
{
    libro e ;
    e= a[top];
    top--;
    return e;
}
bool toma::empty()
{
    return(top == -1);
}

void toma::oredena()
{
    libro aux, aux2[5];
    int i,k;
    aux2[2]= this->a[5];
    for(i=0;i<5;i++)
    {

        if(aux2[i].getpaginas() > aux2[i+1].getpaginas())
        {
        aux.getpaginas() == aux2[i].getpaginas();
         aux2[i].getpaginas() == aux2[i+1].getpaginas();
         aux2[i+1].getpaginas() == aux.getpaginas();
        }
    }

};


void mostrar( toma t)
{
    toma aux;
    int i=0;
    toma z;
    while(!t.empty())
    {
        libro e, k;
        e= t.pop();
        cout <<"titulo: "<<e.gettitulo() << endl;
        cout <<"numero de paginas " <<e.getpaginas() <<endl;
        aux.push(e);
        i++;
    }
    while(!aux.empty())
    {t.push(aux.pop());}

}
namespace std{};

int main(int argc, char** argv)
{

    int i;
    libro a,b,c,d,e;
    toma y;
     a.setautor('ar');
     a.settitulo('man');
     a.setpaginas(100);
     y.push(a);

     b.setautor('ar');
     b.settitulo('man');
     b.setpaginas(150);
     y.push(b);

     c.setautor('ar');
     c.settitulo('man');
     c.setpaginas(400);
    y.push(c);

     d.setautor('ar');
     d.settitulo('man');
     d.setpaginas(50);
     y.push(d);

     e.setautor('ar');
     e.settitulo('man');
     e.setpaginas(103);
     y.push(e);

     y.oredena();
     mostrar(y);
    return 0;
}
