// Object: DeathAreaTriggerEntityData
// ClassId: 3464
// RuntimeId: 21726
// TypeInfo: 0x0000000144E77A40
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class DeathAreaTriggerEntityData : public GameShared::TriggerEntityData {
        Float32 Damage; // 0x70
        Float32 TimeToReturn; // 0x74
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(DeathAreaTriggerEntityData) == 0x80);
}
#pragma pack(pop)