// Object: StreamPoolSetup
// ClassId: 4926
// RuntimeId: 51756
// TypeInfo: 0x0000000144E16B40
#include "../Core/DataContainer.h"
#include "../Audio/StreamPoolProperties.h"
#include "../Audio/StreamStarveMode.h"

#pragma pack(push, 8)
namespace Audio {
    class StreamPoolSetup : public Core::DataContainer {
        Audio::StreamPoolProperties Properties; // 0x18
        Audio::StreamStarveMode StreamStarveMode; // 0x2C
    }; // 0x30
    static_assert(sizeof(StreamPoolSetup) == 0x30);
}
#pragma pack(pop)