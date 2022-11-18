// Object: VoiceOverLabel
// ClassId: 5589
// RuntimeId: 21454
// TypeInfo: 0x0000000144E1C8C0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLabel : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 NameHash; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VoiceOverLabel) == 0x28);
}
#pragma pack(pop)