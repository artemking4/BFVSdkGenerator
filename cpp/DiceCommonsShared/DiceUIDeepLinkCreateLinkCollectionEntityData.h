// Object: DiceUIDeepLinkCreateLinkCollectionEntityData
// ClassId: 2626
// RuntimeId: 59877
// TypeInfo: 0x0000000144DBB280
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkCreateLinkCollectionEntityData : public Entity::EntityData {
        Uint32 InputCount; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DiceUIDeepLinkCreateLinkCollectionEntityData) == 0x28);
}
#pragma pack(pop)