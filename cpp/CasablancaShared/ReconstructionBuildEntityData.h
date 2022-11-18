// Object: ReconstructionBuildEntityData
// ClassId: 3103
// RuntimeId: 31374
// TypeInfo: 0x0000000144D12000
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ReconstructionBuildEntityData : public Entity::EntityData {
        Float32 Radius; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ReconstructionBuildEntityData) == 0x28);
}
#pragma pack(pop)