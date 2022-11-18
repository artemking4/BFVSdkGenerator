// Object: SelectableActionEntityData
// ClassId: 3152
// RuntimeId: 53445
// TypeInfo: 0x0000000144DBECB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float64.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SelectableActionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Float64 CooldownTime; // 0x28
        Uint32 AllowedSelectCount; // 0x30
        Uint32 Priority; // 0x34
        Boolean Enabled; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(SelectableActionEntityData) == 0x40);
}
#pragma pack(pop)