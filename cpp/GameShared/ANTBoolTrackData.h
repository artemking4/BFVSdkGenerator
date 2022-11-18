// Object: ANTBoolTrackData
// ClassId: 4039
// RuntimeId: 43330
// TypeInfo: 0x0000000144E9DF50
#include "../Timeline/BoolTrackData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTBoolTrackData : public Timeline::BoolTrackData {
        Ant::AntRef Signal; // 0x48
        Boolean ResetOnLeave; // 0x5C
        Boolean ResetValue; // 0x5D
        char pad_0x5E[0x2];
    }; // 0x60
    static_assert(sizeof(ANTBoolTrackData) == 0x60);
}
#pragma pack(pop)