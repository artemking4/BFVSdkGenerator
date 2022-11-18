// Object: EntityTrackBaseData
// ClassId: 4008
// RuntimeId: 3129
// TypeInfo: 0x0000000144F648A0
#include "../Timeline/TimelineTrackData.h"
#include "../Global/Boolean.h"
#include "../Timeline/EntityTrackSharingPolicy.h"

#pragma pack(push, 8)
namespace Timeline {
    class EntityTrackBaseData : public Timeline::TimelineTrackData {
        Array<Timeline::TimelineTrackData> Children; // 0x30
        Timeline::EntityTrackSharingPolicy EntitySharingPolicy; // 0x38
        Boolean InheritedToChildConversationLines; // 0x3C
        Boolean Required; // 0x3D
        Boolean HandleDeletedEntity; // 0x3E
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(EntityTrackBaseData) == 0x40);
}
#pragma pack(pop)