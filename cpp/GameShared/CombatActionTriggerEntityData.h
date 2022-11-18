// Object: CombatActionTriggerEntityData
// ClassId: 3461
// RuntimeId: 50203
// TypeInfo: 0x0000000144E8EE60
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class CombatActionTriggerEntityData : public GameShared::TriggerEntityData {
        Float32 TimeToTriggerOnNoAction; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(CombatActionTriggerEntityData) == 0x80);
}
#pragma pack(pop)