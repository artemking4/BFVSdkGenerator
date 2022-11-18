// Object: DummyEntityTrackData
// ClassId: 4010
// RuntimeId: 8129
// TypeInfo: 0x0000000144F64820
#include "../Timeline/EntityTrackBaseData.h"

#pragma pack(push, 8)
namespace Timeline {
    class DummyEntityTrackData : public Timeline::EntityTrackBaseData {
    }; // 0x40
    static_assert(sizeof(DummyEntityTrackData) == 0x40);
}
#pragma pack(pop)