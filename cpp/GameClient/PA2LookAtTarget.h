// Object: PA2LookAtTarget
// ClassId: 4405
// RuntimeId: 23946
// TypeInfo: 0x0000000144E451C0
#include "../Core/DataContainer.h"
#include "../Timeline/EntityTrackBaseData.h"

#pragma pack(push, 8)
namespace GameClient {
    class PA2LookAtTarget : public Core::DataContainer {
        Timeline::EntityTrackBaseData EntityTrack; // 0x18
    }; // 0x20
    static_assert(sizeof(PA2LookAtTarget) == 0x20);
}
#pragma pack(pop)