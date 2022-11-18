// Object: NuiSpeechDataSetPhrase
// ClassId: 4368
// RuntimeId: 33774
// TypeInfo: 0x0000000144D28F20
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../Global/CString.h"
#include "../CasablancaShared/NuiSpeechTargetDataType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechDataSetPhrase : public CasablancaShared::NuiSpeechPhrase {
        CString Param; // 0x48
        CasablancaShared::NuiSpeechTargetDataType DataType; // 0x50
        Boolean ForceUpdate; // 0x54
        char pad_0x55[0x3];
    }; // 0x58
    static_assert(sizeof(NuiSpeechDataSetPhrase) == 0x58);
}
#pragma pack(pop)