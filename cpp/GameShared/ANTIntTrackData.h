// Object: ANTIntTrackData
// ClassId: 4045
// RuntimeId: 6947
// TypeInfo: 0x0000000144E9DE50
#include "../Timeline/IntTrackData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTIntTrackData : public Timeline::IntTrackData {
        Ant::AntRef Signal; // 0x48
        Int32 ResetValue; // 0x5C
        Boolean ResetOnLeave; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(ANTIntTrackData) == 0x68);
}
#pragma pack(pop)