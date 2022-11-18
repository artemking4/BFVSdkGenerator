// Object: BFTreadMarkMakerEntityData
// ClassId: 2153
// RuntimeId: 12690
// TypeInfo: 0x0000000144D30CA0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTreadMarkMakerEntityData : public Entity::EntityData {
        Float32 Width; // 0x20
        Float32 Length; // 0x24
        Float32 OffsetX; // 0x28
        Float32 OffsetZ; // 0x2C
        Entity::MaterialDecl WheelMaterial; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFTreadMarkMakerEntityData) == 0x38);
}
#pragma pack(pop)