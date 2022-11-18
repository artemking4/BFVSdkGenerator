// Object: MementoSettings
// ClassId: 4997
// RuntimeId: 51107
// TypeInfo: 0x0000000144EE9260
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Memento {
    class MementoSettings : public Core::SystemSettings {
        CString Url; // 0x20
        Boolean Enabled; // 0x28
        Boolean SSL; // 0x29
        Boolean GzipCompression; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(MementoSettings) == 0x30);
}
#pragma pack(pop)