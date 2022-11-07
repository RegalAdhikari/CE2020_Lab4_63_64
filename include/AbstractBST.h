

#ifndef AbstractBST.h
#define AbstractBSt.h

class AbstractBST
{
private:
    /* data */
public:
    virtual bool isEmpty()=0;
    virtual void add(int Key, int Value)=0;
    virtual void max(int &output)=0;
    virtual void min(int &output)=0;
    virtual bool exists(int targetKey)=0;

    virtual void inorder()=0;
};



#endif