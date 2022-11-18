// Object: DakarUILootContainerEntityData
// ClassId: 2592
// RuntimeId: 33680
// TypeInfo: 0x0000000144D66270
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarUILootContainerEntityData : public Entity::EntityData {
        Float32 ProximityRadius; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DakarUILootContainerEntityData) == 0x28);
}
#pragma pack(pop)