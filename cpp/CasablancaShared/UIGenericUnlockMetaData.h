// Object: UIGenericUnlockMetaData
// ClassId: 5417
// RuntimeId: 2854
// TypeInfo: 0x0000000144D99B10
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIMetadataBlueprintData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGenericUnlockMetaData : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x30
        CString HighlightImagePath; // 0x38
        CString ImagePath; // 0x40
        Array<CasablancaShared::UIMetadataBlueprintData> BlueprintBundles; // 0x48
        Boolean SoldierInfoVisible; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(UIGenericUnlockMetaData) == 0x58);
}
#pragma pack(pop)