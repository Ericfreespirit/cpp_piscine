#include <iostream>
#include <stdint.h>

typedef struct Data_s
{
    int int1;
    int int2;
}   Data;

void    print_struct(Data *s){
    std::cout << "int1: " <<s->int1 << std::endl;
    std::cout << "int2: " <<s->int2 << std::endl;
}

uintptr_t serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data s = {4, 2};
    Data *res = NULL;
    uintptr_t raw;
    
    std::cout << "sizeof unintptr_t: " << sizeof(uintptr_t)<< std::endl;
    std::cout << "sizeof Data: " << sizeof(Data) << std::endl;

    print_struct(&s);
    raw = serialize(&s);
    res = deserialize(raw);
    std::cout << raw << std::endl;
    print_struct(res);
    return(0);
}