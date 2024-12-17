#ifndef MYCLASS_H
#define MYCLASS_H

class myClass
{
public:
    int num;
    myClass();
    myClass(int a);
    myClass operator+(myClass object2);
};

#endif