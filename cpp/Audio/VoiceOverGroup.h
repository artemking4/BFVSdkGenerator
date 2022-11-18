// Object: VoiceOverGroup
// ClassId: 5587
// RuntimeId: 53457
// TypeInfo: 0x0000000144E1ACC0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverGroup : public Core::DataContainer {
        CString Name; // 0x18
        Int32 Priority; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VoiceOverGroup) == 0x28);
}
#pragma pack(pop)