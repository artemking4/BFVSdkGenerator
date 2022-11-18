// Object: BFTreadMarkMaterialRelationData
// ClassId: 4251
// RuntimeId: 35562
// TypeInfo: 0x0000000144D30BA0
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../CasablancaShared/BFTreadMarkTemplate.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTreadMarkMaterialRelationData : public Entity::PhysicsMaterialRelationPropertyData {
        CasablancaShared::BFTreadMarkTemplate TreadMark; // 0x20
    }; // 0x28
    static_assert(sizeof(BFTreadMarkMaterialRelationData) == 0x28);
}
#pragma pack(pop)