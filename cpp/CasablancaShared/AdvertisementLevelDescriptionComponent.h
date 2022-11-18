// Object: AdvertisementLevelDescriptionComponent
// ClassId: 4206
// RuntimeId: 62743
// TypeInfo: 0x0000000144D6CF30
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/CString.h"
#include "../CasablancaShared/AdvertisementZoneMember.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AdvertisementLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        CString Identifier; // 0x18
        Array<CasablancaShared::AdvertisementZoneMember> Members; // 0x20
    }; // 0x28
    static_assert(sizeof(AdvertisementLevelDescriptionComponent) == 0x28);
}
#pragma pack(pop)