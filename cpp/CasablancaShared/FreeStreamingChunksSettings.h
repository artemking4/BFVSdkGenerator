// Object: FreeStreamingChunksSettings
// ClassId: 4987
// RuntimeId: 28300
// TypeInfo: 0x0000000144D096B0
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../CasablancaShared/FreeStreamingChunksLoadInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FreeStreamingChunksSettings : public Core::SystemSettings {
        Int32 DefaultLoadMask; // 0x20
        char pad_0x24[0x4];
        Array<CString> SuperBundles; // 0x28
        Array<CasablancaShared::FreeStreamingChunksLoadInfo> ChunkSuperBundles; // 0x30
        Array<Int32> LoadMasks; // 0x38
    }; // 0x40
    static_assert(sizeof(FreeStreamingChunksSettings) == 0x40);
}
#pragma pack(pop)