#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void notifyState(){};
    virtual void notifyHV(){};
    virtual void notifyLV(){};
    virtual void notifyHVFaults(){};
    virtual void notifyLVFaults(){};
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
