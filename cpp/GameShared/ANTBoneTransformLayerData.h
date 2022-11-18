// Object: ANTBoneTransformLayerData
// ClassId: 4062
// RuntimeId: 35617
// TypeInfo: 0x0000000144E9E2D0
#include "../Timeline/TransformLayerData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTBoneTransformLayerData : public Timeline::TransformLayerData {
        CString BoneName; // 0x40
    }; // 0x48
    static_assert(sizeof(ANTBoneTransformLayerData) == 0x48);
}
#pragma pack(pop)