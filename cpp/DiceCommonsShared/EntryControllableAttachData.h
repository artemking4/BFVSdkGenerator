// Object: EntryControllableAttachData
// ClassId: 1563
// RuntimeId: 3143
// TypeInfo: 0x0000000144DBA700
#include "../DiceCommonsShared/EntityAttachData.h"
#include "../Entity/GameplayBones.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class EntryControllableAttachData : public DiceCommonsShared::EntityAttachData {
        Entity::GameplayBones Bone; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(EntryControllableAttachData) == 0x48);
}
#pragma pack(pop)