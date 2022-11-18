// Object: ANTVec3TrackData
// ClassId: 4051
// RuntimeId: 58489
// TypeInfo: 0x0000000144E9DDD0
#include "../Timeline/Vec3TrackData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class ANTVec3TrackData : public Timeline::Vec3TrackData {
        char pad_0x58[0x8];
        Core::Vec3 ResetValue; // 0x60
        Ant::AntRef Signal; // 0x70
        Boolean ResetOnLeave; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(ANTVec3TrackData) == 0x90);
}
#pragma pack(pop)