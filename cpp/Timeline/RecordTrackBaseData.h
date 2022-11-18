// Object: RecordTrackBaseData
// ClassId: 4029
// RuntimeId: 22463
// TypeInfo: 0x0000000144F63B90
#include "../Timeline/LinkTrackData.h"
#include "../Global/Int32.h"

namespace Timeline {
    class RecordTrackBaseData : public Timeline::LinkTrackData {
        Int32 FramesToSkipPerKey; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(RecordTrackBaseData) == 0x48);
}