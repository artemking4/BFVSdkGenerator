// Object: ANTFloatTrackData
// ClassId: 4043
// RuntimeId: 55079
// TypeInfo: 0x0000000144E9DED0
#include "../Timeline/FloatTrackData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTFloatTrackData : public Timeline::FloatTrackData {
        Ant::AntRef Signal; // 0x48
        Float32 ResetValue; // 0x5C
        Boolean ResetOnLeave; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(ANTFloatTrackData) == 0x68);
}
#pragma pack(pop)