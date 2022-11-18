// Object: CustomSequenceTrackLinkMapping
// ClassId: 1485
// RuntimeId: 22331
// TypeInfo: 0x0000000144ED8970
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class CustomSequenceTrackLinkMapping : public Core::DataContainer {
        Int32 TrackLinkID; // 0x18
        Int32 SequenceLinkID; // 0x1C
    }; // 0x20
    static_assert(sizeof(CustomSequenceTrackLinkMapping) == 0x20);
}
#pragma pack(pop)