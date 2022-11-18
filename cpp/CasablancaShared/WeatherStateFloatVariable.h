// Object: WeatherStateFloatVariable
// ClassId: 5706
// RuntimeId: 29936
// TypeInfo: 0x0000000144CFAA50
#include "../CasablancaShared/WeatherStateVariable.h"
#include "../CasablancaShared/WSFloatVariable.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherStateFloatVariable : public CasablancaShared::WeatherStateVariable {
        CasablancaShared::WSFloatVariable Variable; // 0x18
        Float32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeatherStateFloatVariable) == 0x28);
}
#pragma pack(pop)