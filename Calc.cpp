#include <kroll/kroll.h>
#include "Calc.h"
#include "bmcalc.h"

namespace Titanium {

Calc::Calc(KObjectRef global) :
    StaticBoundObject("Calc"),
    global(global)
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
		KListRef list = args.at(0)->ToList();

		double *arr = NULL;

		arr = new double[list->Size()];

		for (unsigned int c = 0; c < list->Size(); c++)
		{
			KValueRef d = list->At(c);
			arr[c] = d->ToDouble();
		}

		int cnt = sizeof(arr) / sizeof(double);
		int low = Min(arr, cnt);

		result->SetDouble(low);

		delete [] arr;

   } else {
		throw ValueException::FromString("Minimum takes an array");
   }

}

} // namespace Titanium