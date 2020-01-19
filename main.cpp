#include <iostream>
#include "first.h"

using  std::cout;
using Exp::First;

int main(int argc, char* argv[]){
    First f;
    f.setval(10);
    cout<<"your value is:"<<f.getval()<<"\n";
    return 0;
}