// Object: DebugWeaponLoaderEntityData
// ClassId: 2615
// RuntimeId: 2296
// TypeInfo: 0x0000000144D01820
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DebugWeaponLoaderEntityData : public Entity::EntityData {
        Int32 WeaponIndex; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DebugWeaponLoaderEntityData) == 0x28);
}
#pragma pack(pop)