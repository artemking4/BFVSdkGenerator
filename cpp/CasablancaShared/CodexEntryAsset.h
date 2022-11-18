// Object: CodexEntryAsset
// ClassId: 216
// RuntimeId: 39679
// TypeInfo: 0x0000000144D02DA0
#include "../Core/Asset.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/CodexEntryCategory.h"
#include "../Global/CString.h"
#include "../MovieBase/MovieTextureBaseAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CodexEntryAsset : public Core::Asset {
        Uint32 EntryId; // 0x20
        CasablancaShared::CodexEntryCategory Category; // 0x24
        CString Header; // 0x28
        CString ShortTitle; // 0x30
        CString Description; // 0x38
        CString SubHeader; // 0x40
        CString Text2; // 0x48
        CString VoiceOverRawPath; // 0x50
        CString VoiceOverPath; // 0x58
        MovieBase::MovieTextureBaseAsset Video; // 0x60
        CString VideoRawPath; // 0x68
        CString VideoNPXPosterFramePath; // 0x70
        Boolean IsSecret; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(CodexEntryAsset) == 0x80);
}
#pragma pack(pop)