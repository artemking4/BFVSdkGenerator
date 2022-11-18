// Object: NuiSpeechDialect
// ClassId: 4362
// RuntimeId: 51691
// TypeInfo: 0x0000000144D299A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/Dialect.h"
#include "../Global/CString.h"
#include "../Core/LanguageFormat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechDialect : public Core::DataContainer {
        CasablancaShared::Dialect Dialect; // 0x18
        char pad_0x1C[0x4];
        CString Tag; // 0x20
        CString Name; // 0x28
        Core::LanguageFormat Language; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(NuiSpeechDialect) == 0x38);
}
#pragma pack(pop)