#include "CalcModule.h"
#include "Calc.h"

namespace Titanium {

KROLL_MODULE(CalcModule, STRING(MODULE_NAME), STRING(MODULE_VERSION));

void CalcModule::Initialize()
{
	this->binding = new Calc(host->GetGlobalObject());

	KValueRef value = Value::NewObject(this->binding);
	host->GetGlobalObject()->Set("Calc", value);
}

void CalcModule::Stop()
{
}

} // namespace Titanium
