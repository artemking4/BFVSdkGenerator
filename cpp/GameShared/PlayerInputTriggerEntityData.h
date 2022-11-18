// Object: PlayerInputTriggerEntityData
// ClassId: 3026
// RuntimeId: 20612
// TypeInfo: 0x0000000144E8E8E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class PlayerInputTriggerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 EntryInputActions; // 0x24
        Float32 ValueModifier; // 0x28
        Float32 ValueModifierForMouse; // 0x2C
        Float32 HoldDownTime; // 0x30
        Float32 AccumulatedValueAtStart; // 0x34
        Float32 TrailingValueAtStart; // 0x38
        Float32 HoldDownInputTime; // 0x3C
        Boolean ClampValueAfterMouseModifier; // 0x40
        Boolean EnabledFromStart; // 0x41
        Boolean SendTriggerEvents; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(PlayerInputTriggerEntityData) == 0x48);
}
#pragma pack(pop)