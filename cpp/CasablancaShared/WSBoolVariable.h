// Object: WSBoolVariable
// ClassId: 5346
// RuntimeId: 40160
// TypeInfo: 0x0000000144CFABD0
#include "../CasablancaShared/WSVariable.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSBoolVariable : public CasablancaShared::WSVariable {
        Float32 SwitchToTrueAtWeatherStateVisibility; // 0x30
        Boolean DefaultValue; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(WSBoolVariable) == 0x38);
}
#pragma pack(pop)