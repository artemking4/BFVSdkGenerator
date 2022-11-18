// Object: WeatherState
// ClassId: 5703
// RuntimeId: 9524
// TypeInfo: 0x0000000144CFAB50
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"
#include "../UIIncubatorShared/PropertyInterpolationMode.h"
#include "../CasablancaShared/WeatherStateVariable.h"
#include "../CasablancaShared/WeatherStateFloatVariable.h"
#include "../CasablancaShared/WeatherStateIntVariable.h"
#include "../CasablancaShared/WeatherStateBoolVariable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherState : public Core::DataContainer {
        CString Name; // 0x18
        Float32 AutomaticallySwitchAfterMinTime; // 0x20
        Float32 AutomaticallySwitchAfterMaxTime; // 0x24
        UIIncubatorShared::PropertyInterpolationType FadeType; // 0x28
        UIIncubatorShared::PropertyInterpolationMode FadeMode; // 0x2C
        Array<CasablancaShared::WeatherStateVariable> VariablesToSet; // 0x30
        Array<CasablancaShared::WeatherStateFloatVariable> FloatVariablesToSet; // 0x38
        Array<CasablancaShared::WeatherStateIntVariable> IntVariablesToSet; // 0x40
        Array<CasablancaShared::WeatherStateBoolVariable> BoolVariablesToSet; // 0x48
    }; // 0x50
    static_assert(sizeof(WeatherState) == 0x50);
}
#pragma pack(pop)