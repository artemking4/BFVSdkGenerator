// Object: WeatherStateBoolVariable
// ClassId: 5705
// RuntimeId: 35279
// TypeInfo: 0x0000000144CFA950
#include "../CasablancaShared/WeatherStateVariable.h"
#include "../CasablancaShared/WSBoolVariable.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherStateBoolVariable : public CasablancaShared::WeatherStateVariable {
        CasablancaShared::WSBoolVariable Variable; // 0x18
        Boolean Value; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(WeatherStateBoolVariable) == 0x28);
}
#pragma pack(pop)