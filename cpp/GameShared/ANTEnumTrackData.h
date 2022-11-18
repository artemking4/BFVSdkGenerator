// Object: ANTEnumTrackData
// ClassId: 4036
// RuntimeId: 33563
// TypeInfo: 0x0000000144E9DD50
#include "../Timeline/PropertyTrackBaseData.h"
#include "../GameShared/ANTEnumKeyframe.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTEnumTrackData : public Timeline::PropertyTrackBaseData {
        Array<GameShared::ANTEnumKeyframe> Keyframes; // 0x40
        Ant::AntRef Signal; // 0x48
        Int32 ResetValue; // 0x5C
        Boolean ResetOnLeave; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(ANTEnumTrackData) == 0x68);
}
#pragma pack(pop)