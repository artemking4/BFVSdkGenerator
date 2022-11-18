// Object: ReconstructionEntityConduitData
// ClassId: 3104
// RuntimeId: 63084
// TypeInfo: 0x0000000144D12180
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ReconstructionEntityConduitData : public Entity::EntityData {
        Float32 DamageAmount; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ReconstructionEntityConduitData) == 0x28);
}
#pragma pack(pop)