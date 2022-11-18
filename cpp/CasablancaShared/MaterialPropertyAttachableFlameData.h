// Object: MaterialPropertyAttachableFlameData
// ClassId: 4254
// RuntimeId: 26550
// TypeInfo: 0x0000000144D40150
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../CasablancaShared/AttachableFlameAssetCondition.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MaterialPropertyAttachableFlameData : public Entity::PhysicsMaterialRelationPropertyData {
        Array<CasablancaShared::AttachableFlameAssetCondition> FlameConditions; // 0x20
    }; // 0x28
    static_assert(sizeof(MaterialPropertyAttachableFlameData) == 0x28);
}
#pragma pack(pop)