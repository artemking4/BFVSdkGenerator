// Object: EntryControllableTransformLinkData
// ClassId: 1573
// RuntimeId: 11925
// TypeInfo: 0x0000000144DBAA00
#include "../DiceCommonsShared/EntityTransformLinkData.h"
#include "../Entity/GameplayBones.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class EntryControllableTransformLinkData : public DiceCommonsShared::EntityTransformLinkData {
        Entity::GameplayBones Bone; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EntryControllableTransformLinkData) == 0x28);
}
#pragma pack(pop)