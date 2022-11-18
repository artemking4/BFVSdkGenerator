// Object: EntryAimAssistTargetOptionsComponentData
// ClassId: 1769
// RuntimeId: 4217
// TypeInfo: 0x0000000144F39790
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class EntryAimAssistTargetOptionsComponentData : public Entity::GameComponentData {
        Float32 NotSnapZoomTargetAngle; // 0x80
        Boolean AllowSoldierAsTarget; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(EntryAimAssistTargetOptionsComponentData) == 0x90);
}
#pragma pack(pop)