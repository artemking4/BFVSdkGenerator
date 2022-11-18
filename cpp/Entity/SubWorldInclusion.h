// Object: SubWorldInclusion
// ClassId: 773
// RuntimeId: 53051
// TypeInfo: 0x0000000144EE6B50
#include "../Core/Asset.h"
#include "../Entity/SubWorldInclusionCriterion.h"

#pragma pack(push, 8)
namespace Entity {
    class SubWorldInclusion : public Core::Asset {
        Array<Entity::SubWorldInclusionCriterion> Criteria; // 0x20
    }; // 0x28
    static_assert(sizeof(SubWorldInclusion) == 0x28);
}
#pragma pack(pop)