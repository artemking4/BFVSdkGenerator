// Object: GroupTransformLayerData
// ClassId: 4070
// RuntimeId: 27661
// TypeInfo: 0x0000000144F5F9E0
#include "../Timeline/TransformLayerData.h"

#pragma pack(push, 8)
namespace Timeline {
    class GroupTransformLayerData : public Timeline::TransformLayerData {
        Array<Timeline::TransformLayerData> Children; // 0x40
    }; // 0x48
    static_assert(sizeof(GroupTransformLayerData) == 0x48);
}
#pragma pack(pop)