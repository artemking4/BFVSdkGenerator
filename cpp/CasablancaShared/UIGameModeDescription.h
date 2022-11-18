// Object: UIGameModeDescription
// ClassId: 5416
// RuntimeId: 28208
// TypeInfo: 0x0000000144D99B90
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../CasablancaShared/GameModeVariation.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGameModeDescription : public CasablancaShared::UIItemDescription {
        CString Identifier; // 0x28
        UIIncubatorShared::LocalizedStringId NameSid; // 0x30
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x38
        UIIncubatorShared::LocalizedStringId AbbreviationSid; // 0x40
        Array<CasablancaShared::GameModeVariation> Variations; // 0x48
        Boolean ExcludeFromBrowser; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(UIGameModeDescription) == 0x58);
}
#pragma pack(pop)