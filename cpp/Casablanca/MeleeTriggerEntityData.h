// Object: MeleeTriggerEntityData
// ClassId: 2884
// RuntimeId: 5360
// TypeInfo: 0x0000000144C334F0
#include "../Entity/EntityData.h"
#include "../GameShared/AntEnumeration.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class MeleeTriggerEntityData : public Entity::EntityData {
        GameShared::AntEnumeration MeleeType; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform ConnectTransform; // 0x30
        Boolean MeleeEnabled; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(MeleeTriggerEntityData) == 0x80);
}
#pragma pack(pop)