// Object: RecordEntryInputTrackData
// ClassId: 4031
// RuntimeId: 9452
// TypeInfo: 0x0000000144E962B0
#include "../Timeline/RecordTrackChildrenData.h"
#include "../Global/Uint32.h"
#include "../Timeline/FloatTrackData.h"

#pragma pack(push, 8)
namespace GameShared {
    class RecordEntryInputTrackData : public Timeline::RecordTrackChildrenData {
        Uint32 EntryId; // 0x48
        char pad_0x4C[0x4];
        Timeline::FloatTrackData FireInput; // 0x50
        Timeline::FloatTrackData PitchInput; // 0x58
        Timeline::FloatTrackData YawInput; // 0x60
        Timeline::FloatTrackData RollInput; // 0x68
        Timeline::FloatTrackData ThrottleInput; // 0x70
        Timeline::FloatTrackData DigitalBitFlagsInput; // 0x78
        Timeline::FloatTrackData AimingYaw; // 0x80
        Timeline::FloatTrackData AimingPitch; // 0x88
    }; // 0x90
    static_assert(sizeof(RecordEntryInputTrackData) == 0x90);
}
#pragma pack(pop)