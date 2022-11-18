// Object: MaterialDamageTypeCompareEntityData
// ClassId: 2879
// RuntimeId: 1327
// TypeInfo: 0x0000000144D43650
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameplaySim/MaterialDamageType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MaterialDamageTypeCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameplaySim::MaterialDamageType A; // 0x24
        GameplaySim::MaterialDamageType B; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(MaterialDamageTypeCompareEntityData) == 0x30);
}
#pragma pack(pop)