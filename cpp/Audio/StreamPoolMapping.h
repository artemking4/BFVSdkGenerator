// Object: StreamPoolMapping
// ClassId: 4924
// RuntimeId: 35996
// TypeInfo: 0x0000000144E164C0
#include "../Core/DataContainer.h"
#include "../Audio/StreamPool.h"
#include "../Audio/StreamPoolSetup.h"

#pragma pack(push, 8)
namespace Audio {
    class StreamPoolMapping : public Core::DataContainer {
        Audio::StreamPool StreamPool; // 0x18
        Audio::StreamPoolSetup StreamPoolSetup; // 0x20
    }; // 0x28
    static_assert(sizeof(StreamPoolMapping) == 0x28);
}
#pragma pack(pop)