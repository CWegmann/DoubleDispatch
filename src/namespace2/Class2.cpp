#include "Class2.hpp"
#include "Class1.hpp"

int
ns2::Class2::get(){
    return ns1::Class1::get() + 1;
}
