// Object: ProfileOptionDataEnum
// ClassId: 670
// RuntimeId: 14241
// TypeInfo: 0x0000000144E753C0
#include "../GameShared/ProfileOptionData.h"
#include "../GameShared/ProfileOptionDataEnumItem.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionDataEnum : public GameShared::ProfileOptionData {
        Array<GameShared::ProfileOptionDataEnumItem> Items; // 0x30
    }; // 0x38
    static_assert(sizeof(ProfileOptionDataEnum) == 0x38);
}
#pragma pack(pop)