// Object: StreamPool
// ClassId: 4923
// RuntimeId: 39723
// TypeInfo: 0x0000000144E16AC0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Audio/StreamPoolSetup.h"

#pragma pack(push, 8)
namespace Audio {
    class StreamPool : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 StreamPoolId; // 0x20
        char pad_0x24[0x4];
        Array<Audio::StreamPoolSetup> Setups; // 0x28
    }; // 0x30
    static_assert(sizeof(StreamPool) == 0x30);
}
#pragma pack(pop)