// Object: LicenseLevelDescriptionComponent
// ClassId: 4214
// RuntimeId: 12060
// TypeInfo: 0x0000000144D2A4A0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LicenseLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        CString License; // 0x18
    }; // 0x20
    static_assert(sizeof(LicenseLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)