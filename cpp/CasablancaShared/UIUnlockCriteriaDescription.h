// Object: UIUnlockCriteriaDescription
// ClassId: 5453
// RuntimeId: 61236
// TypeInfo: 0x0000000144D98B90
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

namespace CasablancaShared {
    class UIUnlockCriteriaDescription : public CasablancaShared::UIItemDescription {
        Int32 UnlockAtClassLevel; // 0x28
        char pad_0x2C[0x4];
        UIIncubatorShared::LocalizedStringId UnlockingClassNameSid; // 0x30
        CString UnlockingClassIcon; // 0x38
        UIIncubatorShared::LocalizedStringId UnlockingAssignmentNameSid; // 0x40
        CString UnlockingAssignmentIcon; // 0x48
        UIIncubatorShared::LocalizedStringId UnlockingWarStoryNameSid; // 0x50
        Boolean ByClassLevel; // 0x58
        Boolean ByShipment; // 0x59
        Boolean ByAssignment; // 0x5A
        Boolean ByWarStory; // 0x5B
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(UIUnlockCriteriaDescription) == 0x60);
}