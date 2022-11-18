// Object: UIEncounterTypeMetaData
// ClassId: 5414
// RuntimeId: 63402
// TypeInfo: 0x0000000144D98A10
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIEncounterTypeMetaData : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId ObjectiveSid; // 0x28
        CString EncounterTypeIcon; // 0x30
    }; // 0x38
    static_assert(sizeof(UIEncounterTypeMetaData) == 0x38);
}
#pragma pack(pop)