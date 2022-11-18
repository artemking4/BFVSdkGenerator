// Object: LinearMediaSettings
// ClassId: 4994
// RuntimeId: 49799
// TypeInfo: 0x0000000144EA0480
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Int64.h"
#include "../Global/Uint8.h"
#include "../Global/Uint32.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace LinearMedia {
    class LinearMediaSettings : public Core::SystemSettings {
        Int32 InlineMessageProcessCountMax; // 0x20
        char pad_0x24[0x4];
        Int64 InlineMessageProcessTimeMaxNS; // 0x28
        Int64 PerJobMessageProcessTimeMaxNS; // 0x30
        Int64 TurboLoaderChunkPollFrequencyNS; // 0x38
        Int64 QueueMemoryReapFrequencyNS; // 0x40
        Int64 MemoryRebalanceFrequencyNS; // 0x48
        Int64 MemoryRebalanceTimeMaxNS; // 0x50
        Uint64 CpuPoolSize; // 0x58
        Uint64 GpuPoolSize; // 0x60
        Int32 PerJobMessageProcessCountMax; // 0x68
        Int32 MemoryRebalanceMaxItemCount; // 0x6C
        Int32 MessageProcessSpinCount; // 0x70
        Uint32 QueueAffinity; // 0x74
        Uint32 ProcessAffinity; // 0x78
        Uint32 MaxConcurrentDispatchJobs; // 0x7C
        Uint8 QueuePriority; // 0x80
        Uint8 ProcessPriority; // 0x81
        Boolean TrackHeapsS; // 0x82
        char pad_0x83[0x5];
    }; // 0x88
    static_assert(sizeof(LinearMediaSettings) == 0x88);
}
#pragma pack(pop)