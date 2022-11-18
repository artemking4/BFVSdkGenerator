// Object: UIMatchmakingDescription
// ClassId: 5430
// RuntimeId: 46994
// TypeInfo: 0x0000000144D99090
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMatchmakingDescription : public CasablancaShared::UIItemDescription {
        CString Identifier; // 0x28
        Int32 SortIndex; // 0x30
        char pad_0x34[0x4];
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x38
        UIIncubatorShared::LocalizedStringId MapsDescriptionSid; // 0x40
        Array<CString> GameModes; // 0x48
        Array<CString> LevelPaths; // 0x50
        CString Experience; // 0x58
        CString ExpansionPackImagePath; // 0x60
        CString VideoThumbnailPath; // 0x68
    }; // 0x70
    static_assert(sizeof(UIMatchmakingDescription) == 0x70);
}
#pragma pack(pop)