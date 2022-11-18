// Object: BFUIAnalogPadInputListenerElementEntityData
// ClassId: 3635
// RuntimeId: 8146
// TypeInfo: 0x0000000144D9A890
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../DiceCommonsShared/DiceUIAnalogPadType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIAnalogPadInputListenerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        DiceCommonsShared::DiceUIAnalogPadType AnalogPadType; // 0x130
        Boolean ConsumeInput; // 0x134
        char pad_0x135[0xB];
    }; // 0x140
    static_assert(sizeof(BFUIAnalogPadInputListenerElementEntityData) == 0x140);
}
#pragma pack(pop)