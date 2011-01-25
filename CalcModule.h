#ifndef CalcModule_h
#define CalcModule_h

namespace Titanium {

class EXPORT CalcModule : public kroll::Module
{
    KROLL_MODULE_CLASS(CalcModule)

private:
    kroll::KObjectRef binding;
};

} // namespace Titanium

#endif
