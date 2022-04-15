#if 0 
class Cualquiera
{
private:
	// Aquí es donde inicializamos las variables miembro "por valor"
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera()
    {
        // Estas son todas asignaciones, no inicializaciones
        m_valor1 = 1;
        m_valor2 = 2.2;
        m_valor3 = 'c';
    }
};



int main()
{

    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

    m_valor1 = 1;
    m_valor2 = 2.2;
    m_valor3 = 'c';
}


class Cualquiera
{
private:
    const int m_valor;

public:
    Cualquiera()
    {
        m_valor = 1; // error: variables const no pueden ser asignadas
    }
};



const int m_valor; // error: variables const debe inicializarse con un valor
m_valor = 5; //  error: variables const no pueden ser asignadas




int valor1 = 1; // inicialización por copia
double value2(2.2); // inicialización directa
char value3{ 'c' }; // inicialización uniforme





class Cualquiera
{
private:
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera()
    {
        // Todas son asignaciones, no inicializaciones
        m_valor1 = 1;
        m_valor2 = 2.2;
        m_valor3 = 'c';
    }
};



#include <iostream>

class Cualquiera
{
private:
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera() : m_valor1{ 1 }, m_valor2{ 2.2 }, m_valor3{ 'c' } // Inicializa variables miembro
    //Cualquiera() : m_valor1( 1 ), m_valor2( 2.2 ), m_valor3( 'c' ) // Inicializa variables miembro
    //Cualquiera() : m_valor1= 1 , m_valor2 = 2.2 , m_valor3 = 'c'  // error
    
	
    {
        // No son necesarias las asignaciones aquí
    }

    void imprimir()
    {
        std::cout << "Cualquiera(" << m_valor1 << ", " << m_valor2 << ", " << m_valor3 << ")\n";
    }
};

int main()
{
    Cualquiera cualquiera{};
    cualquiera.imprimir();
    return 0;
}







#include <iostream>

class Cualquiera
{
private:
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera(int valor1, double valor2, char valor3 = 'a')
        : m_valor1{ valor1 }, m_valor2{ valor2 }, m_valor3{ valor3 } // inicialización directa de las variables miembro
    {
        // No es necesaria la asignación aquí
    }

    void imprimir()
    {
        std::cout << "Cualquiera(" << m_valor1 << ", " << m_valor2 << ", " << m_valor3 << ")\n";
    }

};

int main()
{
    Cualquiera cualquiera{ 3, 4.4 }; // valor1 = 3, valor2 = 4.4, valor3 usa valor predeterminado 'a'
    cualquiera.imprimir();
    return 0;
}





class Cualquiera
{
private:
    const int m_valor;

public:
    Cualquiera() : m_valor{ 3 } // inicializa variable miembro const
    {
    }
};






class Cualquiera
{
private:
    const int m_array[3];

};




class Cualquiera
{
private:
    const int m_array[3];

public:
    Cualquiera() : m_array{} // inicializa los elementos del array miembro a cero
    {
    }

};




class Cualquiera
{
private:
    const int m_array[3];

public:
    Cualquiera() : m_array{ 5, 3, 2 } // inicialización uniforme de los elementos del array miembro
    {
    }

};
#endif







#include <iostream>

class A
{
public:
    A(int x = 0) { std::cout << "A " << x << '\n'; }
};

class B
{
private:
    A m_a{};
public:
    B(int y)
        : m_a{ y - 1 } // llama al constructor A(int) para inicializar miembro m_a 
    {
        std::cout << "B " << y << '\n';
    }
};

int main()
{
    B b{ 5 };
    return 0;
}


#if 0
class Something
{
private:
    int m_value1{};
    double m_value2{};
    char m_value3{};

public:
    Something() : m_value1{ 1 }, m_value2{ 2.2 }, m_value3{ 'c' } // everything on one line
    {
    }
};

class Something
{
private:
    int m_value1;
    double m_value2;
    char m_value3;

public:
    Something(int value1, double value2, char value3 = 'c') // this line already has a lot of stuff on it
        : m_value1{ value1 }, m_value2{ value2 }, m_value3{ value3 } // so we can put everything indented on next line
    {
    }

};

class Something
{
private:
    int m_value1{};
    double m_value2{};
    char m_value3{};
    float m_value4{};

public:
    Something(int value1, double value2, char value3 = 'c', float value4 = 34.6f) // this line already has a lot of stuff on it
        : m_value1{ value1 } // one per line
        , m_value2{ value2 }
        , m_value3{ value3 }
        , m_value4{ value4 }
    {
    }

};
#endif
