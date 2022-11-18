// Object: GroupTrackRootData
// ClassId: 365
// RuntimeId: 19591
// TypeInfo: 0x0000000144F644A0
#include "../Core/DataContainerPolicyAsset.h"
#include "../Timeline/TimelineTrackData.h"

#pragma pack(push, 8)
namespace Timeline {
    class GroupTrackRootData : public Core::DataContainerPolicyAsset {
        Array<Timeline::TimelineTrackData> Children; // 0x20
    }; // 0x28
    static_assert(sizeof(GroupTrackRootData) == 0x28);
}
#pragma pack(pop)