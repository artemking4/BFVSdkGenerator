// Object: GroundAttachTransformLayerData
// ClassId: 4069
// RuntimeId: 7929
// TypeInfo: 0x0000000144E968B0
#include "../Timeline/TransformLayerData.h"
#include "../GameShared/GroundAttachMethod.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class GroundAttachTransformLayerData : public Timeline::TransformLayerData {
        GameShared::GroundAttachMethod AttachMethod; // 0x40
        Float32 RaycastStartHeight; // 0x44
        Float32 RaycastEndHeight; // 0x48
        Boolean AllowAboveGround; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(GroundAttachTransformLayerData) == 0x50);
}
#pragma pack(pop)