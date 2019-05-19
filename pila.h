#ifndef PILA_H
#define PILA_H
typedef struct Nodo{
libro info;
struct Nodo*link;}

typedef Nodo lista;

class pila
{
    public:
        /** Default constructor */
        pila();
        /** Default destructor */
        virtual ~pila();

        /** Access L
         * \return The current value of L
         */
        lista GetL() { return L; }
        /** Set L
         * \param val New value to set
         */
        void SetL(lista val) { L = val; }
        void push(libro);
        libro pop();
        bool empty();

    protected:

    private:
        lista L; //!< Member variable "L"
};

pila::pila()
{
    this->L->link = NULL;
}
void pila::push(libro a)
{
   lista q, p;
   p= new(Nodo);
   p->info = a;
   p>link= NULL;
    if(this->L == NULL)
    {this->L= p;}
    else
    {
    q= this->L;
    while(q->link != NULL)
    {
       q= q->link;
    }
    q->link= p;
    }
}
libro pila::pop()
{

}
bool pila::empty()
{
    return (this->L.link == NULL)
}
#endif // PILA_H
