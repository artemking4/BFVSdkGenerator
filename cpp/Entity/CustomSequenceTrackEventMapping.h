// Object: CustomSequenceTrackEventMapping
// ClassId: 1484
// RuntimeId: 61048
// TypeInfo: 0x0000000144ED88F0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class CustomSequenceTrackEventMapping : public Core::DataContainer {
        Int32 TrackEventID; // 0x18
        Int32 SequenceEventID; // 0x1C
    }; // 0x20
    static_assert(sizeof(CustomSequenceTrackEventMapping) == 0x20);
}
#pragma pack(pop)