// Object: BFUISingleplayerChapter
// ClassId: 181
// RuntimeId: 27386
// TypeInfo: 0x0000000144D43D50
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerChapter : public Core::Asset {
        CString LevelName; // 0x20
        CString LevelPath; // 0x28
        CString TexturePath; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUISingleplayerChapter) == 0x38);
}
#pragma pack(pop)