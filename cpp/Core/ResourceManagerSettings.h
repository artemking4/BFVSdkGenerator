// Object: ResourceManagerSettings
// ClassId: 5017
// RuntimeId: 30353
// TypeInfo: 0x0000000144BE87F0
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Core {
    class ResourceManagerSettings : public Core::SystemSettings {
        Int32 CasBundleReadBufferSizeKb; // 0x20
        Int32 CasBundleDecompressBufferSizeKb; // 0x24
        Int32 CasBundleDecompressBufferCount; // 0x28
        Boolean BundleProfilingEnable; // 0x2C
        Boolean SPUDecompressEnable; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(ResourceManagerSettings) == 0x30);
}
#pragma pack(pop)