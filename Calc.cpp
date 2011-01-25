#include <kroll/kroll.h>
#include "Calc.h"
#include "bmcalc.h"

namespace Titanium {

Calc::Calc(KObjectRef global) :
    StaticBoundObject("Calc")
{
    this->SetMethod("Minimum", &Calc::Minimum);
}

Calc::~Calc()
{
}

void Calc::Minimum(const ValueList& args, KValueRef result)
{
    if (args.at(0)->IsList())
    {
    KListRef list(args.GetList(0));
    double arr[list->Size()];

    for (size_t c = 0; c < list->Size(); c++)
    {
        arr[c] = args.at(c).ToDouble();
    }

    int cnt = sizeof(arr) / sizeof(double);
    int low = Min(arr, cnt);

    result->SetDouble(low);

   } else {
        throw ValueException::FromString("Min takes an array");
   }

}

} // namespace Titanium