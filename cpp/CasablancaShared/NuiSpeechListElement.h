// Object: NuiSpeechListElement
// ClassId: 4363
// RuntimeId: 60117
// TypeInfo: 0x0000000144D28E20
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechListElement : public Core::DataContainer {
        CString Tag; // 0x18
        CString Sid; // 0x20
        Array<CString> Variations; // 0x28
    }; // 0x30
    static_assert(sizeof(NuiSpeechListElement) == 0x30);
}
#pragma pack(pop)