// Object: CoverPeekEntityData
// ClassId: 2557
// RuntimeId: 60558
// TypeInfo: 0x0000000144F39610
#include "../Entity/EntityData.h"
#include "../SoldierShared/CoverPeekBinding.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../SoldierShared/ExcludeMaterial.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class CoverPeekEntityData : public Entity::EntityData {
        SoldierShared::CoverPeekBinding Binding; // 0x20
        Float32 DetectDistanceForward; // 0x98
        Float32 DetectDistanceHorizontal; // 0x9C
        Array<SoldierShared::ExcludeMaterial> ExcludeMaterials; // 0xA0
        Boolean OverEnabled; // 0xA8
        Boolean HorizEnabled; // 0xA9
        char pad_0xAA[0x6];
    }; // 0xB0
    static_assert(sizeof(CoverPeekEntityData) == 0xB0);
}
#pragma pack(pop)