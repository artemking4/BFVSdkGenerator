// Object: StreamPoolPreset
// ClassId: 4925
// RuntimeId: 1007
// TypeInfo: 0x0000000144E16540
#include "../Core/DataContainer.h"
#include "../Audio/StreamPoolMapping.h"

#pragma pack(push, 8)
namespace Audio {
    class StreamPoolPreset : public Core::DataContainer {
        Array<Audio::StreamPoolMapping> Mappings; // 0x18
    }; // 0x20
    static_assert(sizeof(StreamPoolPreset) == 0x20);
}
#pragma pack(pop)