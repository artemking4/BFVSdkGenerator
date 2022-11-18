// Object: FenceModelEntityData
// ClassId: 3328
// RuntimeId: 35893
// TypeInfo: 0x0000000144E90660
#include "../GameShared/StaticModelEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class FenceModelEntityData : public GameShared::StaticModelEntityData {
        Float32 Width; // 0x100
        Float32 Angle; // 0x104
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(FenceModelEntityData) == 0x110);
}
#pragma pack(pop)