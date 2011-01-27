#ifndef Calc_h
#define Calc_h

#include <kroll/kroll.h>

namespace Titanium {

class Calc : public StaticBoundObject
{
public:
    Calc(KObjectRef);
    virtual ~Calc();

private:
	void Minimum(const ValueList& args, KValueRef result);

    KObjectRef global;
};

} // namespace Titanium

#endif
