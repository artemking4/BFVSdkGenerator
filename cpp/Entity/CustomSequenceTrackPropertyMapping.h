// Object: CustomSequenceTrackPropertyMapping
// ClassId: 1486
// RuntimeId: 51591
// TypeInfo: 0x0000000144ED8870
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class CustomSequenceTrackPropertyMapping : public Core::DataContainer {
        Int32 TrackPropertyID; // 0x18
        Int32 SequencePropertyID; // 0x1C
    }; // 0x20
    static_assert(sizeof(CustomSequenceTrackPropertyMapping) == 0x20);
}
#pragma pack(pop)