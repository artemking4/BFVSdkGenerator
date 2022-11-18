// Object: ShrinkingPlayAreaWeightData
// ClassId: 3443
// RuntimeId: 10682
// TypeInfo: 0x0000000144D660F0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ShrinkingPlayAreaWeightData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        Float32 Probability; // 0x64
        Float32 Weight; // 0x68
        Int32 MinZoneSizeIndex; // 0x6C
        Int32 MaxZoneSizeIndex; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(ShrinkingPlayAreaWeightData) == 0x80);
}
#pragma pack(pop)