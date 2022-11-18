// Object: NuiSpeechSquadNames
// ClassId: 603
// RuntimeId: 20180
// TypeInfo: 0x0000000144D28D20
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechSquadNames : public Core::Asset {
        CString SidPrefix; // 0x20
        Array<CString> SquadNames; // 0x28
    }; // 0x30
    static_assert(sizeof(NuiSpeechSquadNames) == 0x30);
}
#pragma pack(pop)