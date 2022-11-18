// Object: BFUIAnalogStickInputListenerElementEntityData
// ClassId: 3636
// RuntimeId: 4562
// TypeInfo: 0x0000000144D9A810
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../DiceCommonsShared/DiceUIAnalogStick.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIAnalogStickInputListenerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        DiceCommonsShared::DiceUIAnalogStick AnalogStick; // 0x130
        Float32 TriggerThreshold; // 0x134
        Float32 DeadZone; // 0x138
        Boolean ConsumeInput; // 0x13C
        Boolean FlipYAxis; // 0x13D
        char pad_0x13E[0x2];
    }; // 0x140
    static_assert(sizeof(BFUIAnalogStickInputListenerElementEntityData) == 0x140);
}
#pragma pack(pop)