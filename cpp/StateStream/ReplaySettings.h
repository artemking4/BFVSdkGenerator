// Object: ReplaySettings
// ClassId: 5016
// RuntimeId: 28815
// TypeInfo: 0x0000000144F52B20
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace StateStream {
    class ReplaySettings : public Core::SystemSettings {
        Uint32 HeapCoreSizeInMB; // 0x20
        Uint32 HeapReserveSizeInMB; // 0x24
        Uint32 ClipMaxSizeInKB; // 0x28
        Uint32 ClipSBASizeInKB; // 0x2C
        Uint32 ClipMaxSizeCompressedInKB; // 0x30
        Uint32 FramesPerClip; // 0x34
        Uint32 UncompressedFrameCount; // 0x38
        Uint32 UncompressedFrameCountReadOnly; // 0x3C
        Uint32 TocEntries; // 0x40
        Uint32 TocPinnedEntriesPercentage; // 0x44
        CString VFSMountPoint; // 0x48
        Uint32 BufferSizeInMB; // 0x50
        Uint32 CachePageSizeInKB; // 0x54
        Uint32 CacheSizeInMB; // 0x58
        Uint32 LZ4SoftwareCompressionBlockSizeInKB; // 0x5C
        Uint32 ZLibHardwareCompressionBlockSizeInKB; // 0x60
        Boolean Enable; // 0x64
        Boolean HeapAllowGrow; // 0x65
        Boolean PrefetchClips; // 0x66
        Boolean CompressEndClips; // 0x67
    }; // 0x68
    static_assert(sizeof(ReplaySettings) == 0x68);
}
#pragma pack(pop)