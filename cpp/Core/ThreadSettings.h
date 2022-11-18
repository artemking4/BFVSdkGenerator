// Object: ThreadSettings
// ClassId: 5169
// RuntimeId: 38114
// TypeInfo: 0x0000000144BE8470
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Core {
    class ThreadSettings : public Core::DataContainer {
        Int32 ProcessorCount; // 0x18
        Int32 MaxLiveEditProcessorCount; // 0x1C
        Int32 JobThreadPriority; // 0x20
        Int32 FreeProcessorCount; // 0x24
    }; // 0x28
    static_assert(sizeof(ThreadSettings) == 0x28);
}
#pragma pack(pop)