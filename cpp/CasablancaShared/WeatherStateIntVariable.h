// Object: WeatherStateIntVariable
// ClassId: 5707
// RuntimeId: 51134
// TypeInfo: 0x0000000144CFA9D0
#include "../CasablancaShared/WeatherStateVariable.h"
#include "../CasablancaShared/WSIntVariable.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherStateIntVariable : public CasablancaShared::WeatherStateVariable {
        CasablancaShared::WSIntVariable Variable; // 0x18
        Int32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeatherStateIntVariable) == 0x28);
}
#pragma pack(pop)