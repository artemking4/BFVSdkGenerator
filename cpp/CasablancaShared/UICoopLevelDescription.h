// Object: UICoopLevelDescription
// ClassId: 4220
// RuntimeId: 21924
// TypeInfo: 0x0000000144D2A720
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICoopLevelDescription : public GameShared::LevelDescriptionComponent {
        CString Debriefing; // 0x18
        Int32 DevTime; // 0x20
        char pad_0x24[0x4];
        Array<CString> UnlockedByLevels; // 0x28
    }; // 0x30
    static_assert(sizeof(UICoopLevelDescription) == 0x30);
}
#pragma pack(pop)